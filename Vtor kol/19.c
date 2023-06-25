#include <stdio.h>
#include <string.h>
#include <ctype.h>
// DO NOT CHANGE HERE
void wtf() {
    FILE *f = fopen("datnum.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *file;
    file = fopen("datnum.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char line[100];
    char last_line[100];
    int digits;
    int letters;
    double ratio;
    double max_ratio = 0;

    while ((fgets(line, 100, file)) != NULL) {
        digits = 0;
        letters = 0;
        for(int i = 0; i<strlen(line); i++) {
            if(isdigit(line[i])) {
                digits++;
            } else if(isalpha(line[i])) {
                letters++;
            }
        }
        if (letters == 0) {
            continue;
        }
        ratio = (double) digits / (double) letters;
        if (ratio >= max_ratio) {
            max_ratio = ratio;
            strcpy(last_line, line);
        }
    }
    printf("%s", last_line);
    fclose(file);
  	return 0;
}
