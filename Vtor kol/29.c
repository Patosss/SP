#include <stdio.h>
#include <string.h>
#include <ctype.h>

//ne menuvaj!
void wtf() {
  FILE *f = fopen("input.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int sumNumbers(char * line) {
    int sum = 0;
    int currentnumber = 0;
    
    for(int i = 0; i<strlen(line); i++) {
        if(isdigit(line[i])) {
            currentnumber = 10*currentnumber + (line[i] - '0');
        } else {
            sum += currentnumber;
            currentnumber = 0;
        }
    }
    return sum;
}

void printAllLetter(char * line) {
    int i;
    for(i = 0; i<strlen(line); i++) {
        if(isalpha(line[i])) {
            printf("%c", line[i]);
        }
    }
}

int main() {
  wtf();
  
  FILE * file = fopen("input.txt", "r");
  
  char line[100];
  
  while ((fgets(line, 100, file)) != NULL) {
      int sumOfNumbers = sumNumbers(line);
      printAllLetter(line);
      printf("%d\n", sumOfNumbers);
  }
  
  fclose(file);
  return 0;
}
