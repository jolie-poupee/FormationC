#include <stdio.h>
int main(){
    int v1 = 5;
    int *ptr = &v1;
    int v2 =v1;
    printf("valeur v1 :%d\n",v1);
    printf("avec le pointeur :%d\n",*ptr);
    printf("valeur v2 :%d\n",v2);
    v1 = 62;
    printf("valeur v1 : %d\n",v1);
    printf("avec le pointeur :%d\n",*ptr);
    printf("valeur v2 :%d\n",v2);
    return 0;
}