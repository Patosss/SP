#include <stdio.h>

void evenoddnum (int a[], int n, int i, int count) {
    if (i == n) {
        if (count) return;
        else {
            printf("No such elements!");
            return;
        };
    }

    int first = a[i], last = a[i]%10;

    while (first >= 10) {
        first /= 10;
    }
    if (first % 2 && last % 2 == 0) {
        printf("%d\n", a[i]);
        count++;
    }

    return evenoddnum(a, n, ++i, count);
}

int main()
{
    int n, a[100], firstDigit;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++) {
        scanf("%d\n", &a[i]);
    }
    
    evenoddnum(a, n, 0, 0);
}
