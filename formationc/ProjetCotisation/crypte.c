#include <stdio.h>
#include <string.h>
void crypte(char *pass){
    FILE *fichier,*fichierc;
    fichier=fopen("cotisation.txt","r");
    fichierc=fopen("cotisationc.txt","w");
    char caractere,caracterec;
    int i=0;
    while((caractere=fgetc(fichier))!=EOF){
        if (i>strlen(pass))
            i=0;
        caracterec=caractere ^pass[i];
        i++;
        fprintf(fichierc,"%c",caracterec);
        
    }

    fclose(fichier);
    fclose(fichierc);

}
void decrypte(char *pass){
      FILE *fichier,*fichierc;
    fichier=fopen("cotisationc.txt","r");
    fichierc=fopen("cotisationd.txt","w");
    char caractere,caracterec;
    int i=0;
    while((caractere=fgetc(fichier))!=EOF){
        if (i>strlen(pass))
            i=0;
        caracterec=caractere ^pass[i++];
        fprintf(fichierc,"%c",caracterec);
        
    }

    fclose(fichier);
    fclose(fichierc);


}
int main(void)
{
    int choix;
    printf("que souhaitez vous faire ?\n");
    printf("\t 1.Crypter le fichier \n");
    printf("\t 2.Decrypter le fichier\n");
    printf("choix: ");
    scanf("%d",&choix);
    char pass[10];
    printf("entrez le mot de passe: ");
    scanf("%s",pass);
switch(choix){
    case 1:
    crypte(pass);
    break;
    case 2:
    decrypte(pass);
    break;
    default:
    printf("mauvaise valeur\n");
    break;
}
}