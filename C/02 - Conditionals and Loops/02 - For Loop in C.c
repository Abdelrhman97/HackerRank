#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char *nums [] = {"one","two","three","four","five","six","seven","eight","nine"};
    char *type [] = {"even","odd"}; 
    scanf("%d\n%d", &a, &b);
  	
      for (int i = a; i <= b; i++)
      {
          (i >= 1 && i <= 9)? printf("%s\n",*(nums + i - 1)) : printf("%s\n",*(type + (i % 2)));   
      }

    return 0;
}

