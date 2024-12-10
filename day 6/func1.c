#include<stdio.h>

// fun dec
int sum(); 

void main(){
    int res;
    res=sum();
    printf("sum is : %d",res);
}

//func def
int sum(){
    int a=90,b=50,res;
    return a+b;
}