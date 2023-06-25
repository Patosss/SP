#include <stdio.h>
#include <string.h>
#include <ctype.h>

int digits(char str[]) {

    int start_index, end_index, flag = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            start_index = i;
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("No digits");
        return 0;
    }

    for (int i = start_index+1; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            end_index = i;
            break;
        }

        end_index = strlen(str)-1;
    }

    for (int i = start_index; i <= end_index; i++) printf("%c", str[i]);
}

int main() {

    char str[100];

    fgets(str, sizeof(str), stdin);

    digits(str);

    return 0;
}
