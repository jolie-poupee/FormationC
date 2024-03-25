#include<stdio.h>
int main(){
    FILE*fichier = fopen("test.txt","r");
    if(fichier==NULL){
        printf("ERREUR,fichier introuvable\n");
        return 0;
    }
else{
    printf("le fichier existe\n");
}
char carac;
carac=fgetc(fichier);
printf("%c\n",carac);
return 0;
}