 #include <stdio.h>

void inputArray(int arr[], int n) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int n) {
    printf("Масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int countNegative(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int array1[n], array2[n];

    inputArray(array1, n);
    inputArray(array2, n);

    printf("Елементи першого масиву:\n");
    outputArray(array1, n);
    printf("Елементи другого масиву:\n");
    outputArray(array2, n);

    int count1 = countNegative(array1, n);
    int count2 = countNegative(array2, n);

    if (count1 > count2) {
        printf("У першому масиві більше від'ємних значень.\n");
    } else if (count2 > count1) {
        printf("У другому масиві більше від'ємних значень.\n");
    } else {
        printf("У першому та другому масивах однакова кількість від'ємних значень.\n");
    }

    return 0;
}
