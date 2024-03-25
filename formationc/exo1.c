#include<stdio.h>
int main(){
    char nom[20];
    int age;
    printf("veuillez entrer votre nom: ");
    scanf("%s",nom);
    printf("veuillez entrer votre age: ");
    scanf("%d",&age);
    printf("bonjour %s vous avez %d ans",nom,age);
    return 0;
}