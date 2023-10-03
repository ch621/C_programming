#include<stdio.h>
int main(){
    int i,j,first[16][17],second[67][78],sum[67][56],m,n;
    printf("enter no. of rows and columns:");
    scanf("%d",&m,&n);
   printf("\n enter first matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        scanf("%d",&first[i][j]);
        }
    }
    printf("the matrix is:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",first[i][j]);
        }
        printf("\n");
    }
    printf("\n enter second matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&second[i][j]);
        }
    }
      printf("the matrix is:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",second[i][j]);
        }
        printf("\n");
    }
    printf("\n enter the sum:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&sum[i][j]); 
        }
    }
 


}