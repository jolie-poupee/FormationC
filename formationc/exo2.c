#include<stdio.h>
void salutation(char *nom, int age){
    printf("bonjour %s vous avez %d ans",nom,age);
}
int main(void){
    char nom[20];
    int age;
    printf("veuillez entrer votre nom: ");
    scanf("%s",nom);
    printf("veuillez entrer votre age: ");
    scanf("%d",&age);
    salutation(nom,age);
    return 0;
}