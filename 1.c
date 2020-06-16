#include<stdio.h>

int max(int * matrix[20], int m, int n){
    int max = **matrix;
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++)
            if(max < *(*(matrix + i) + j))
                max = *(*(matrix + i) + j);
    }
    return max;
}

void main(){
    int * matrix[20], m, n;
    scanf("%d%d", &m, &n);
    for(int i=0;i<m;i++){
        matrix[i] = (int*)malloc(n * sizeof(int));
        for(int j=0; j<n; j++)
            scanf("%d", *(matrix + i) + j );
    }
    printf("\nMax: %d", max(matrix, m, n));
}
