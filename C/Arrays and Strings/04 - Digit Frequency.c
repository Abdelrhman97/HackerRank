#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  
    int nums[10] = {0};
    char c;
   

    while(scanf("%c", &c) == 1)
    {
            if(c >= '0' && c <= '9')
            {
                (*(nums+(c-'0')))++;
            }
                    
    }

    
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", *(nums+i));
    }
        
    
    return 0;
}
