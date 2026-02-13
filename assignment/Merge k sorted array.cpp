int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int* solve(int** A, int n11, int n12, int *len1) {
    int total = n11 * n12;
    int* result = (int*)malloc(total * sizeof(int));
    int index = 0;
    int i, j;  
    for(i = 0; i < n11; i++) {
        for(j = 0; j < n12; j++) {
            result[index++] = A[i][j];
        }
    }
    qsort(result, total, sizeof(int), compare);
    *len1 = total;
    return result;
}
