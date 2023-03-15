/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  float mark1, mark2, ave;

  printf("input subject 1 mark : ");
  scanf("%f", &mark1);

  printf("input subject 2 mark : ");
  scanf("%f", &mark2);

  ave = (float)(mark1 + mark2) / 2;

  printf("average mark is : %.2f", ave);

  return 0;
}
