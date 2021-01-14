#include <stdio.h>
#include <stdlib.h>

int confrontFile(char* path1, char* path2) {
    FILE* file1 = fopen(path1, "rb");
    FILE* file2 = fopen(path2, "rb");

    char byte1;
    char byte2;

    while (fread(&byte1, sizeof(char), 1, file1) != 0 && fread(&byte2, sizeof(char), 1, file2) != 0) {
        if (byte1 != byte2) return 1;
    }
    return 0;
}

int main() {
    printf("%d\n", confrontFile("input.txt", "input2.txt"));
}