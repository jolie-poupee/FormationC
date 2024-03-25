#include<stdio.h>
int main(){
        int n,i,j;
        int m[100][100];
        printf("entrer un nombre n");
        scanf("%d",&n);
                for(i=0;i<=n;i++){
                    m[i][0]=1;
                    m[i][i]=1;
                    for(j=1;j<i;j++){
                        m[i][j]=m[i-1][j-1]+m[i-1][j];
                        }
              }
                    for(i=0;i<=n;i++){
                        for(j=0;j<=i;j++){
                            printf("%4d",m[i][j]);
                        }
                        printf("\n");
                    }
                    return 0;
        }