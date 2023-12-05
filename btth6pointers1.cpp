#include <stdio.h>

void Ent(int *arr, int size);
void Pri(int *arr, int size);
int Search(int *arr, int size, int value);

int main() {
    int size;

    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);

    int arr[size];

    Ent(arr, size);

    printf("Mang vua nhap la: ");
    Pri(arr, size);

    int value;
    printf("\nNhap phan tu can tim kiem: ");
    scanf("%d", &value);

    int index = Search(arr, size, value);

    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", value, index);
    } else {
        printf("Phan tu %d khong tim thay trong mang.\n", value);
    }
    
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
int Search(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i;
        }
    }
    return -1;
}