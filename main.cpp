
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char*
fill_string_from_hex(char *buffer, unsigned int x){
    char *ptr = buffer;
    if (x == 0){
        *ptr = '0';
        ptr += 1;
    }
    else{
        char *first = ptr;
        for (;x > 0;){
            char c = (x % 16);
            if (c < 10){
                *ptr = (c + '0');
            }
            else{
                *ptr = (c + 'a' - 0xA);
            }
            ptr += 1;
            x /= 16;
        }
        for (char *i = first, *j = ptr - 1; i < j; i += 1, j -= 1){
            char temp = *i;
            *i = *j;
            *j = temp;
        }
    }
    return(ptr);
}

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

char*
fill_string_from_int(char *buffer, int x){
    char *ptr = buffer;
    if (x < 0){
        *ptr = '-';
        ptr += 1;
        x *= -1;
    }
    ptr = fill_string_from_uint(ptr, (unsigned int)x);
    return(ptr);
}

struct String_Length{
    char *str;
    int length;
};
static String_Length
make_string(char *ptr, int length){
    String_Length result = {ptr, length};
    return(result);
}
#define lit(S) make_string((S), (sizeof(S) - 1))
struct Hex_Int{
    int x;
};
static Hex_Int hex(int x){
    Hex_Int result = {x};
    return(result);
}

#include "string_constructors_generated.cpp"

int main(void){
    int x = -1051;
    char *sub_hello = "Hello Structure Modeling!";
    int byte = 0xF8;
    fprintf(stdout, "Hello World! %d %s %x\n", x, sub_hello, byte);
    
    String_Length space = lit(" ");
    String_Length line = lit("\n");
    
    char *string = string_construct(sub_hello, space, x, lit(" - "));
    string       = string_construct(string, hex(byte), hex(byte), lit(" Hello World!\n"));
    fprintf(stdout, string);
    
#if 0    
    int constant_size = sizeof("Hello World!   \n");
    int x_size = 11;
    int sub_hello_size = strlen(sub_hello);
    int byte_size = 8;
    int total_size = constant_size + x_size + sub_hello_size + byte_size;
    char *constructed = (char*)malloc(total_size);
    char *ptr = constructed;
    memcpy(ptr, "Hello World! ", sizeof("Hello World! ") - 1);
    ptr += sizeof("Hello World! ") - 1;
    ptr = fill_string_from_int(ptr, x);
    memcpy(ptr, " ", 1);
    ptr += 1;
    memcpy(ptr, sub_hello, sub_hello_size);
    ptr += sub_hello_size;
    memcpy(ptr, " ", 1);
    ptr += 1;
    ptr = fill_string_from_hex(ptr, byte);
    memcpy(ptr, "\n", 1);
    ptr += 1;
    *ptr = 0;
    fprintf(stdout, constructed);
#endif
    
#if 0    
    int v1 = x;
    char *v2 = sub_hello;
    int v3 = byte;
    
    int total_size = 36;
    int v2_length = strlen(v2);
    total_size += v2_length;
    char *string = (char*)malloc(total_size);
    char *ptr = string;
    *ptr = (char)(72);
    ptr += 1;
    *ptr = (char)(101);
    ptr += 1;
    *ptr = (char)(108);
    ptr += 1;
    *ptr = (char)(108);
    ptr += 1;
    *ptr = (char)(111);
    ptr += 1;
    *ptr = (char)(32);
    ptr += 1;
    *ptr = (char)(87);
    ptr += 1;
    *ptr = (char)(111);
    ptr += 1;
    *ptr = (char)(114);
    ptr += 1;
    *ptr = (char)(108);
    ptr += 1;
    *ptr = (char)(100);
    ptr += 1;
    *ptr = (char)(33);
    ptr += 1;
    *ptr = (char)(32);
    ptr += 1;
    ptr = fill_string_from_int(ptr, v1);
    *ptr = (char)(32);
    ptr += 1;
    memcpy(ptr, v2, v2_length);
    ptr += v2_length;
    *ptr = (char)(32);
    ptr += 1;
    ptr = fill_string_from_hex(ptr, v3);
    *ptr = (char)(10);
    ptr += 1;
    
    fprintf(stdout, string);
#endif
    
    
    return(0);
}

