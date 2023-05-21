 #include <stdio.h>

// Функція для введення елементів масиву
void inputArray(double arr[], int n) {
    printf("Введіть %d елементів масиву:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
}

// Функція для виведення елементів масиву
void outputArray(double arr[], int n) {
    printf("Елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}

// Функція для обчислення суми елементів масиву
double computeSum(double arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    double arr[n];

    inputArray(arr, n);
    outputArray(arr, n);

    double sum = computeSum(arr, n);
    printf("Сума елементів масиву: %.2lf\n", sum);

    return 0;
}
