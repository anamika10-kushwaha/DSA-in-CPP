#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    printf("enter t=");
    while(t--) {
        int n;
        scanf("%d", &n);
        // printf("enter n=");
        
        int a[n], b[n], c = 0, k = 1;
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        
        while(k == 1) {
            k = 0;
            for(int i = 0; i < n; i++) {
                if(a[i] < b[i]) {
                    a[i]++;
                }
                else if(a[i] > b[i]) {
                    a[i]--;
                    k = 1;
                }
            }
            c++;
        }
        
        printf("%d\n", c);
    }
    
    return 0;
}
