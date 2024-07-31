#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define n (int) 1e5
#define all_in(a, i) a[i].ho, a[i].ten, a[i].lop, &a[i].gpa
#define all_out(a, i) a[i].ho, a[i].ten, a[i].lop, a[i].gpa

typedef struct {char ho[30]; char ten[10]; char lop[20]; float gpa;} sv;

static inline void swap(sv arr[], int i, int pos) {sv val = arr[i]; arr[i] = arr[pos]; arr[pos] = val;}
static inline bool cmp_1(sv i, sv j) {return i.ten[0] > j.ten[0] ? true : false;}

void display_main();
void display_0();
void display_1_0();
void display_1_1();
void display_2_0();
void display_2_1();
void display_3();
void display_4();

void input(sv [], int []);
void output(sv [], int []);
void save(sv [], int []);
void push(sv [], int []);
void pop(sv [], int []);
void sort_and_search(sv [], int []);
void sort(sv [], int []);

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

        else if(key == 2) {
            pop(arr, cnt);
        }

        else if(key == 3) {
            sort_and_search(arr, cnt);
        }

        else if(key == 4) {
            output(arr, cnt);
        }
        
        else if(key == 5) {
            save(arr, cnt);
            break;
        }

        else {
            display_2_0();
        }
    }

    free(arr);
    return 0;
}

void display_main() {
    system("cls");
    printf("\n\n\n");
    printf("                 Chuong trinh quan ly sinh vien                      \n");
    printf(" --------------------------------------------------------------------\n");
}

void display_0() {
    display_main();
    
    printf("                    [1] them sinh vien                               \n");
    printf("                    [2] xoa sinh vien                                \n");
    printf("                    [3] sap xep va tim kiem                          \n");
    printf("                    [4] hien thi danh sach                           \n");
    printf("                    [5] luu va thoat                                 \n");
    printf(" --------------------------------------------------------------------\n");
    printf("                      Nhap: ");
}

void display_1_0() {
    display_main();

    printf("\n\n");
    printf("                   danh sach da dat gioi han!                        \n");
    printf("\n\n");
    system("pause");
}

void display_1_1() {
    display_main();
    
    printf("\n\n");
    printf("                       nhap thanh cong!                              \n");
    printf("\n\n");
    system("pause");
}

void display_2_0() {
    display_main();

    printf("\n\n");
    printf("                          nhap sai!                                  \n");
    printf("\n\n");
    system("pause");
}

void display_2_1() {
    display_main();
    
    printf("\n\n");
    printf("                       xoa thanh cong!                               \n");
    printf("\n\n");
    system("pause");
}

void display_3() {
    display_main();
    
    printf("           [1] tim kiem theo chu cai dau tien cua ten                \n");
    printf(" --------------------------------------------------------------------\n");
    printf("                      Nhap: ");
}

void display_4() {
    display_main();

    printf("\n\n");
    printf("              khong co sinh vien nao trong danh sach!                \n");
    printf("\n\n");
    system("pause");
}

void input(sv arr[], int cnt[]) {
    FILE *f1 = fopen("input.txt", "r");

    if(f1 == NULL) {
        return;
    }

    while(fscanf(f1, " %[^\n] %s %s %f", all_in(arr, cnt[0])) != EOF) {
        cnt[0]++;
    }

    fclose(f1);
}

void output(sv arr[], int cnt[]) {
    if(cnt[0] == 0) {
        display_4();
        return;
    }

    display_main();

    printf("| %-5s | %-23s | %-10s | %-13s | %-3s |\n", "STT", "Ho ten dem", "Ten", "Lop", "GPA");
    printf(" --------------------------------------------------------------------\n");

    for(int i = 0; i < cnt[0]; i++) {
        printf("| %-5d | %-23s | %-10s | %-13s | %-3.1f |\n", i + 1, all_out(arr, i));
    }

    printf(" --------------------------------------------------------------------\n");
    printf("\n");
    system("pause");
}

void save(sv arr[], int cnt[]) {
    FILE *f2 = fopen("input.txt", "w");

    for(int i = 0; i < cnt[0]; i++) {
        fprintf(f2, "%s\n%s\n%s\n%.1f\n", all_out(arr, i));
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
    
    printf("             Nhap ho ten dem: ");
    fgets(arr[i].ho, 30, stdin);
    j = strlen(arr[i].ho);
    arr[i].ho[j - 1] = '\0';
    
    printf("             Nhap ten: ");
    fgets(arr[i].ten, 10, stdin);
    j = strlen(arr[i].ten);
    arr[i].ten[j - 1] = '\0';
    
    printf("             Nhap lop: ");
    fgets(arr[i].lop, 20, stdin);
    j = strlen(arr[i].lop);
    arr[i].lop[j - 1] = '\0';
    
    printf("             Nhap GPA: ");
    scanf("%f", &arr[i].gpa);
    
    cnt[0]++;
    
    display_1_1();
}

void pop(sv arr[], int cnt[]) {
    if(cnt[0] == 0) {
        display_4();
        return;
    }

    int vi_tri;

    display_main();
    printf("\n");

    printf("             Nhap STT sinh vien: ");
    scanf("%d", &vi_tri);

    vi_tri--;

    if(vi_tri < 0 || vi_tri >= cnt[0]) {
        display_2_0();
        return;
    }

    int m = cnt[0] - 1;
    
    for(int i = vi_tri; i < m; i++) {
        arr[i] = arr[i + 1];
    }

    cnt[0]--;

    display_2_1();
}

void sort_and_search(sv arr[], int cnt[]) {
    if(cnt[0] == 0) {
        display_4();
        return;
    }
    
    while(true) {
        display_3();
        
        int key;
        scanf("%d", &key);
        
        getchar();
        
        if(key == 1) {
            sort(arr, cnt);
            break;
        }
    }
}

void sort(sv arr[], int cnt[]) {
    for(int i = 0; i < cnt[0] - 1; i++) {
        int pos = i;
        
        for(int j = i + 1; j < cnt[0]; j++) {
            if(cmp_1(arr[pos], arr[j])) {
                pos = j;
            }
        }
        
        swap(arr, i, pos);
    }
}
