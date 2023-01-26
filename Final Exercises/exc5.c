#include<stdio.h>
#include<stdlib.h>

int contains(char *seq, char value, int *size) {
    int i = 0;
    int x = *size;
    while(seq[i] != '\0') {

        if (seq[i] == value) {
            seq[i] = seq[i + 1];
            x--;

            *size = x;
            return 1;
            }
        i++;
    }
    return 0;
}

int allLetersIncluded(char *seq1, int size1, char *seq2, int size2) {
    
    for (int i = 0; i < size1; i++) {
        if (contains(seq2, seq1[i], &size2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    // char seq1[] = {'d', 'o', 'g'};
    // char seq2[] = {'g', 'o', 'o', 'd'};

    // char seq1[] = {'d', 'o', 'g'};
    // char seq2[] = {'c', 'a', 't',};

    char seq1[] = {'l', 'o', 'l'};
    char seq2[] = {'l', 'o', 'r', 'd'};

    int checker = allLetersIncluded(seq1, sizeof(seq1), seq2, sizeof(seq2));
    printf("\nchecker: %d\n", checker);
    return 0;
}