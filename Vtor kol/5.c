#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("numbers.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    
    FILE * file = fopen("numbers.txt", "r");
  
    int n, num, max_num;

    while (!feof(file)) {
        fscanf(file, "%d", &n);
        if (n == 0) break;
        int max_digit = 0;
        for (int i = 0; i < n; i++) {
            fscanf(file, "%d", &num);
            int temp = num;
            while (temp > 9) temp /= 10;
            if (max_digit < temp) {
                max_digit = temp;
                max_num = num;
            }
        }
        printf("%d\n", max_num);
    }
    fclose(file);
    return 0;
}
