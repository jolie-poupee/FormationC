#include<stdio.h>
int main(){
    FILE*fichier = fopen("test.txt","w");
    if(fichier==NULL){
        printf("ERREUR,fichier introuvable\n");
        return 0;
    }
else{
    printf("le fichier existe\n");
    return 0;
}
}