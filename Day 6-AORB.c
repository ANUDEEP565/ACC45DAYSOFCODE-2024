#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int calculate_score(int x, int y) {
    int score_ab = (500 - 2 * x) + (1000 - 4 * (x + y));
    int score_ba = (1000 - 4 * y) + (500 - 2 * (x + y));
    return max(score_ab, score_ba);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", calculate_score(x, y));
    }

    return 0;
}
