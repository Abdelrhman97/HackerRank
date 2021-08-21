#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender)
{
    int sum = 0; 
  if ('b' == gender)
  {
      for (int i = 0; i < number_of_students; i += 2)
      {
          sum += *(marks + i); 
      }
  }
  else if ('g' == gender)
  {
      for (int i = 1; i < number_of_students; i += 2)
      {
          sum += *(marks + i); 
      }      
  }
  
  return sum;
}

int main() {
