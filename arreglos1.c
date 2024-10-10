#include <stdio.h>


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    char str[] = "hola mundo";
    char str2[5];
    str2[0] = 'A';
    str2[1] = 'd';
    str2[2] = 'i';
    str2[3] = 'ó';
    str2[4] = 's';

    // TODO: (1) Recorre arr mediante un índice usando un ciclo
    printf("[ ");
    for(int i =0; i < 5;i++)
        printf ("%d, ", arr[i]);
    printf(" ]\n");

    // TODO: (2) Recorre str mediante un índice usando un ciclo
    printf(" [");
    for(int m =0; m < 10; m++)
        printf("%c, ", str[m]);
    printf(" ]\n");
    

    // TODO:(3) Recorre str2 mediante un índice usando un ciclo
    printf("[ ");
    for(int n =0; n < 5;n++)
        printf ("%c, ", str2[n]);
    printf(" ]\n");
}
