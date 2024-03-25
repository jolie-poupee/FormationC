#include <stdio.h>
#include <string.h>

/*  Définition de la structure d'un étudiant    */
typedef struct{
    char numero[8];
    char nom[50];
    int age;
    float note;
}Etudiant;


void EnregistrerEtudiant(Etudiant etudiant, Etudiant *listOfStudent, int *lastIndice)
{
    strcpy(listOfStudent[*lastIndice].numero, etudiant.numero);
    strcpy(listOfStudent[*lastIndice].nom, etudiant.nom);
    listOfStudent[*lastIndice].age = etudiant.age;
    listOfStudent[*lastIndice].note = etudiant.note;

    *lastIndice += 1;

    
    printf("Etudiant '%s' enregistre avec succes ! \n", etudiant.numero);
}

void AfficherEtudiant(Etudiant *ListOfStudent, int *lastIndice)
{
    printf("############# Liste des etudiants #############\n\n");
    for(int i=0; i<*lastIndice; i++)
    {
        printf("..................................\n");
        printf("numero : %s\n", ListOfStudent[i].numero);
        printf("NOM : %s\n", ListOfStudent[i].nom);
        printf("AGE : %d\n", ListOfStudent[i].age);
        printf("MOYENNE : %.2f\n", ListOfStudent[i].note);
    }
}


int main(void)
{   
    int choix;
    int n = 0;
    Etudiant ListeEtudiants[1000]; // Déclaration d'un tableau pouvant contenir 1000 étudiants
    Etudiant newEtudiant;
    do
    {
        printf("\nQue souhaitez vous faire \n\n");

        printf("\t0. Quitter le programme\n");
        printf("\t1. Enregistrer un etudiant\n");
        printf("\t2. Afficher les informations de tous les etudiants\n");
        printf("Choix : ");
        scanf("%d",&choix); 

        switch(choix)
        {
            case 0 :
                printf("Sortie du programme... \n");
                break;
            case 1 :

                printf("Entrez le numero de l'etudiant : ");
                scanf("%s", newEtudiant.numero);
                printf("Entrez le nom de l'etudiant : ");
                scanf("%s", newEtudiant.nom);
                printf("Entrez son age : ");
                scanf("%d", &newEtudiant.age);
                printf("Entrez la note de l'etudiant : ");
                scanf("%f", &newEtudiant.note);

                EnregistrerEtudiant(newEtudiant, ListeEtudiants, &n);
                break;

            case 2 : 
                AfficherEtudiant(ListeEtudiants, &n);
                break;

            default : 
                printf("Mauvaise valeur, veuillez choisir soit 1 soit 2, ou alors 0 pour sortir du programme\n");
        }
    }

    while(choix != 0);

    return 0;
}