#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string.h>
#include <stdio.h>



typedef struct{
    char numero[8];
    char nom[50];
    int age;
    float note;
}Etudiant;


void EnregistrerEtudiant(Etudiant etudiant, Etudiant *listOfStudent, int *lastIndice);
void AfficherEtudiant(Etudiant *ListOfStudent, int *lastIndice);
#endif
