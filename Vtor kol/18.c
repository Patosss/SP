#include <stdio.h>
#include <string.h>
#define MAX 100


//ne menuvaj!
void wtf() {
    FILE *f = fopen("sp.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void rff() {
    FILE *f = fopen("output.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

int main() {
    wtf();   
    FILE *f1 = fopen("sp.txt", "r");
    FILE *f2 = fopen("output.txt", "w");
    int k;
    fscanf(f1, "%d", &k); // read the first line of the input file as the parameter k
    char c;
    while((c = fgetc(f1)) != EOF) {
        if (c == '\n') continue;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            for (int i = 0; i < k; i++) {
                fputc(c, f2);
            }
        } else {
            fputc(c, f2);
        }
    }
    fclose(f1);
    fclose(f2);
    rff();
    return 0;
	
}
