#include<stdio.h>
int main(){
    char arr[9];
    printf("Enter the array elements: \n");
    for(int i=0;i<5;i++){
        scanf("%c",&arr[i]);
    }
    printf("Array elemets are: \n");
    for(int i=0;i<5;i++){
        printf("%c \n",arr[i]);
    }
    return 0;
}
