#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define n (int) 1e5
#define all_in(a, i) a[i].ten, a[i].lop, &a[i].gpa
#define all_out(a, i) a[i].ten, a[i].lop, a[i].gpa

typedef struct {char ten[50]; char lop[30]; float gpa;} sv;

void display_main();
void display_0();
void display_1_0();
void display_1_1();
void display_5();

void input(sv [], int []);
void output(sv [], int []);
void save(sv [], int []);
void push(sv [], int []);

int main() {
    sv *arr = (sv*) malloc(n * sizeof(sv));

    int cnt[] = {0};

    input(arr, cnt);

    while(true) {
        display_0();

        int key;
        scanf("%d", &key);
        
        getchar();
        
        if(key == 1) {
            push(arr, cnt);
        }

        if(key == 5) {
            output(arr, cnt);
        }
        
        if(key == 6) {
            save(arr, cnt);
            break;
        }
    }

    free(arr);
    return 0;
}

void display_main() {
    system("cls");
    printf("\n\n\n");
    printf("               Chuong trinh quan ly sinh vien               \n");
    printf(" -----------------------------------------------------------\n");
}

void display_0() {
    display_main();
    
    printf("                  [1] them sinh vien                        \n");
    printf("                  [2] xoa sinh vien                         \n");
    printf("                  [3] tim kiem sinh vien                    \n");
    printf("                  [4] sap xep sinh vien                     \n");
    printf("                  [5] hien thi danh sach                    \n");
    printf("                  [6] luu va thoat                          \n");
    printf(" -----------------------------------------------------------\n");
    printf("                    Nhap: ");
}

void display_1_0() {
    display_main();

    printf("\n\n");
    printf("                 danh sach da dat gioi han!                 \n");
    printf("\n\n");
    system("pause");
}

void display_1_1() {
    display_main();
    
    printf("\n\n");
    printf("                    nhap thanh cong!                        \n");
    printf("\n\n");
    system("pause");
}

void display_5() {
    display_main();

    printf("\n\n");
    printf("           khong co sinh vien nao trong danh sach!          \n");
    printf("\n\n");
    system("pause");
}

void input(sv arr[], int cnt[]) {
    FILE *f1 = fopen("input.txt", "r");

    if(f1 == NULL) {
        return;
    }

    while(fscanf(f1, " %[^\n] %s %f", all_in(arr, cnt[0])) != EOF) {
        cnt[0]++;
    }

    fclose(f1);
}

void output(sv arr[], int cnt[]) {
    if(cnt[0] == 0) {
        display_5();
        return;
    }

    display_main();

    printf("| %-5s | %-30s | %-10s | %-3s |\n", "STT", "Ten", "Lop", "GPA");
    printf(" -----------------------------------------------------------\n");

    for(int i = 0; i < cnt[0]; i++) {
        printf("| %-5d | %-30s | %-10s | %-3.1f |\n", i + 1, all_out(arr, i));
    }

    printf(" -----------------------------------------------------------\n");
    printf("\n");
    system("pause");
}

void save(sv arr[], int cnt[]) {
    FILE *f2 = fopen("input.txt", "w");

    for(int i = 0; i < cnt[0]; i++) {
        fprintf(f2, "%s\n", arr[i].ten);
        fprintf(f2, "%s\n", arr[i].lop);
        fprintf(f2, "%.1f\n", arr[i].gpa);
    }

    fclose(f2);
}

void push(sv arr[], int cnt[]) {
    if(cnt[0] == n) {
        display_1_0();
        return;
    }
    
    int i = cnt[0];
    int j = 0;
    
    display_main();
    
    printf("\n");
    printf("            Nhap ten: ");
    fgets(arr[i].ten, 50, stdin);
    j = strlen(arr[i].ten);
    arr[i].ten[j - 1] = '\0';
    
    printf("            Nhap lop: ");
    fgets(arr[i].lop, 30, stdin);
    j = strlen(arr[i].lop);
    arr[i].lop[j - 1] = '\0';
    
    printf("            Nhap GPA: ");
    scanf("%f", &arr[i].gpa);
    
    cnt[0]++;
    
    display_1_1();
}
