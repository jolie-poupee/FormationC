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
     
}
void enregistrer(etudiant *m,int *t){
   // etudiant  = saisir();
     // m[*t]=etudiant;
     //saisir(m[*t]);
     // *m=m[*t];
      saisir(m[*t]);
      
        *t=*t+1;
     /*for(i=0;i<*t;i++){
        printf("matricule: %s\n",v[i].nom);
        printf("nom: %s\n",v[i].nom);
        printf("prenom: %s\n",v[i].prenom);
        printf("age: %d\n",v[i].age);
        printf("note: %f\n",v[i].note);
        break;
    }*/
    printf("%d\n",*t);
}
void afficher(etudiant *m,int *t){
    int i;
     printf("%d\n",*t);
    for(i=0;i<*t;i++){
        printf("matricule: %s\n",m[i].matricule);
        printf("nom: %s\n",m[i].nom);
        printf("prenom: %s\n",m[i].prenom);
        printf("age: %d\n",m[i].age);
        printf("note: %f\n",m[i].note);
    }
}
int main(){
    int i,t=0,choix,y;
    etudiant m1[100],e,v[100];
    do{
        printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°Menu°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("|0:quitter le programme.                                                                       |\n");
        printf("|1:enregistrer et afficher un etudiant                                                         |\n");  
        printf("|2:enregistrer et afficher un etudiant                                                         |\n");                                                     
        printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("faites votre choix: ");
        scanf("%d",&choix);
         switch(choix){
           case 0:
           printf("vous etes sortis:\n");
            break;
            case 1:
            enregistrer(&m1,&t);
            break;
            case 2:
            afficher(&m1,&t);
            break;
            default:
            printf("MAUVAIS\n");
            
            break;
    }

}while(choix!=0);
return 0;
}