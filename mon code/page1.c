#include<stdio.h>
int main(){
    int t[10],j=0,t1[0];
    int i;
    for(i=0;i<10;i++){
        printf("entrer un nombre");
        scanf("%d",&t[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",t[i]);
        }
    for(i=0;i<10;i++){
        if(t[i]%2==0){
            t1[j]=t[i]; 
            j=j+1;

        }
    }
    for(i=0;i<j;i++){
        printf("%d",t1[i]);
}
return 0;
}