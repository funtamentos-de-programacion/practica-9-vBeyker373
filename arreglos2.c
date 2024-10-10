#include <stdio.h>

int main(){
    //TODO: (4) Declara un apuntador que apunte al primer elemento del arreglo
    int arr[]= {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;

    printf("[ ");
    for(int i =0; i < 5;i++)
        printf("%d ", *(ptr + i));
    printf(" ]\n");

    //TODO: (5) Recorre el arreglo utilizando notación de punteros

    return 0;
}
