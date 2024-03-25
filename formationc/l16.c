#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("%4d",i);
    }printf("\n");
    printf("%d\n",i);
    for(i=10;i>=1;i--){
        printf("%4d",i);
    }printf("\n");
    printf("%d\n",i);
    return 0;
}