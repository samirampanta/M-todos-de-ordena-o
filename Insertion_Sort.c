#include <stdio.h>

// Fun��o para ordenar o array usando Insertion Sort
void insertionSort(int v[], int n) {
    int i, key, j;
    // La�o para percorrer o array a partir do segundo elemento
    for (i = 1; i < n; i++) {
        key = v[i];  // O elemento a ser inserido
        j = i - 1;

        // Move os elementos do array que s�o maiores que a chave
        // para uma posi��o � frente de sua posi��o atual
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        // Coloca a chave na posi��o correta
        v[j + 1] = key;
    }
}

int main() {
    int n;
    
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int v[n];


    for (int i = 0; i < n; i++) {
    	printf("Digite o %d elemento: ", i+1);
        scanf("%d", &v[i]);
    }

    // Imprime o array original
    printf("Array original: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // Ordena o array usando Insertion Sort
    insertionSort(v, n);

    // Imprime o array ordenado
    printf("Array ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

