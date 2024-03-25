#include<stdio.h>
void TableMultiplication(int nombre)
{
    int i,r;
    for(i=1;i<=10;i++){
        r=i*nombre;
        printf("%d*%d=%d\n",nombre,i,r);

    }
}
int main(void){
    int nb=5;
    TableMultiplication(nb);
    TableMultiplication(7);
    TableMultiplication(11);
    return 0;
}