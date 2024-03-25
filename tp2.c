#include<stdio.h>
int main(){
    int n,a=1,b=2,i,c;
    printf("entrer la hauteur de votre triangle n");
    scanf("%d" ,&n);
    for(i=0;i<n;i++){
        c=9*a+b;
        printf("9 * %d + %d = %d \n",a,b,c);
        a=c+a;
        b=b+1;
    }
return 0;
}