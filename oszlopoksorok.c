#include <stdio.h>
#include <stdlib.h>

int main(){
    int sorszam, oszlopszam;

    printf("Add meg a sorszamot, oszlopszamot szokozzel elvalasztva: ");
    scanf("%d %d", &sorszam, &oszlopszam);

    int** tomb = (int**)malloc(sizeof(int*) * sorszam);
    
    for(int i = 0; i < sorszam; ++i){
        tomb[i] = (int*) malloc(sizeof(int) * oszlopszam);
    }

    for(int i = 0; i<sorszam; ++i){
        for(int j = 0; j<oszlopszam; ++j){
            tomb[i][j] = i * oszlopszam + j + 1;
        }
    }

    for(int i = 0; i < sorszam; ++i){
        for(int j = 0; j < oszlopszam; ++j){
            printf("%d\t", tomb[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < sorszam; ++i){
        free(tomb[i]);
    }
    free (tomb);
return 0;
}
