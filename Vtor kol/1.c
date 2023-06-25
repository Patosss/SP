#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int n, x;
    char str[100];

    scanf("%d%d", &n, &x);

    for (int i = 0; i <= n; i++) {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;

        for (int c = 0; c < strlen(str); c++) {
            if(isupper(str[c])) {
                if(str[c] + x > 'Z') str[c] += x - 26;
                else str[c] += x;
            }
            else if(islower(str[c])) {
                if(str[c] + x > 'z') str[c] += x - 26;
                else str[c] += x;
            }
        }
        if (str[0] != 0)
            printf("%s\n", str);
    }

    return 0;
}
