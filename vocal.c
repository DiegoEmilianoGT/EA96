//
// Created by usuario on 09/01/2025.
//

#include <stdio.h>
#include <string.h>


char phrase [100];

int countVowels(char* phrase) {
    int vocales = 0;
    int i=strlen(phrase);
    for(int y=0;y<i;y++){
        if(phrase[y]=='a' ||phrase[y]=='e'||phrase[y]=='i'||phrase[y]=='o'||phrase[y]=='u'){
            vocales++;
        }
    }
    printf("\nEl numero de VOCALES que tiene la cadena es: %d\n", vocales);
    return vocales;
}


int countConsonants(char* phrase) {
    int count=0, i=strlen(phrase);
    while (phrase[i]){
        if (!countVowels(i)) {
            count++;
        }
        i++;
    }
    printf("\nEl numero de CONSONANTES que tiene la cadena es: %d\n", count);
    return count;
}



void getInput(char* ){
    do {
        printf("Introduce una cadena: ");
        scanf("%s", phrase);
    }while(strlen(phrase)>0);

}

int main(){
    getInput(phrase);
    countVowels(phrase);
    countConsonants(phrase);

    return 0;
}
