#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile(char * file) {
    FILE *f = fopen(file, "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile("input.txt");

    FILE *f = fopen("input.txt", "r");

    char word[20], max_word[20], count, max = 0;

    while (!feof(f)) {
        fscanf(f, "%s", word);

        if (feof(f)) break;

        if (strlen(word) > 4) {

            count = strlen(word);

            for (int i = 0; i < strlen(word); i++) {
                for (int j = i+1; j < strlen(word); j++) {
                    if (tolower(word[i]) == tolower(word[j])) {
                        count--;
                        break;
                    }
                }
            }

            if (max <= count) {
                max = count;
                strcpy(max_word, word);
            }
        }
    }

    printf("%s", max_word);
}
