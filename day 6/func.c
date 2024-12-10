#include<stdio.h>
// function dec
int sum(int a, int b);
int main(){
    int a=20,b=50,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d \n",a,b,res);
    res=sum(20,10);
    printf("the sum of 20 and 10 is %d \n",res);
    res=sum(10,90);
    printf("the sum of 10 and 90 is %d \n",res);

    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}

