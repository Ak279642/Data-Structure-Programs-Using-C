#include<stdio.h>
void Show(int arr[], int sizeOfArray){
    for(int i = 0; i <= sizeOfArray; i++)
    {
    printf("%d ", arr[i]);
    }
    printf("\n"); } 
void Deletion(int arr[], int sizeOfArray, int index, int *size){
for(int i = index; i<=sizeOfArray; i++){
    arr[i] = arr[i+1];
}
*size = sizeOfArray-1;
}
int main(){
    int sizeOfArray = 3;
    int arr[5]={10, 20, 30, 40};
    Show(arr, sizeOfArray);
    Deletion(arr, sizeOfArray, 2, &sizeOfArray);
    Show(arr, sizeOfArray);
    return 0;
}