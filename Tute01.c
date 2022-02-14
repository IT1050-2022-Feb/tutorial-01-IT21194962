/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

/*#include <stdio.h>

int main() {
  int mark1,mark2;
	float average;
	
	printf("enter Mark1 : ");
	scanf("%d",&mark1);
	
	printf("enter Mark2 : ");
	scanf("%d",&mark2);
	
	average=(float)(mark1+mark2)/2;
	printf("\n Average is = %.2f",average);
  
  return 0;
}
*/

#include <iostream>
int main(){


  int mark1,mark2;
	float average;

  std::cout<<"Enter mark 1";
  std::cin<<mark1;

  std::cout<<"Enter mark 2";
  std::cin<<mark2;

  average=(float)(mark1+mark2)/2;
  std::out<<"\n Average is ="<<average;


  return 0;
}
