#include<stdio.h>
int main(){
    char inputchar;
    printf("enter a charater: \n");
    scanf("%c",&inputchar);
    if(inputchar>=78 && inputchar<=90){
        printf("the given charater is upper");
    }
    else{
        printf("the given charater is lower");
    }
    return 0;

    
}