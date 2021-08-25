#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b;
    string  nums [] = {"one","two","three","four","five","six","seven","eight","nine"};
    string  type [] = {"even","odd"}; 
    scanf("%d\n%d", &a, &b);
      
    for (int i = a; i <= b; i++)
    {
        (i >= 1 && i <= 9)? cout << nums[i - 1] << endl: cout << type[i % 2] << endl;  
    }
    
    return 0;
}
