#include<stdio.h>
void Show(int arr[], int sizeOfArray){
    for(int i = 0; i <= sizeOfArray; i++)
    {
    printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int temp;
    int size=4;
    int arr[5] = {10, 30, 20, 5, 2} ;

for(int i=0; i<=size; i++){
    for(int n=i+1; n<=size; n++){
     if(arr[i]<arr[n]){
     temp=arr[i];
     arr[i]=arr[n];
     arr[n]=temp;    
     }   
    }
}
Show(arr, size);
return 0;
}