#include<stdio.h>
int main(){
    FILE*fichier = fopen("test.txt","r");
    if(fichier==NULL){
        printf("ERREUR,fichier introuvable\n");
    }
else{
    printf("le fichier existe\n");

char carac[100];
while(fgets(carac,sizeof(carac),fichier)!=NULL)
printf("%s",carac);
}
return 0;
}
