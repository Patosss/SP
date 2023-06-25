#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

void wtf() {
    FILE *f = fopen("sifra.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();    
  
    FILE *file;
    file = fopen("sifra.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char letter;
    while ((letter = fgetc(file)) != EOF) {
        if (letter >= 'a' && letter <= 'z') {
            letter = ((letter - 'a' + 3) % 26) + 'a';
        }
        if (letter >= 'A' && letter <= 'Z') {
            letter = ((letter - 'A' + 3) % 26) + 'A';
        }
        printf("%c", tolower(letter));
    }

    fclose(file);
  
    return 0;
}
