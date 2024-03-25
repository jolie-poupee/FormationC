#include<stdio.h>
int main(){
    int i,f=1,n;
    printf("entrez un nombre : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("le factoriel de %d est %d ",n,f);
    return 0;
}