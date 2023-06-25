#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
    wtf();
    FILE *f=fopen("text.txt","r");
    
    char line[100];
    int upper = 0;
    int lower = 0;
    double ratio, max_ratio = 0;
    int max_ratio_line = 0;
    int line_num = 0;
    
    while ((fgets(line, 100, f)) != NULL) {
        upper = 0;
        lower = 0;
        for(int i = 0; i<strlen(line); i++) {
            if(isalpha(line[i])) {
                if(isupper(line[i])) {
                    upper++;
                } else if(islower(line[i])) {
                    lower++;
                }
            }
        }
        ratio = (double) upper / (double) lower;
        if(ratio > max_ratio) {
            max_ratio = ratio;
            max_ratio_line = line_num;
        }
        line_num++;
        printf("%.2f %s", ratio, line);
    }
    printf("%d", max_ratio_line);
    fclose(f);
    return 0;
}
