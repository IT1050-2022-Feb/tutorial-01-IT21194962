/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int count,total=0,i=1;
	
	printf("enter your number : ");
	scanf("%d",&count);
	
	while(i<=count){
		total=total+i;
		i++;
		
	}
	
	printf("\ntotal is %d",total);
	
	
	
	
	

  return 0;
}

