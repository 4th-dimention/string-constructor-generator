static char*
string_construct(String_Length v0){
int total_size = 1;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0){
int total_size = 12;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0){
int total_size = 9;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1){
int total_size = 1;
total_size += v0.length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1){
int total_size = 12;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1){
int total_size = 9;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1){
int total_size = 1;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1){
int total_size = 12;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1){
int total_size = 9;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1){
int total_size = 12;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1){
int total_size = 23;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1){
int total_size = 20;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1){
int total_size = 9;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1){
int total_size = 20;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1){
int total_size = 17;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, String_Length v2){
int total_size = 1;
total_size += v0.length;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, String_Length v2){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, String_Length v2){
int total_size = 12;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, String_Length v2){
int total_size = 9;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, String_Length v2){
int total_size = 1;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, String_Length v2){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, String_Length v2){
int total_size = 12;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, String_Length v2){
int total_size = 9;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, String_Length v2){
int total_size = 12;
total_size += v0.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, String_Length v2){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, String_Length v2){
int total_size = 23;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, String_Length v2){
int total_size = 20;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, String_Length v2){
int total_size = 9;
total_size += v0.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, String_Length v2){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, String_Length v2){
int total_size = 20;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, String_Length v2){
int total_size = 17;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, char *v2){
int total_size = 1;
total_size += v0.length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, char *v2){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, char *v2){
int total_size = 12;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, char *v2){
int total_size = 9;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, char *v2){
int total_size = 1;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, char *v2){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, char *v2){
int total_size = 12;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, char *v2){
int total_size = 9;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, char *v2){
int total_size = 12;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, char *v2){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, char *v2){
int total_size = 23;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, char *v2){
int total_size = 20;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, char *v2){
int total_size = 9;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, char *v2){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, char *v2){
int total_size = 20;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, char *v2){
int total_size = 17;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, int v2){
int total_size = 12;
total_size += v0.length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, int v2){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, int v2){
int total_size = 23;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, int v2){
int total_size = 20;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, int v2){
int total_size = 12;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, int v2){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, int v2){
int total_size = 23;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, int v2){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, int v2){
int total_size = 23;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, int v2){
int total_size = 23;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, int v2){
int total_size = 34;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, int v2){
int total_size = 31;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, int v2){
int total_size = 20;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, int v2){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, int v2){
int total_size = 31;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, int v2){
int total_size = 28;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, Hex_Int v2){
int total_size = 9;
total_size += v0.length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, Hex_Int v2){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, Hex_Int v2){
int total_size = 20;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, Hex_Int v2){
int total_size = 17;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, Hex_Int v2){
int total_size = 9;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, Hex_Int v2){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, Hex_Int v2){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, Hex_Int v2){
int total_size = 17;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, Hex_Int v2){
int total_size = 20;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, Hex_Int v2){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, Hex_Int v2){
int total_size = 31;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, Hex_Int v2){
int total_size = 28;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, Hex_Int v2){
int total_size = 17;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, Hex_Int v2){
int total_size = 17;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, Hex_Int v2){
int total_size = 28;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, Hex_Int v2){
int total_size = 25;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, String_Length v2, String_Length v3){
int total_size = 1;
total_size += v0.length;
total_size += v1.length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, String_Length v2, String_Length v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, String_Length v2, String_Length v3){
int total_size = 12;
total_size += v1.length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, String_Length v2, String_Length v3){
int total_size = 9;
total_size += v1.length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, String_Length v2, String_Length v3){
int total_size = 1;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, String_Length v2, String_Length v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, String_Length v2, String_Length v3){
int total_size = 12;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, String_Length v2, String_Length v3){
int total_size = 9;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, String_Length v2, String_Length v3){
int total_size = 12;
total_size += v0.length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, String_Length v2, String_Length v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, String_Length v2, String_Length v3){
int total_size = 23;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, String_Length v2, String_Length v3){
int total_size = 20;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, String_Length v2, String_Length v3){
int total_size = 9;
total_size += v0.length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, String_Length v2, String_Length v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, String_Length v2, String_Length v3){
int total_size = 20;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, String_Length v2, String_Length v3){
int total_size = 17;
total_size += v2.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, char *v2, String_Length v3){
int total_size = 1;
total_size += v0.length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, char *v2, String_Length v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, char *v2, String_Length v3){
int total_size = 12;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, char *v2, String_Length v3){
int total_size = 9;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, char *v2, String_Length v3){
int total_size = 1;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, char *v2, String_Length v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, char *v2, String_Length v3){
int total_size = 12;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, char *v2, String_Length v3){
int total_size = 9;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, char *v2, String_Length v3){
int total_size = 12;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, char *v2, String_Length v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, char *v2, String_Length v3){
int total_size = 23;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, char *v2, String_Length v3){
int total_size = 20;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, char *v2, String_Length v3){
int total_size = 9;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, char *v2, String_Length v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, char *v2, String_Length v3){
int total_size = 20;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, char *v2, String_Length v3){
int total_size = 17;
int v2_length = strlen(v2);
total_size += v2_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, int v2, String_Length v3){
int total_size = 12;
total_size += v0.length;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, int v2, String_Length v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, int v2, String_Length v3){
int total_size = 23;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, int v2, String_Length v3){
int total_size = 20;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, int v2, String_Length v3){
int total_size = 12;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, int v2, String_Length v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, int v2, String_Length v3){
int total_size = 23;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, int v2, String_Length v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, int v2, String_Length v3){
int total_size = 23;
total_size += v0.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, int v2, String_Length v3){
int total_size = 23;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, int v2, String_Length v3){
int total_size = 34;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, int v2, String_Length v3){
int total_size = 31;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, int v2, String_Length v3){
int total_size = 20;
total_size += v0.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, int v2, String_Length v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, int v2, String_Length v3){
int total_size = 31;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, int v2, String_Length v3){
int total_size = 28;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, Hex_Int v2, String_Length v3){
int total_size = 9;
total_size += v0.length;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, Hex_Int v2, String_Length v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, Hex_Int v2, String_Length v3){
int total_size = 20;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, Hex_Int v2, String_Length v3){
int total_size = 17;
total_size += v1.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, Hex_Int v2, String_Length v3){
int total_size = 9;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, Hex_Int v2, String_Length v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, Hex_Int v2, String_Length v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, Hex_Int v2, String_Length v3){
int total_size = 17;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, Hex_Int v2, String_Length v3){
int total_size = 20;
total_size += v0.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, Hex_Int v2, String_Length v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, Hex_Int v2, String_Length v3){
int total_size = 31;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, Hex_Int v2, String_Length v3){
int total_size = 28;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, Hex_Int v2, String_Length v3){
int total_size = 17;
total_size += v0.length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, Hex_Int v2, String_Length v3){
int total_size = 17;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, Hex_Int v2, String_Length v3){
int total_size = 28;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, Hex_Int v2, String_Length v3){
int total_size = 25;
total_size += v3.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3.str, v3.length);
ptr += v3.length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, String_Length v2, char *v3){
int total_size = 1;
total_size += v0.length;
total_size += v1.length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, String_Length v2, char *v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, String_Length v2, char *v3){
int total_size = 12;
total_size += v1.length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, String_Length v2, char *v3){
int total_size = 9;
total_size += v1.length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, String_Length v2, char *v3){
int total_size = 1;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, String_Length v2, char *v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, String_Length v2, char *v3){
int total_size = 12;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, String_Length v2, char *v3){
int total_size = 9;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, String_Length v2, char *v3){
int total_size = 12;
total_size += v0.length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, String_Length v2, char *v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, String_Length v2, char *v3){
int total_size = 23;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, String_Length v2, char *v3){
int total_size = 20;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, String_Length v2, char *v3){
int total_size = 9;
total_size += v0.length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, String_Length v2, char *v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, String_Length v2, char *v3){
int total_size = 20;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, String_Length v2, char *v3){
int total_size = 17;
total_size += v2.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, char *v2, char *v3){
int total_size = 1;
total_size += v0.length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, char *v2, char *v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, char *v2, char *v3){
int total_size = 12;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, char *v2, char *v3){
int total_size = 9;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, char *v2, char *v3){
int total_size = 1;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, char *v2, char *v3){
int total_size = 1;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, char *v2, char *v3){
int total_size = 12;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, char *v2, char *v3){
int total_size = 9;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, char *v2, char *v3){
int total_size = 12;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, char *v2, char *v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, char *v2, char *v3){
int total_size = 23;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, char *v2, char *v3){
int total_size = 20;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, char *v2, char *v3){
int total_size = 9;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, char *v2, char *v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, char *v2, char *v3){
int total_size = 20;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, char *v2, char *v3){
int total_size = 17;
int v2_length = strlen(v2);
total_size += v2_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, int v2, char *v3){
int total_size = 12;
total_size += v0.length;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, int v2, char *v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, int v2, char *v3){
int total_size = 23;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, int v2, char *v3){
int total_size = 20;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, int v2, char *v3){
int total_size = 12;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, int v2, char *v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, int v2, char *v3){
int total_size = 23;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, int v2, char *v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, int v2, char *v3){
int total_size = 23;
total_size += v0.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, int v2, char *v3){
int total_size = 23;
int v0_length = strlen(v0);
total_size += v0_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, int v2, char *v3){
int total_size = 34;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, int v2, char *v3){
int total_size = 31;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, int v2, char *v3){
int total_size = 20;
total_size += v0.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, int v2, char *v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, int v2, char *v3){
int total_size = 31;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, int v2, char *v3){
int total_size = 28;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, Hex_Int v2, char *v3){
int total_size = 9;
total_size += v0.length;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, Hex_Int v2, char *v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, Hex_Int v2, char *v3){
int total_size = 20;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, Hex_Int v2, char *v3){
int total_size = 17;
total_size += v1.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, Hex_Int v2, char *v3){
int total_size = 9;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, Hex_Int v2, char *v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, Hex_Int v2, char *v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, Hex_Int v2, char *v3){
int total_size = 17;
int v1_length = strlen(v1);
total_size += v1_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, Hex_Int v2, char *v3){
int total_size = 20;
total_size += v0.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, Hex_Int v2, char *v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, Hex_Int v2, char *v3){
int total_size = 31;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, Hex_Int v2, char *v3){
int total_size = 28;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, Hex_Int v2, char *v3){
int total_size = 17;
total_size += v0.length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, Hex_Int v2, char *v3){
int total_size = 17;
int v0_length = strlen(v0);
total_size += v0_length;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, Hex_Int v2, char *v3){
int total_size = 28;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, Hex_Int v2, char *v3){
int total_size = 25;
int v3_length = strlen(v3);
total_size += v3_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
memcpy(ptr, v3, v3_length);
ptr += v3_length;
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, String_Length v2, int v3){
int total_size = 12;
total_size += v0.length;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, String_Length v2, int v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, String_Length v2, int v3){
int total_size = 23;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, String_Length v2, int v3){
int total_size = 20;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, String_Length v2, int v3){
int total_size = 12;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, String_Length v2, int v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, String_Length v2, int v3){
int total_size = 23;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, String_Length v2, int v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, String_Length v2, int v3){
int total_size = 23;
total_size += v0.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, String_Length v2, int v3){
int total_size = 23;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, String_Length v2, int v3){
int total_size = 34;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, String_Length v2, int v3){
int total_size = 31;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, String_Length v2, int v3){
int total_size = 20;
total_size += v0.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, String_Length v2, int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, String_Length v2, int v3){
int total_size = 31;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, String_Length v2, int v3){
int total_size = 28;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, char *v2, int v3){
int total_size = 12;
total_size += v0.length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, char *v2, int v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, char *v2, int v3){
int total_size = 23;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, char *v2, int v3){
int total_size = 20;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, char *v2, int v3){
int total_size = 12;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, char *v2, int v3){
int total_size = 12;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, char *v2, int v3){
int total_size = 23;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, char *v2, int v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, char *v2, int v3){
int total_size = 23;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, char *v2, int v3){
int total_size = 23;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, char *v2, int v3){
int total_size = 34;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, char *v2, int v3){
int total_size = 31;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, char *v2, int v3){
int total_size = 20;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, char *v2, int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, char *v2, int v3){
int total_size = 31;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, char *v2, int v3){
int total_size = 28;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, int v2, int v3){
int total_size = 23;
total_size += v0.length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, int v2, int v3){
int total_size = 23;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, int v2, int v3){
int total_size = 34;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, int v2, int v3){
int total_size = 31;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, int v2, int v3){
int total_size = 23;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, int v2, int v3){
int total_size = 23;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, int v2, int v3){
int total_size = 34;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, int v2, int v3){
int total_size = 31;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, int v2, int v3){
int total_size = 34;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, int v2, int v3){
int total_size = 34;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, int v2, int v3){
int total_size = 45;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, int v2, int v3){
int total_size = 42;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, int v2, int v3){
int total_size = 31;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, int v2, int v3){
int total_size = 31;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, int v2, int v3){
int total_size = 42;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, int v2, int v3){
int total_size = 39;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, Hex_Int v2, int v3){
int total_size = 20;
total_size += v0.length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, Hex_Int v2, int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, Hex_Int v2, int v3){
int total_size = 31;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, Hex_Int v2, int v3){
int total_size = 28;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, Hex_Int v2, int v3){
int total_size = 20;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, Hex_Int v2, int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, Hex_Int v2, int v3){
int total_size = 31;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, Hex_Int v2, int v3){
int total_size = 28;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, Hex_Int v2, int v3){
int total_size = 31;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, Hex_Int v2, int v3){
int total_size = 31;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, Hex_Int v2, int v3){
int total_size = 42;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, Hex_Int v2, int v3){
int total_size = 39;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, Hex_Int v2, int v3){
int total_size = 28;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, Hex_Int v2, int v3){
int total_size = 28;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, Hex_Int v2, int v3){
int total_size = 39;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, Hex_Int v2, int v3){
int total_size = 36;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_int(ptr, v3);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, String_Length v2, Hex_Int v3){
int total_size = 9;
total_size += v0.length;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, String_Length v2, Hex_Int v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, String_Length v2, Hex_Int v3){
int total_size = 20;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, String_Length v2, Hex_Int v3){
int total_size = 17;
total_size += v1.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, String_Length v2, Hex_Int v3){
int total_size = 9;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, String_Length v2, Hex_Int v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, String_Length v2, Hex_Int v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, String_Length v2, Hex_Int v3){
int total_size = 17;
int v1_length = strlen(v1);
total_size += v1_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, String_Length v2, Hex_Int v3){
int total_size = 20;
total_size += v0.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, String_Length v2, Hex_Int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, String_Length v2, Hex_Int v3){
int total_size = 31;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, String_Length v2, Hex_Int v3){
int total_size = 28;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, String_Length v2, Hex_Int v3){
int total_size = 17;
total_size += v0.length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, String_Length v2, Hex_Int v3){
int total_size = 17;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, String_Length v2, Hex_Int v3){
int total_size = 28;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, String_Length v2, Hex_Int v3){
int total_size = 25;
total_size += v2.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2.str, v2.length);
ptr += v2.length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, char *v2, Hex_Int v3){
int total_size = 9;
total_size += v0.length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, char *v2, Hex_Int v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, char *v2, Hex_Int v3){
int total_size = 20;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, char *v2, Hex_Int v3){
int total_size = 17;
total_size += v1.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, char *v2, Hex_Int v3){
int total_size = 9;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, char *v2, Hex_Int v3){
int total_size = 9;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, char *v2, Hex_Int v3){
int total_size = 20;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, char *v2, Hex_Int v3){
int total_size = 17;
int v1_length = strlen(v1);
total_size += v1_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, char *v2, Hex_Int v3){
int total_size = 20;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, char *v2, Hex_Int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, char *v2, Hex_Int v3){
int total_size = 31;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, char *v2, Hex_Int v3){
int total_size = 28;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, char *v2, Hex_Int v3){
int total_size = 17;
total_size += v0.length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, char *v2, Hex_Int v3){
int total_size = 17;
int v0_length = strlen(v0);
total_size += v0_length;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, char *v2, Hex_Int v3){
int total_size = 28;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, char *v2, Hex_Int v3){
int total_size = 25;
int v2_length = strlen(v2);
total_size += v2_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
memcpy(ptr, v2, v2_length);
ptr += v2_length;
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, int v2, Hex_Int v3){
int total_size = 20;
total_size += v0.length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, int v2, Hex_Int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, int v2, Hex_Int v3){
int total_size = 31;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, int v2, Hex_Int v3){
int total_size = 28;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, int v2, Hex_Int v3){
int total_size = 20;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, int v2, Hex_Int v3){
int total_size = 20;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, int v2, Hex_Int v3){
int total_size = 31;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, int v2, Hex_Int v3){
int total_size = 28;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, int v2, Hex_Int v3){
int total_size = 31;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, int v2, Hex_Int v3){
int total_size = 31;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, int v2, Hex_Int v3){
int total_size = 42;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, int v2, Hex_Int v3){
int total_size = 39;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, int v2, Hex_Int v3){
int total_size = 28;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, int v2, Hex_Int v3){
int total_size = 28;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, int v2, Hex_Int v3){
int total_size = 39;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, int v2, Hex_Int v3){
int total_size = 36;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_int(ptr, v2);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, String_Length v1, Hex_Int v2, Hex_Int v3){
int total_size = 17;
total_size += v0.length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, String_Length v1, Hex_Int v2, Hex_Int v3){
int total_size = 17;
int v0_length = strlen(v0);
total_size += v0_length;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, String_Length v1, Hex_Int v2, Hex_Int v3){
int total_size = 28;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, String_Length v1, Hex_Int v2, Hex_Int v3){
int total_size = 25;
total_size += v1.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1.str, v1.length);
ptr += v1.length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, char *v1, Hex_Int v2, Hex_Int v3){
int total_size = 17;
total_size += v0.length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, char *v1, Hex_Int v2, Hex_Int v3){
int total_size = 17;
int v0_length = strlen(v0);
total_size += v0_length;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, char *v1, Hex_Int v2, Hex_Int v3){
int total_size = 28;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, char *v1, Hex_Int v2, Hex_Int v3){
int total_size = 25;
int v1_length = strlen(v1);
total_size += v1_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
memcpy(ptr, v1, v1_length);
ptr += v1_length;
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, int v1, Hex_Int v2, Hex_Int v3){
int total_size = 28;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, int v1, Hex_Int v2, Hex_Int v3){
int total_size = 28;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, int v1, Hex_Int v2, Hex_Int v3){
int total_size = 39;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, int v1, Hex_Int v2, Hex_Int v3){
int total_size = 36;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_int(ptr, v1);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(String_Length v0, Hex_Int v1, Hex_Int v2, Hex_Int v3){
int total_size = 25;
total_size += v0.length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0.str, v0.length);
ptr += v0.length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(char *v0, Hex_Int v1, Hex_Int v2, Hex_Int v3){
int total_size = 25;
int v0_length = strlen(v0);
total_size += v0_length;
char *string = (char*)malloc(total_size);
char *ptr = string;
memcpy(ptr, v0, v0_length);
ptr += v0_length;
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(int v0, Hex_Int v1, Hex_Int v2, Hex_Int v3){
int total_size = 36;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_int(ptr, v0);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
static char*
string_construct(Hex_Int v0, Hex_Int v1, Hex_Int v2, Hex_Int v3){
int total_size = 33;
char *string = (char*)malloc(total_size);
char *ptr = string;
ptr = fill_string_from_hex(ptr, v0.x);
ptr = fill_string_from_hex(ptr, v1.x);
ptr = fill_string_from_hex(ptr, v2.x);
ptr = fill_string_from_hex(ptr, v3.x);
*ptr = 0;
return(string);
}
