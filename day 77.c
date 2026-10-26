
#include <stdio.h>
#include <math.h>

float calculateSD(int data[], int n);

int main(void) {
    int n, i;
    int data[100];

    printf("Enter size of the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size\n");
        return 1;
    }

    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    printf("Standard Deviation = %.6f\n",
           calculateSD(data, n));

    return 0;
}

float calculateSD(int data[], int n) {
    float sum = 0.0, mean, SD = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        sum += data[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        SD += pow(data[i] - mean, 2);
    }

    return sqrt(SD / n);
}
