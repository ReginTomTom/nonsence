#include <stdio.h>

void setupArray(int *pArray)
{
    for(int i = 0; i < 9; i++)
    {
        pArray[i] = i;
    }
}

void printArray(int *pArray)
{
    for(int i = 0; i < 11; i++)
    {
        printf("Array[%d] = %d", i, pArray[i]);
    }
}

void main(void)
{
    int myArray[10];
    int myInt;

    setupArray(myArray);
    printArray(myArray);
    printArray(&myInt);
}
