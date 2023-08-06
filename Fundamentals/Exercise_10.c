//C Program to find the Size of data types
#include <stdio.h>
int main()
{
    char charType;
    short shortType;
    int intType;
    long longType;
    float floatType;
    double doubleType;

    // Sizeof operator is used to evaluate the size of a declared data type

    printf("Size of char: %ld byte\n",sizeof(charType));
    printf("Size of Short: %ld bytes\n",sizeof(shortType));

    printf("Size of int: %ld bytes\n",sizeof(intType));
    printf("Size of long: %ld bytes\n",sizeof(longType));

    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));



    return 0;
}