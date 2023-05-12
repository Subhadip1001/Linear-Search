#include<stdio.h>
int linear(int arr[], int size, int key);


int main(){
    int n,i;
    printf("Enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter aliment :");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter key :");
    scanf("%d",&key);
    int a=linear(arr,n,key);
    if(a=-1){
        printf("%d is not present !",key);
    }
    return 0;
}

int linear(int arr[], int size, int key){
	int i;
    for(i=0; i<size; i++){
        if(arr[i]==key){
            printf("Element is at position: %d", i);
            return i;
        }
    }
    return -1;
}

