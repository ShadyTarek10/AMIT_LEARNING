#include<stdio.h>
#include "file1.h"

int main(){
    unsigned short int Local_uint16_tVar;
    printf("enter and integer value");
    scanf("%hu",Local_uint16_tVar);
    MyPrint(Local_uint16_tVar);

    return 0;
}