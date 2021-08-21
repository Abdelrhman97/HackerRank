#include <stdio.h> 

int main (void)
{
    char *nums [] = {"one","two","three","four","five","six","seven","eight","nine"};
    int n; 
    scanf("%d",&n);
     
    (n >= 1 && n <= 9)? printf("%s",nums[n - 1]) : printf("Greater than 9");
    
    return 0; 
}
