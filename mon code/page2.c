#include<stdio.h>
int main(){
   int t[10];
    int i;
    for(i=0;i<10;i++){
        printf("entrer un nombre");
        scanf("%d",&t[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",t[i]);
        for(i=0;i<10;i++){
            if(t[i]%2==0){
                printf("le nombre %d est pair\n",t[i]);
            }else{
                printf("le nombre %d est impair\n",t[i]);
            }
        }
    }
    return 0;
}