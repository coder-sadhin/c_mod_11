#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt[7] = {0}; 
    for (int i = 0; i < n; i++) {
        int value = arr[i];
        if (value >= 0 && value <= 6) {  
            cnt[value]++;
        } else {
            printf("Invalid value: %d\n", value);
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d - %d\n", i, cnt[i]);
    }

    return 0;
}

