#include<stdio.h>
int main(){
    int i,j,n;
    printf("entrer un nombre n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}