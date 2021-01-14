#include <stdio.h>
#include <stdlib.h>

typedef struct el {
    int n;
    struct el* prox;
} elem;
typedef elem* list;

int main() {
    list lista = malloc(sizeof(elem));
    lista->n = rand() % 10;
    // printf("%d", lista->prox == NULL);
    list p = lista;
    for (int i = 0; i < 10; i++) {
        p->prox = malloc(sizeof(elem));
        p = p->prox;
        p->n = rand() % 10;
    }

    p = lista;
    while (p != NULL) {
        printf("%d, ", p->n);
        p = p->prox;
    }
    printf("\n");

    p = lista;
    while (p != NULL) {
        list a = p;
        while (a->prox != NULL) {
            // printf("")
            if (a->prox->n == p->n) {
                list temp = a->prox->prox;
                free(a->prox);
                a->prox = a->prox->prox;
                if (a->prox == NULL) break;
            }
            a = a->prox;
        }
        p = p->prox;
    }

    p = lista;
    while (p != NULL) {
        printf("%d, ", p->n);
        p = p->prox;
    }
}