#include<stdio.h>
void printAge(int age)
{
    printf("vous avez %d ans\n",age);
}
int main(void){
    int age;
    printf("entrez votre age ");
    scanf("%d",&age);
    printAge(age);
    return 0;
}