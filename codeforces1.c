#include <stdio.h>
#include <string.h>

int allOnes(char *s, int start, int k) 
{
    for (int i = start; i < start + k; i++) {
        if (s[i] != '1') {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[200005];
        scanf("%s", s);

        int bobWins = 0;

        for (int i = 0; i <= n - k; i++) {
            if (allOnes(s, i, k)) {
                bobWins = 1;
                break;
            }
        }

        if (bobWins)
            printf("Bob\n");
        else
            printf("Alice\n");
    }

    return 0;
}

