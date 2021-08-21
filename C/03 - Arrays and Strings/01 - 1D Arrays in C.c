#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; 
    scanf("%d",&n);   
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i); 
    }
    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum = *(arr+i) + sum; 
    }
    printf("%d",sum);
    return 0;
}
