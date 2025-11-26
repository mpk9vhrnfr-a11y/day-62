#include <stdio.h>

int main(void) {
    int n, i, currentSum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    currentSum = maxSum = arr[0];

    for(i = 1; i < n; i++) {
        if(currentSum + arr[i] > arr[i])
            currentSum += arr[i];
        else
            currentSum = arr[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}

