#include <stdlib.h>

int sum(int a, int b)
{
   int unsafe[10]; // int unsafe[10];
   unsafe[9]=1; // unsafe[10] = 1;
   int* leak =(int*)malloc(sizeof(int)); // int* leak = (int*)malloc(sizeof(int));
    return a + b;
}
