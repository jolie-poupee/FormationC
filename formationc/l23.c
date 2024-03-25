#include<stdio.h>
int main(){
    FILE*fichier = fopen("test.txt","r");
    if(fichier==NULL){
        printf("ERREUR,fichier introuvable\n");
    }
else{
    printf("le fichier existe\n");

char carac;
while((carac=fgetc(fichier))!=EOF)
printf("%c",carac);
}printf("\n");
return 0;
}