#include<stdio.h>
int main (){
    int n;
    printf("entrer un nombre n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: printf("lundi");
        break;
        case 2: printf("mardi");
        break;  
        case 3: printf("mercredi");
        break;
        case 4: printf("jeudi");
        break;
        case 5: printf("vendredi");
            break;
        case 6: printf("samedi");
             break;
        case 7: printf("dimanche");

    default: printf("mauvais");
    }
}
