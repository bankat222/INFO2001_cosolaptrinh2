#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};
void EntBook(struct Book *books, int size);
void DisBook(struct Book *books, int size);

int main() {
    int size;

    printf("Nhap so luong sach: ");
    scanf("%d", &size);

    struct Book *books = (struct Book *)malloc(size * sizeof(struct Book));

    if (books == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    EntBook(books, size);

    printf("\nThong tin cac sach:\n");
    DisBook(books, size);

    free(books);

    return 0;
}
void EntBook(struct Book *books, int size) {
    for (int i = 0; i < size; i++) {
        printf("\nNhap thong tin cho sach %d:\n", i + 1);
        printf("Ten sach: ");
        scanf("%s", (books + i)->title);
        printf("Tac gia: ");
        scanf("%s", (books + i)->author);
        printf("Gia sach: ");
        scanf("%f", &(books + i)->price);
    }
}
void DisBook(struct Book *books, int size) {
    for (int i = 0; i < size; i++) {
        printf("\nThong tin sach %d:\n", i + 1);
        printf("Ten sach: %s\n", (books + i)->title);
        printf("Tac gia: %s\n", (books + i)->author);
        printf("Gia sach: %.2f\n", (books + i)->price);
    }
}