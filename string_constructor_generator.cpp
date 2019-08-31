
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

////////////////////////////////

enum{
    Param_Literal,
    Param_DynamicString,
    Param_SignedInteger,
    Param_HexInteger,
    Param_COUNT,
};

struct Param_Array{
    int *param_types;
    int count;
};

////////////////////////////////

char*
fill_string_from_uint(char *buffer, unsigned int x){
    char *ptr = buffer;
    if (x == 0){
        *ptr = '0';
        ptr += 1;
    }
    else{
        char *first = ptr;
        for (;x > 0;){
            char c = (x % 10);
            *ptr = (c + '0');
            ptr += 1;
            x /= 10;
        }
        for (char *i = first, *j = ptr - 1; i < j; i += 1, j -= 1){
            char temp = *i;
            *i = *j;
            *j = temp;
        }
    }
    return(ptr);
}

////////////////////////////////

void
generate_string_constructor(Param_Array array, FILE *out){
    fprintf(out, "static char*\n");
    fprintf(out, "string_construct(");
    for (int i = 0; i < array.count; i += 1){
        int param_type = array.param_types[i];
        switch (param_type){
            case Param_Literal:
            {
                fprintf(out, "String_Length ");
            }break;
            case Param_DynamicString:
            {
                fprintf(out, "char *");
            }break;
            case Param_SignedInteger:
            {
                fprintf(out, "int ");
            }break;
            case Param_HexInteger:
            {
                fprintf(out, "Hex_Int ");
            }break;
        }
        fprintf(out, "v%d", i);
        if (i + 1 < array.count){
            fprintf(out, ", ");
        } 
    }
    fprintf(out, "){\n");
    
    int constant_size = 1;
    for (int i = 0; i < array.count; i += 1){
        int param_type = array.param_types[i];
        switch (param_type){
            case Param_SignedInteger:
            {
                constant_size += 11;
            }break;
            case Param_HexInteger:
            {
                constant_size += 8;
            }break;
        }
    }
    fprintf(out, "int total_size = %d;\n", constant_size);
    for (int i = 0; i < array.count; i += 1){
        int param_type = array.param_types[i];
        switch (param_type){
            case Param_Literal:
            {
                fprintf(out, "total_size += v%d.length;\n", i);
            }break;
            case Param_DynamicString:
            {
                fprintf(out, "int v%d_length = strlen(v%d);\n", i, i);
                fprintf(out, "total_size += v%d_length;\n", i);
            }break;
        }
    }
    
    fprintf(out, "char *string = (char*)malloc(total_size);\n");
    fprintf(out, "char *ptr = string;\n");
    
    for (int i = 0; i < array.count; i += 1){
        int param_type = array.param_types[i];
        switch (param_type){
            case Param_Literal:
            {
                fprintf(out, "memcpy(ptr, v%d.str, v%d.length);\n", i, i);
                fprintf(out, "ptr += v%d.length;\n", i);
            }break;
            case Param_DynamicString:
            {
                fprintf(out, "memcpy(ptr, v%d, v%d_length);\n", i, i);
                fprintf(out, "ptr += v%d_length;\n", i);
            }break;
            case Param_SignedInteger:
            {
                fprintf(out, "ptr = fill_string_from_int(ptr, v%d);\n", i);
            }break;
            case Param_HexInteger:
            {
                fprintf(out, "ptr = fill_string_from_hex(ptr, v%d.x);\n", i);
            }break;
        }
    }
    
    fprintf(out, "*ptr = 0;\n");
    fprintf(out, "return(string);\n");
    fprintf(out, "}\n");
}

int main(void){
    FILE *out = fopen("string_constructors_generated.cpp", "wb");
    
    int array_space[4];
    for (int count = 1; count <= 4; count += 1){
        memset(array_space, 0, sizeof(array_space));
        
        Param_Array array = {};
        array.param_types = array_space;
        array.count = count;
        for (;;){
            generate_string_constructor(array, out);
            
            int i = 0;
            for (;;){
                array_space[i] += 1;
                if (array_space[i] >= Param_COUNT){
                    array_space[i] = 0;
                    i += 1;
                    if (i >= count){
                        goto double_break;
                    }
                }
                else{
                    break;
                }
            }
        }
        double_break:;
    }
    
    fclose(out);
    
    return(0);
}
