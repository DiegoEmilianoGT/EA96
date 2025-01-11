//
// Created by usuario on 09/01/2025.
//

#include <stdio.h>
#include <string.h>


char phrase [100];

int isVocal(int c) {
    if(c=='a' ||c=='e'||c=='i'||c=='o'||c=='u'){
        return 1;
    }
}

int countVowels(char* phrase) {
    int vocales = 0, i=strlen(phrase);
    for(int y=0;y<i;y++){
       if (isVocal(phrase[i]))
            vocales++;
    }
    printf("\nEl numero de VOCALES que tiene la cadena es: %d\n", vocales);
    return vocales;
}

int countConsonants(char* phrase) {
    int count=0, i=strlen(phrase);
    while (phrase[i]){
        if (!isVocal(phrase[i])) {
            count++;
        }
        i++;
    }
    printf("\nEl numero de CONSONANTES que tiene la cadena es: %d\n", count);
    return count;
}

void getInput(){
        printf("Introduce una cadena: ");
        scanf("%s", phrase);
}

int main(){
    getInput(phrase);
    countVowels(phrase);
    countConsonants(phrase);
    return 0;
}
