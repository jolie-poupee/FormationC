#include"etudiant.h"


void EnregistrerEtudiant(Etudiant etudiant)
{
    FILE*fichier;
    fichier=fopen("BDetudiant.txt","a");
    //fprintf(fichier,"%s;%s;%d;%d;%.2f;%.2f;%.2f\n",etudiant.numero,etudiant.nom,etudiant.age,etudiant.filiere,etudiant.note[0],etudiant.note[1],etudiant.note[2]);
     if(etudiant.filiere==1){
    fprintf(fichier,"%s;%s;%d;A;%.2f;%.2f;%.2f\n",etudiant.numero,etudiant.nom,etudiant.age,etudiant.note[0],etudiant.note[1],etudiant.note[2]);
     }else if(etudiant.filiere==2){
         fprintf(fichier,"%s;%s;%d;C;%.2f;%.2f;%.2f\n",etudiant.numero,etudiant.nom,etudiant.age,etudiant.note[0],etudiant.note[1],etudiant.note[2]);
     }else if(etudiant.filiere==3){
         fprintf(fichier,"%s;%s;%d;D;%.2f;%.2f;%.2f\n",etudiant.numero,etudiant.nom,etudiant.age,etudiant.note[0],etudiant.note[1],etudiant.note[2]);
     }
    fclose(fichier);
    
    printf("Etudiant '%s' enregistre avec succes ! \n", etudiant.numero);
}

/*void AfficherEtudiant(Etudiant *etudiant, int *lastIndice)
{
    printf("############# Liste des etudiants #############\n\n");
    fscanf=
    for(int i=0; i<*lastIndice; i++)
    {
        printf("..................................\n");
        printf("numero : %s\n", etudiant[i].numero);
        printf("NOM : %s\n", etudiant[i].nom);
        printf("AGE : %d\n", etudiant[i].age);
        printf("AGE : %s\n", etudiant[i].filiere);
        for(int j=0;j<3;j++){
        printf("MOYENNE : %.2f\n", etudiant[i].note[j]);
        }
    }
}*/



