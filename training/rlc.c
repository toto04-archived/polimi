#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct {
    int seq[MAX];
    int len;
} list;

list rlcEncode(int arr[MAX]) {
    list rlc;
    rlc.len = 1;
    rlc.seq[rlc.len - 1] = 0;
    int counting = 0;
    for (int i = 0; i < MAX; i++) {
        if (arr[i] == counting) {
            rlc.seq[rlc.len - 1]++;
        } else {
            counting = !counting;
            rlc.len++;
            rlc.seq[rlc.len - 1] = 1;
        }
    }
    return rlc;
}

int main() {
    int arr[MAX] = {1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
    list l = rlcEncode(arr);

    printf("[");
    for (int i = 0; i < l.len; i++) {
        printf("%d, ", l.seq[i]);
    }
    printf("]");
}