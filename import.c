#include<stdio.h>
#include "import.h"
int main()
{

int a[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(a)/sizeof(a[0]);
bubble(a,n);
insertion(a,n);
selection(a,n);

       // printf("Sorted array: \n");
       // printArray(arr, n);
        return 0;


}