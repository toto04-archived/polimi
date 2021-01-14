#include <stdio.h>
#include <stdlib.h>

#define L 10000

typedef enum {
    false,
    true
} bool;

typedef struct el {
    int* n;
    struct el* prox;
} elem;
typedef elem* list;

void MaxLoc(int arr[], int len, list l) {

    for (int i = 0; i < len; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {

        }
    }
}

int main() {
    char* arr = "aaa00aaa";
    printf("%s\n", arr);
    printf("%d\n", stessoCarattere(arr));
}