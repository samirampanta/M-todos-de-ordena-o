#include <stdio.h>

// Função para ordenar o array usando Selection Sort
void selectionSort(int v[], int n) {
    int i, j, menor, temp;
    // Laço que vai percorrer o array e selecionar o menor elemento
    for (i = 0; i < n - 1; i++) {
        menor = i;
        // Laço interno para encontrar o menor elemento na parte não ordenada
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        // Troca o elemento encontrado com o elemento na posição i
        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
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

    // Ordena o array usando Selection Sort
    selectionSort(v, n);

    // Imprime o array ordenado
    printf("Array ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

