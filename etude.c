#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ETUDIANTS 100

typedef struct {
    char MATRICULE[50];
    char NOM[50];
    char PRENOM[50];
    int AGE;
    char FILIERE[50];
    int NIVEAU;
    int COTISATIONS[5];
} Etudiant;

Etudiant etudiants[MAX_ETUDIANTS];
int nombreEtudiants = 0;

int main() {
    int choix = 0;
    char matricule[50];
    char reponse[3];
    int count = 0,aux;
    int  i,j, n=0;
    
    while (1) {
        printf("\n---------------------------------------------Menu-----------------------------------------------\n");
        printf("|0: Quitter le programme                                                                        |\n");
        printf("|1: Ajouter un etudiant                                                                         |\n");
        printf("|2. Modifier un etudiant                                                                        |\n");
        printf("|3. Supprimer un etudiant                                                                       |\n");
        printf("|4. Afficher la liste des etudiants et le montant total de leurs cotisations                    |\n");
        printf("|5. Afficher la liste des etudiants solvables                                                   |\n");
        printf("|6. Afficher la liste des etudiants insolvable                                                  |\n");
        printf("|7. Afficher le pourcentage des etudiants n'ayant pas fait toutes les cotisations               |\n");
        printf("|8. Supprimer les etudiants n'ayant rien cotise                                                 |\n");
        printf("|9. Rechercher un etudiant par matricule                                                        |\n");
        printf("|10: trie                                                                                       |\n");
        printf("|11. Quitter                                                                                    |\n");
        printf("|_______________________________________________________________________________________________|\n");
        printf("\n\n");
        printf("Entrer votre choix \n");
        scanf("%d",&choix);
        switch (choix) {
            case 0:
               break;
            case 1:
                if (nombreEtudiants < MAX_ETUDIANTS) {
                    printf("Matricule: ");
                    scanf("%s", etudiants[nombreEtudiants].MATRICULE);
                    printf("Nom: ");
                    scanf("%s", etudiants[nombreEtudiants].NOM);
                    printf("Prenom: ");
                    scanf("%s", etudiants[nombreEtudiants].PRENOM);
                    printf("Age: ");
                    scanf("%d", &etudiants[nombreEtudiants].AGE);
                    printf("Filiere: ");
                    scanf("%s", etudiants[nombreEtudiants].FILIERE);
                    printf("Niveau: ");
                    scanf("%d", &etudiants[nombreEtudiants].NIVEAU);
                    printf("Cotisations:\n");
                    for (int i = 0; i < 5; i++) {
                        printf("Cotisation %d: ", i + 1);
                        scanf("%d", &etudiants[nombreEtudiants].COTISATIONS[i]);
                    }
                    nombreEtudiants++;
                    printf("Etudiant ajoute avec succes.\n");
                } else {
                    printf("Nombre maximum d'etudiants atteint.\n");
                }
                break;
            case 2:
                printf("Matricule de l'etudiant a modifier: ");
                scanf("%s", matricule);
                for (int i = 0; i < nombreEtudiants; i++) {
                    if (strcmp(etudiants[i].MATRICULE, matricule) == 0) {
                        printf("Nouveau nom: ");
                        scanf("%s", etudiants[i].NOM);
                        printf("Nouveau prenom: ");
                        scanf("%s", etudiants[i].PRENOM);
                        printf("Nouvel age: ");
                        scanf("%d", &etudiants[i].AGE);
                        printf("Nouvelle filiere: ");
                        scanf("%s", etudiants[i].FILIERE);
                        printf("Nouveau niveau: ");
                        scanf("%d", &etudiants[i].NIVEAU);
                        printf("Nouvelles cotisations:\n");
                        for (int j = 0; j < 5; j++) {
                            printf("Cotisation %d: ", j + 1);
                            scanf("%d", &etudiants[i].COTISATIONS[j]);
                        }
                        printf("Etudiant modifie avec succes.\n");
                        break;
                    }
                }
                printf("Aucun etudiant avec le matricule %s trouve.\n", matricule);
                break;
            case 3:
                printf("Matricule de l'etudiant a supprimer: ");
                scanf("%s", matricule);
                for (int i = 0; i < nombreEtudiants; i++) {
                    if (strcmp(etudiants[i].MATRICULE, matricule) == 0) {
                        for (int j = i; j < nombreEtudiants - 1; j++) {
                            etudiants[j] = etudiants[j + 1];
                        }
                        nombreEtudiants--;
                        printf("Etudiant supprime avec succes.\n");
                        break;
                    }
                }
                printf("Aucun etudiant avec le matricule %s trouve.\n", matricule);
                break;
            case 4:
                printf("Liste des etudiants:\n");
                for (int i = 0; i < nombreEtudiants; i++) {
                    printf("Etudiant %d:\n", i + 1);
                    printf("Matricule: %s\n", etudiants[i].MATRICULE);
                    printf("Nom: %s\n", etudiants[i].NOM);
                    printf("Prenom: %s\n", etudiants[i].PRENOM);
                    printf("Age: %d\n", etudiants[i].AGE);
                    printf("Filiere: %s\n", etudiants[i].FILIERE);
                    printf("Niveau: %d\n", etudiants[i].NIVEAU);
                    printf("Cotisations:\n");
                    for (int j = 0; j < 5; j++) {
                        printf("Cotisation %d: %d\n", j + 1, etudiants[i].COTISATIONS[j]);
                    }
                    printf("\n");
                }
                printf("Montant total des cotisations:\n");
                for (int i = 0; i < nombreEtudiants; i++) {
                    int total = 0;
                    for (int j = 0; j < 5; j++) {
                        total += etudiants[i].COTISATIONS[j];
                    }
                    printf("Etudiant %d - Montant total: %d\n", i + 1, total);
                }
                break;
            case 5:
                printf("Liste des etudiants solvables:\n");
                for (int i = 0; i < nombreEtudiants; i++) {
                    int total = 0;
                    for (int j = 0; j < 5; j++) {
                        total += etudiants[i].COTISATIONS[j];
                    }
                    printf(": %s %s - Montant total: %d\n", etudiants[i].NOM, etudiants[i].PRENOM, total);
                }
                break;
            case 6:
                printf("Liste des etudiants insolvable:\n");
                for (int i = 0; i < nombreEtudiants; i++) {
                    int total = 0;
                    for (int j = 0; j < 5; j++) {
                        total += etudiants[i].COTISATIONS[j];
                    }
                    if (total < 1) {
                        printf("%s %s\n", etudiants[i].NOM, etudiants[i].PRENOM);
                    }
                }
                break;
            case 7:
                
                for (int i = 0; i < nombreEtudiants; i++) {
                    int total = 0;
                    for (int j = 0; j < 5; j++) {
                        total += etudiants[i].COTISATIONS[j];
                    }
                    if (total < 1) {
                        count++;
                    }
                }
                printf("Pourcentage des etudiants n'ayant pas fait toutes les cotisations: %.2f%%\n", (float)count / nombreEtudiants * 100);
                break;
            case 8:
                for (int i = 0; i < nombreEtudiants; i++) {
                    float total = 0;
                    for (int j = 0; j < 5; j++) {
                        total += etudiants[i].COTISATIONS[j];
                    }
                    if (total < 1) {
                        for (int j = i; j < nombreEtudiants - 1; j++) {
                            etudiants[j] = etudiants[j + 1];
                        }
                        nombreEtudiants--;
                        i--;
                    }
                }
                break;
            case 9:
                printf("Matricule de l'etudiant a rechercher: ");
                scanf("%s", matricule);
                for (int i = 0; i < nombreEtudiants; i++) {
                    if (strcmp(etudiants[i].MATRICULE, matricule) == 0){
                        printf("Etudiant trouve:\n");
                        printf("Matricule: %s\n", etudiants[i].MATRICULE);
                        printf("Nom: %s\n", etudiants[i].NOM);
                        printf("Prenom: %s\n", etudiants[i].PRENOM);
                        printf("Age: %d\n", etudiants[i].AGE);
                        printf("Filiere: %s\n", etudiants[i].FILIERE);
                        printf("Niveau: %d\n", etudiants[i].NIVEAU);
                        printf("Cotisations:\n");
                        for (int j = 0; j < 5; j++) {
                            printf("Cotisation %d: %d\n", j + 1, etudiants[i].COTISATIONS[j]);
                        }
                        break;
                    }
                }
                printf("Aucun etudiant avec le matricule %s trouve.\n", matricule);
                break;
            case 10:
               
                for( i=0;i<nombreEtudiants-1;i++){
                    for(j=i+1;j<nombreEtudiants;j++){
                        if(etudiants[i].AGE>etudiants[j].AGE){
                            aux=etudiants[i].AGE;
                            etudiants[i].AGE=etudiants[j].AGE;
                            etudiants[j].AGE=aux;  	
                        }
                    } 
                }
                printf("Liste trie:\n");
                for(i=0;i<nombreEtudiants;i++){
                    printf("Etudiant %d:\n", i + 1);
                    printf("Matricule: %s\n", etudiants[i].MATRICULE);
                    printf("Nom: %s\n", etudiants[i].NOM);
                    printf("Prenom: %s\n", etudiants[i].PRENOM);
                    printf("Age: %d\n", etudiants[i].AGE);
                    printf("Filiere: %s\n", etudiants[i].FILIERE);
                    printf("Niveau: %d\n", etudiants[i].NIVEAU);
                    printf("Cotisations:\n");
                    for (int j = 0; j < 5; j++) {
                        printf("Cotisation %d: %d\n", j + 1, etudiants[i].COTISATIONS[j]);
                    }
                    printf("\n");
                }
                break;
            case 11:
                exit(0);
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                break;
        }
        printf("\n\n\n");   
        printf("Voulez vous continuer O/N \n");
        scanf("%s",reponse);
        system("cls");
    }while (strcmp(reponse,"N")==1  || strcmp(reponse,"n")==1 || strcmp(reponse,"non")==1 | strcmp(reponse,"NON")==1);
     
    return 0;
}
