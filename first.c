//write a programme for nested if-else
#include<stdio.h>
int main(){
    int no;

    printf("enter the number");
    scanf("%d",&no);

    if(no>0){
        printf("no is positive\n");
        if(no%2==0){
            printf("no is even\n");
        }
        else{
            printf("the no is odd\n");
        }
    } 
    else{
        printf("no is negative\n");
    }
}