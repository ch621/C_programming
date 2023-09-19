#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
         printf("a is the largest");
    }if(b>c){
        printf("b is greater than c and less than a");
    }
   printf("a>b>c");
}