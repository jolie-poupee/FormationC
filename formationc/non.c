#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("entrer un nombre :");
    scanf("%d",&n);
    if(n==1 || n==0){
        printf(" le factoriel de est : 1 ");
    }else {
    for(i=n;i>1;i--){
        f=f*i;
    }
    }
    printf(" le factoriel du nombre %d est f=%d : ",n,f);
    return 0;
}
