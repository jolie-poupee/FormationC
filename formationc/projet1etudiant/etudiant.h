#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string.h>
#include <stdio.h>



typedef struct{
    char numero[8];
    char nom[50];
    int age;
    int filiere;
    float note[3];
}Etudiant;


void EnregistrerEtudiant(Etudiant etudiant);
/*void AfficherEtudiant(Etudiant *ListOfStudent, int *lastIndice);*/
#endif