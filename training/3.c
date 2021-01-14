#include <stdio.h>
#include <stdlib.h>

#define L 10000

typedef enum {
    false,
    true
} bool;

typedef struct el {
    int n;
    struct el* prox;
} elem;
typedef elem* list;

list trashN(list l, int n) {
    list res = l;
    while (l != NULL) {
        list a = l;
        int count = 0;
        while (a != NULL) {
            if (a->n == l->n) count++;
            a = a->prox;
        }
        if (count >= n) {
            list a = l;
            while (a->prox != NULL) {
                if (a->prox->n == l->n) {
                    list temp = a->prox->prox;
                    free(a->prox);
                    a->prox = temp;
                }
                a = a->prox;
            }
        }
        l = l->prox;
    }
    return res;
}

int main() {
    list asd = malloc(sizeof(elem));
    asd->n = rand() % 10;
    list p = asd;
    for (int i = 0; i < 10; i++) {
        p->prox = malloc(sizeof(elem));
        p = p->prox;
        p->n = rand() % 10;
    }

    printf("{ ");
    p = asd;
    while (p != NULL) {
        printf("%d, ", p->n);
        p = p->prox;
    }
    printf("}\n");

    list aaa = trashN(asd, 2);

    printf("{ ");
    p = aaa;
    while (p != NULL) {
        printf("%d, ", p->n);
        p = p->prox;
    }
    printf("}\n");
}