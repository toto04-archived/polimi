#include <stdio.h>
#include <stdlib.h>

#define L 10000

typedef struct e {
    int V;
    int S;
} card;

int mazzoCompleto(char* path) {
    card mazzo[52];
    FILE* file = fopen(path, "r");
    int V, S;
    int i = 0;
    while (fscanf(file, "(%d,%d)", &V, &S) != EOF) {
        mazzo[i].V = V;
        mazzo[i].S = S;
        i++;
    }

    if (i < 52) return 0;

    for (i = 0; i < 52; i++) {
        for (int j = i + 1; j < 52; j++) {
            if (mazzo[i].S == mazzo[j].S && mazzo[i].V == mazzo[j].V) return 0;
        }
    }

    return 1;
}

int main() {
    printf("%d\n", mazzoCompleto("input.txt"));
}