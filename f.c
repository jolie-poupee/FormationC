#include<stdio.h>
int main(){
    int t[10],1[0];
    int i,j=0;
    for(i=0;i<10;i++){
        printf("entrer un nombre");
        scanf("%d",&t[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",t[i]);
        for(i=0;i<10;i++){
            if(t[i]%2==0){
                t1[j]=t[i];
                j=j+1;
            
            }
            printf("le")
            else{
                printf("le nombre %d est impair\n",t[i]);
            }
        }
    }
    return 0;
}