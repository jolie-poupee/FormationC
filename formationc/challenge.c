#include<stdio.h>
#include<string.h>
typedef struct{
    char matricule[7];
    char nom[20];
    char prenom[10];
    int age;
    float note;
}etudiant;
etudiant saisir(){
    etudiant etudiant;
    printf("entrez le matricule de l'etudiant: \n");
    scanf("%s",etudiant.matricule);
    printf("entrez le nom de l'etudiant: \n");
    scanf("%s",etudiant.nom);
    printf("entrez votre prenom: \n");
    scanf("%s",etudiant.prenom);
    printf("entrez votre age: \n");
    scanf("%d",&etudiant.age);
    printf("entrez votre note: \n");
    scanf("%f",&etudiant.note);
    return etudiant;
     
}
void enregistrer(etudiant *v[100],etudiant m[],int *t){
   // etudiant  = saisir();
     // m[*t]=etudiant;
     int i,y=0;
     //saisir(m[*t]);
      *m=m[*t];
      *v[y]=saisir(m[*t]);
      y=y+1;
        *t=*t+1;
   /* for(i=0;i<*t;i++){
        printf("matricule: %s\n",v[i]->nom);
        printf("nom: %s\n",v[i].nom);
        printf("prenom: %s\n",v[i].prenom);
        printf("age: %d\n",v[i].age);
        printf("note: %f\n",v[i].note);
        break;
    }*/
    printf("%d\n",*t);
}
void afficher(etudiant *v[],int *t){
    int i,*t=0;
    for(i=0;i<*t;i++){
        printf("matricule: %s\n",v[i]->nom);
        printf("nom: %s\n",v[i]->nom);
        printf("prenom: %s\n",v[i]->prenom);
        printf("age: %d\n",v[i]->age);
        printf("note: %f\n",v[i]->note);
    }
    *t=t+1;
}
int main(){
    int i,t=0,choix,y;
    etudiant m1[100],e,v[100];
    do{
        printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°Menu°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("|0:quitter le programme.                                                                       |\n");
        printf("|1:enregistrer un etudiant.                                                                    |\n");                                                     
        printf("|2:afficher la liste des etudiants.                                                            |\n");
        printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("faites votre choix: ");
        scanf("%d",&choix);
         switch(choix){
            case 0:
            break;
            case 1:
            enregistrer(&v,m1,&t);
            v[y]=m1[t];
            y=y+1;
            break;
            case 2:
            afficher(&v,&t);
            break;
            default:
            printf("MAUVAIS\n");
            break;
    }

}while(1);
return 0;
}