#include<stdio.h>

int smallest(int arr[], int n);

int main(){
  int n, result, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    printf("Enter the element of array: ");
    scanf("%d", &arr[i]);
  }
  result = smallest(arr, n);
  printf("The smallest number: %d", result);
  return 0;
}

int smallest(int arr[], int n){
  int small = arr[0], i;
  for (i=0; i<n; i++) {
    if(arr[i] < small) {
      small = arr[i];
    }
  }
  return small;
}