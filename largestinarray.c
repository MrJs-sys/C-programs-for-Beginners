#include <stdio.h>

int largest(int arr);

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int max = largest(arr);
    printf("%d",max);
}

int largest(int arr){
    int max =0;
    for(int i = 0; i<8; i++){
        if(max>arr[i]){
            max = arr[i];
        }
        return max;
    }
}