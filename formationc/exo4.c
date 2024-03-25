#include<stdio.h>
int main(){
    int nombre2=51,nombre1=15,tap;
    printf("au depart: nombre1 = %d et nombre2 = %d \n",nombre1,nombre2);
    tap=nombre1;
    nombre1=nombre2;
    nombre2=tap;
    printf("apres : nombre1 = %d et nombre2 = %d \n",nombre1,nombre2);
    return 0;
}