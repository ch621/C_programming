#include<stdio.h>
int main(){
    int aadhar, age;

    printf("enter the aadhar number of voter:");
    scanf("%d",&aadhar);
    printf("enter age of voter:");
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible to vote,please get your voter id as soon as possiblle to vote");
    }else{
        printf("not eligible to vote");
    }
}
