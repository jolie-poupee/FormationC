#include<stdio.h>
int main(){
    int i,j,k,h,b,nbretoile,nbrespace;
    printf("entrer la hauteur du triangle h");
    scanf("%d",&h);
    b=h+(h-1);
    for(i=0;i<(h-1);i++){
        nbretoile=2*i+1;
        nbrespace=(b-nbretoile)/2;
        for(j=0;j<(nbrespace+b);j++){
        printf(" ");}
        for(k=0;k<nbretoile;k++){
            printf("*");
        }
        printf("\n");
    }
        int t=(h-1)*2;
        for(k=0;k<(t+b);k++){
            printf(" ");
        }
        for(j=0;j<b;j++){
            printf("*");
        }
    return 0;
}