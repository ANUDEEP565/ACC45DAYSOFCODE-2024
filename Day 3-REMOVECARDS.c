#include <stdio.h>

#define MAX_NUM 10

void min_moves_to_same_number(int T) {
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int cards[N];
        int frequency[MAX_NUM + 1] = {0}; 
     
        for (int i = 0; i < N; i++) {
            scanf("%d", &cards[i]);
            frequency[cards[i]]++;
        }
        
       
        int max_freq = 0;
        for (int i = 1; i <= MAX_NUM; i++) {
            if (frequency[i] > max_freq) {
                max_freq = frequency[i];
            }
        }
        
        
        int min_moves = N - max_freq;
        printf("%d\n", min_moves);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    min_moves_to_same_number(T);
    return 0;
}

