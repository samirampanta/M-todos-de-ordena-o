#include <stdio.h>

// Fun��o para ordenar o array usando Bubble Sort
void bubbleSort(int v[], int n) {
    int i, j, temp;
    // La�o externo que percorrer� o array v�rias vezes
    for (i = 0; i < n - 1; i++) {
        // La�o interno para comparar os elementos adjacentes
        for (j = 0; j < n - 1 - i; j++) {
            // Troca os elementos se estiverem n�o estiverem na ordem correta
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int v[n];

  
    for (int i = 0; i < n; i++) {
    	printf("Digite o %d elemento do array: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("Array original: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // Ordena o array usando Bubble Sort
    bubbleSort(v, n);

    printf("Array ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

