#include<stdio.h>
void enregistrer(char*nom,int montant,char*date){
     FILE*fichier;
    fichier=fopen("cotisation.txt ","a");
    fprintf(fichier,"%s a cotise %d le %s \n",nom,montant,date);

}
void afficher(){
    FILE*fichier;
    fichier=fopen("cotisation.txt ","r");
    if (fichier==NULL){
        printf("fichier inexistant \n");
        return;
    }
    char carac;
    while((carac=fgetc(fichier))!=EOF){
        printf("%C",carac);
    }
    
    fclose(fichier);
}
int main(void)
{
    char nom[20],date[11];
    int montant,choix;
    printf(" veuillez choisir une option \n");
    printf(" \t1.cotiser \n");
    printf(" \t2.afficher toutes les cotisations \n");
    printf(" choix: ");
    scanf("%d",&choix);
    switch(choix){
        case 1:
        printf(" entrez votre nom: ");
    scanf("%s",nom);
    printf(" entrer le montant a cotiser: ");
    scanf("%d",&montant);
    printf(" entrez la date du jour: ");
    scanf("%s",date);
        enregistrer(nom,montant,date);
        break;
        case 2:
        afficher();
        break;
        default:printf("mauvaise valeur \n");

    }
   
}