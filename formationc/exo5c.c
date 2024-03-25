#include<stdio.h>
void echange(int *nombre1,int *nombre2){
    int tab=*nombre1;
    *nombre1=*nombre2;
    *nombre2=tab;

}
int main(){
    int nombre1=15;
    int nombre2=51;
       printf("au depart: nombre1 = %d et nombre2 =%d \n",nombre1,nombre2);
    echange(&nombre1,&nombre2);
      printf("apres : nombre1 = %d et nombre2 = %d \n",nombre1,nombre2);
    return 0;
}