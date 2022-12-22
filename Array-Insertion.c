#include<stdio.h>
void Show(int arr[], int sizeOfArray){
    // Traversing All Element and print once
    for(int i = 0; i <= sizeOfArray; i++)
    {
    printf("%d ", arr[i]);
    }
    printf("\n");
}

void Insertion(int arr[], int sizeOfArray, int value, int *size){
    arr[sizeOfArray+1] = value;
*size = sizeOfArray+1;
}

int main(){
    int sizeOfArray = 3;
    // inserting Element in Array
    int arr[5]={10, 20, 30, 40};
    Show(arr, sizeOfArray);
    // I Want to Add 50 in end of array 
    Insertion(arr, sizeOfArray, 50, &sizeOfArray);
    Show(arr, sizeOfArray);
/*
<!--- Output -->
10 20 30 40
<!-- After Insertion -->
10 20 30 40 50
*/
  return 0;
}