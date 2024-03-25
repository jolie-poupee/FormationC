#include<stdio.h>
int main(){
    int jour;
    printf("entrer un nombre:");
    scanf("%d",&jour);
    switch(jour){
        case 1: printf("lundi\n");break;
        case 2: printf("mardi\n");break;
        case 3: printf("mercredi\n");break;
        case 4: printf("jeudi\n");break;
        case 5: printf("vendredi\n");break;
        default: printf("mauvais\n");break;
    }
    return 0;
}//ou
#include<stdio.h>
int m(){
    int jour=3;
    switch(jour){
        case 1: printf("lundi\n");break;
        case 2: printf("mardi\n");break;
        case 3: printf("mercredi\n");break;
        case 4: printf("jeudi\n");break;
        case 5: printf("vendredi\n");break;
        default: printf("mauvais\n");break;
    }
    return 0;
}