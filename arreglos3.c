/*
 * Este programa utiliza un apuntadores para invertir el contenido de un arreglo
 *
 */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // TODO: (6) Declara el apuntador al inicio del arreglo
    int *start = arr;
    // TODO: (7) Declara el apuntador al final del arreglo
    int size = sizeof(arr)/sizeof(arr[0]);
    int *end = start+(size-1);

    // TODO: (8) Imprime el arreglo original
    printf("[ ");
    for(int i =0; i < 5;i++)
        printf("%d, ", arr[i]);
    printf("] ");

    // TODO: (9) Crea un ciclo que invierita el arreglo, TIP: es neceario usar un apuntador temporal
    while(start < end){
        int temp = *start;
        *start =*end;
        *end = temp;
        start++;
        end--;
    }

    // Mostrar el arreglo invertido
    printf("[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf(" ]\n");
    
    return 0;
}
