#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define n (int) 1e5

typedef struct {char ten[100]; char lop[50]; float diem;} sv;

void display_0();

int main() {
    sv *arr = (sv*) malloc(n * sizeof(sv));

    //int cnt[] = {0};

    while(true) {
        display_0();

        int key;
        scanf(" %d ", &key);
        
        if(key == 6) {
            break;
        }
    }

    free(arr);
    return 0;
}

void display_0() {
    system("cls");
    printf("                                                                          \n");
    printf("                                                                          \n");
    printf("                                                                          \n");
    printf("                                    Chuong trinh quan ly sinh vien        \n");
    printf("                        --------------------------------------------------\n");
    printf("                                        [1] them sinh vien                \n");
    printf("                                        [2] xoa sinh vien                 \n");
    printf("                                        [3] tim kiem sinh vien            \n");
    printf("                                        [4] sap xep sinh vien             \n");
    printf("                                        [5] hien thi danh sach            \n");
    printf("                                        [6] luu va thoat                  \n");
    printf("                        --------------------------------------------------\n");
    printf("                                          Nhap: ");
}
