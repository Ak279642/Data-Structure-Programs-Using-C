#include<stdio.h>
void PrintArray(int *A,int siz){
for(int i=0; i<=siz; i++){
    printf("%d ",A[i]);
}
}
void insertionSort(int* arr,int len){
int key,i,j;
for (int i = 0; i <= len; i++)
{
   key = arr[i];
   j = i-1;
   while (arr[j]>key && j>=0)
   {
     arr[j+1]=arr[j];
   j=j-1;
   }
  arr[j + 1] = key; 
}
}
int main(){
int siz=5;
int arr[]={20,5,35,10,20,4};
PrintArray(arr, siz);
printf("\n");
insertionSort(arr, siz);
PrintArray(arr, siz);
return 0;
}