#include<stdio.h>

void Print(int* arr, int size){
for(int i=0; i<=size; i++){
printf("%d ", arr[i]);
}
printf("\n");
}

int main(){
int arr[50] = {20, 30, 14, 50, 55};
int size = 4;
Print(arr, size);

size = size+1;
arr[size] = 60;

Print(arr, size);
return 0;
}