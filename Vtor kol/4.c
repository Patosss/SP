#include <stdio.h>

int main() {
    int a, b, c, a_count, b_count;

    while(scanf("%d%d%d", &a, &b, &c) != EOF) {
        int temp = a/10;
        a_count = b_count = 0;

        while(temp) {
            if(temp % 10 == c) a_count++;
            temp /= 100;
        }

        temp = b/10;

        while(temp) {
            if (temp % 10 == c) b_count++;
            temp /= 100;
        }

        if(a_count >= b_count)
            printf("%d\n", a);
        else
            printf("%d\n", b);
    }
    return 0;
}
