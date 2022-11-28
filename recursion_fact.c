#include<stdio.h>

int fact(int number);

int main(){
  int number, result;
  printf("Enter the number: ");
  scanf("%d", &number);
  result = fact(number);
  printf("The factorial is %d", result);
  return 0;
}

int fact(int number){
  int i, factorial;
  for(i = 1; i <= number; i++) {    
      factorial =factorial*i;    
  }
  return factorial;
}