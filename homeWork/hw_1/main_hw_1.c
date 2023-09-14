//
// Created by konstantin on 21.07.23.
//
#include "stdlib.h"
#include "stdio.h"
#include "main_hw_1.h"

#define FILE_SIZE (64)

typedef union {
    struct {
        u_int32_t signature_1   :8;
        u_int32_t signature_2   :8;
        u_int32_t signature_3   :8;
        u_int32_t signature_4   :8;

        u_int32_t version       :16;
        u_int32_t flags         :16;

        u_int32_t compression   :16;
        u_int32_t time_sec      :5;
        u_int32_t time_min      :6;
        u_int32_t time_hour     :5;

        //u_int32_t date_day      :5;
        //u_int32_t date_month    :4;
        //u_int32_t date_year     :7;
    };

    u_int32_t  arr32[FILE_SIZE];
    u_int8_t   arr8[(FILE_SIZE*4)];

}ZIP_STRUCT;

int  f1()
{
    return 5;
}

int main() {
    //FILE *stream;
    //ZIP_STRUCT zipStruct;
    //char *line = NULL;
    //size_t len = 0;
    //ssize_t read;
    //int c;
    //char name[] = "myfile.txt";
    //
    //stream = fopen("../doc/03_types_homework/03_types_homework.zip", "r+b");
    //if (stream == NULL)
    //    exit(EXIT_FAILURE);
    ////while((c=fgetc(stream))!= EOF)
    //size_t file_size = 0;
    //while (file_size < FILE_SIZE)
    //{
    //    //printf("%X", c);
    //    c=fgetc(stream);
    //    file_size++;
    //    zipStruct.arr32[file_size] = c;
    //}
    //printf("FILE size = %zu\n", file_size);
    //printf("Arr 32 = \n");
    //
    //for (int i = 0; i<file_size; i++){
    //    printf("%X", zipStruct.arr32[i]);
    //}
    //
    //printf("\n");
    //printf("Arr 8 = \n");
    //for (int i = 0; i<file_size*4; i++){
    //    printf("%X", zipStruct.arr8[i]);
    //}
    //
    //printf("\n");
    //printf("signature_1; %X\n", zipStruct.signature_1);
    //printf("signature_2; %X\n", zipStruct.signature_2);
    //printf("signature_3; %X\n", zipStruct.signature_3);
    //printf("signature_4; %X\n", zipStruct.signature_4);
    //printf("version; %X\n", zipStruct.version);
    //printf("flags; %X\n", zipStruct.flags);
    //printf("compression; %X\n", zipStruct.compression);
    //printf("time_sec; %X\n", zipStruct.time_sec);
    //printf("time_min; %X\n", zipStruct.time_min);
    //printf("time_hour; %X\n", zipStruct.time_hour);
    //
    //fclose(stream);
    //free(line);
    //exit(EXIT_SUCCESS);
    //int b = f1();
    //static int b = f1();
    //static int b = 6;
    //static void* pool = malloc(1000);
    return 0;
}

