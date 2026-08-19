#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    // Simple bubble sort for small arrays
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[505]; // max size
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int found = 0;

        // Try all even-length subarrays
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j += 2) {
                int len = j - i + 1;
                int M = len / 2;

                int sub[505];
                for (int k = 0; k < len; k++) {
                    sub[k] = A[i + k];
                }

                int chefMedian = sub[M - 1]; // Chef's wrong median
                sort(sub, len);
                int trueMedian = sub[M - 1]; // Correct median

                if (chefMedian != trueMedian) {
                    printf("%d %d\n", i + 1, j + 1); // 1-based indexing
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) {
            printf("-1\n");
        }
    }

    return 0;
}
