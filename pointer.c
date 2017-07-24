#include <stdio.h>

int main(){
int arr[10];
arr[9] = 10;

int *aptr = arr + 3;

printf("%d", *(aptr + 6));





}
