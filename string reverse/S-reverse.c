#include <stdio.h>
int main() {
    char a[50];
    printf("Enter the value of the string: ");
    scanf("%s", a);

    int size = 0;
    while (a[size] != '\0') {
        size++;
    }

    for (int i = size - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }

    return 0;
}