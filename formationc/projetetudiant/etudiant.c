#include"etudiant.h"


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



