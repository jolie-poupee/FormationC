#include<stdio.h>
int main(){
    int n,i,j,c;
    printf("entrer un nombre n ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=1;
        for(j=0;j<=i;j++){
            printf("%4d",c);
            c=c*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
