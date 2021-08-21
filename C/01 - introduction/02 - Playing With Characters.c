#include <stdio.h>

#define MAX_LEN 100
int main() 
{
    char ch; 
    char s[MAX_LEN]; 
    char sen[MAX_LEN];
    
    scanf("%c",&ch);
    scanf("%s ",&s);
    gets(sen); 
    
    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen); 
        
    
    
    
    return 0;
}
