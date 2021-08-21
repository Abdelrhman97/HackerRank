#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    
    int* ptrR = arr + (num - 1);
    int* ptrL = arr; 
    
    for (i = 0; i < num / 2; i++)
    {
        int temp; 
        temp = *(ptrL + i); 
        *(ptrL + i) = *(ptrR - i);
        *(ptrR - i) = temp; 
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
