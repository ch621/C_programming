#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d",&age); 
     goto vote;
    if(age>=18){     
         vote:
    printf("you are eligible to vote");
    }
    else{
        printf("you are not eligible to vote");
    }

}