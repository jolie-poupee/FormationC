#include "etudiant.h"

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
                printf("entrez votre filiere(entre 1.A,2.C,3.D): ");
                scanf("%d",&newEtudiant.filiere);
                for(int j=0;j<3;j++){
                printf("Entrez la note numero %d de l'etudiant : ",j);
                scanf("%2f", &newEtudiant.note[j]);
                }

                EnregistrerEtudiant(newEtudiant);
                break;

            /*case 2 : 
                AfficherEtudiant(ListeEtudiants, &n);
                break;*/

            default : 
                printf("Mauvaise valeur, veuillez choisir soit 1 soit 2, ou alors 0 pour sortir du programme\n");
        }
    }

    while(choix != 0);

    return 0;
}