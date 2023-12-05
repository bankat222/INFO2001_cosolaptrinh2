#include <stdio.h>
#include <stdlib.h>

void Ent(int *arr, int size);
void Pri(int *arr, int size);

int main() {
    int size;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    Ent(arr, size);

    printf("Mang vua nhap la: ");
    Pri(arr, size);

    free(arr);

    return 0;
}
void Ent(int *arr, int size) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }
}
void Pri(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}