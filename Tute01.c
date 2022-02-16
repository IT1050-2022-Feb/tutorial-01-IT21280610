/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float sum, avg;

  printf("Input the first mark :");
  scanf("%d", &mark1);

  printf("Input the second mark :");
  scanf("%d", &mark2);

  sum = mark1 + mark2;

  avg = sum/2;

  printf("The average is %.2f", avg);
  return 0;
}

