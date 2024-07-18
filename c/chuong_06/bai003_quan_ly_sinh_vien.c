#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define n (int) 1e5
#define all_in(a, i) a[i].ten, a[i].lop, &a[i].gpa
#define all_out(a, i) a[i].ten, a[i].lop, a[i].gpa

typedef struct {char ten[100]; char lop[50]; float gpa;} sv;

void display_0();

void input(sv [], int []);
void output(sv [], int []);

int main() {
    sv *arr = (sv*) malloc(n * sizeof(sv));

    int cnt[] = {0};

    input(arr, cnt);

    while(true) {
        display_0();

        int key;
        scanf(" %d", &key);

        if(key == 5) {
            output(arr, cnt);
        }
        
        if(key == 6) {
            break;
        }
    }

    free(arr);
    return 0;
}

void display_0() {
    system("cls");
    printf("\n\n\n");
    printf("               Chuong trinh quan ly sinh vien               \n");
    printf("------------------------------------------------------------\n");
    printf("                  [1] them sinh vien                        \n");
    printf("                  [2] xoa sinh vien                         \n");
    printf("                  [3] tim kiem sinh vien                    \n");
    printf("                  [4] sap xep sinh vien                     \n");
    printf("                  [5] hien thi danh sach                    \n");
    printf("                  [6] luu va thoat                          \n");
    printf("------------------------------------------------------------\n");
    printf("                    Nhap: ");
}

void input(sv arr[], int cnt[]) {
    FILE *f = fopen("input.txt", "r");

    if(f == NULL) {
        return;
    }

    while(fscanf(f, " %[^\n] %s %f", all_in(arr, cnt[0])) != EOF) {
        cnt[0]++;
    }

    fclose(f);
}

void output(sv arr[], int cnt[]) {
    if(cnt[0] == 0) {
        return;
    }

    system("cls");
    printf("\n\n\n");
    printf("               Chuong trinh quan ly sinh vien               \n");
    printf("------------------------------------------------------------\n");
    printf("| %-5s | %-30s | %-10s | %-5s |\n", "STT", "Ten", "Lop", "GPA");
    printf("------------------------------------------------------------\n");

    for(int i = 0; i < cnt[0]; i++) {
        printf("| %-5d | %-30s | %-10s | %-5.1f |\n", i + 1, all_out(arr, i));
    }

    printf("------------------------------------------------------------\n");

    system("pause");
}
