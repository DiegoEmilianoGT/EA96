//
// Created by usuario on 09/01/2025.
//
#include <stdio.h>
#include <string.h>

char phrase [100];

int countVowels(char* phrase) {
    int vocales = 0;
    for(int y=0;y<100;y++)
    {
        if(phrase[y]=='a' ||phrase[y]=='e'||phrase[y]=='i'||phrase[y]=='o'||phrase[y]=='u')
        {
            vocales++;
        }

    }
    printf("\nEl numero de VOCALES que tiene la cadena es: %d\n", vocales);
    return vocales;
}

int countConsonants(char* phrase) {
    int count = 0;
    for(int y=0;y<100;y++)
    {
        if(phrase[y] !='a' || phrase[y]!='e'||phrase[y]!='i'||phrase[y]!='o'||phrase[y]!='u')
        {
            count++;
        }

    }
    printf("\nEl numero de CONSONANTES que tiene la cadena es: %d\n", count);
    return count;
}



void getInput(char* ) {
        printf("Introduce una cadena: ");
        scanf("%s", phrase);

}



int main(){
    getInput(phrase);
    countVowels(phrase);
    countConsonants(phrase);

    return 0;

}
