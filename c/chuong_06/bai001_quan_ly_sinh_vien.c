#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define n (int) 1e5
#define all_in(a, i) a[i].ten, a[i].lop, &a[i].gpa, &a[i].u
#define all_out(a, i) a[i].ten, a[i].lop, a[i].gpa, a[i].u

typedef struct {char ten[30]; char lop[10]; float gpa; int u;} sv;

static inline void swap(sv arr[], int i, int pos) {sv val = arr[i]; arr[i] = arr[pos]; arr[pos] = val;}
static inline bool cmp(sv i, sv j) {return i.ten[i.u] > j.ten[j.u];}

void display_main();
void display_0();
void display_1_0();
void display_1_1();
void display_2_0();
void display_2_1();
void display_3();
void display_4();

void input(sv [], int []);
void output(sv [], int, int);
void save(sv [], int []);
void push(sv [], int []);
void pop(sv [], int []);

void sort_and_search(sv [], int []);
void sort(sv [], int []);
void search(sv [], int, int);
int lower_bould(sv [], int, int, char);
int upper_bould(sv [], int, int, char);

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
            while(true) {
                push(arr, cnt);
                
                char x;

                display_main();
                printf("\n");
                
                printf("                       Tiep tuc (y/n): ");
                scanf(" %c", &x);
                
                getchar();
                
                if(x == 'n') {
                    break;
                }
            }
        }

        else if(key == 2) {
            pop(arr, cnt);
        }

        else if(key == 3) {
            sort_and_search(arr, cnt);
        }

        else if(key == 4) {
            output(arr, 0, cnt[0] - 1);
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
    printf("                Chuong trinh quan ly sinh vien                \n");
    printf(" -------------------------------------------------------------\n");
}

void display_0() {
    display_main();

    printf("                     [1] them sinh vien                       \n");
    printf("                     [2] xoa sinh vien                        \n");
    printf("                     [3] sap xep va tim kiem                  \n");
    printf("                     [4] hien thi danh sach                   \n");
    printf("                     [5] luu va thoat                         \n");
    printf(" -------------------------------------------------------------\n");
    printf("                          Nhap: ");
}

void display_1_0() {
    display_main();

    printf("\n\n");
    printf("                  danh sach da dat gioi han!                  \n");
    printf("\n\n");
    system("pause");
}

void display_1_1() {
    display_main();

    printf("\n\n");
    printf("                       nhap thanh cong!                       \n");
    printf("\n\n");
    system("pause");
}

void display_2_0() {
    display_main();

    printf("\n\n");
    printf("                          nhap sai!                           \n");
    printf("\n\n");
    system("pause");
}

void display_2_1() {
    display_main();

    printf("\n\n");
    printf("                       xoa thanh cong!                        \n");
    printf("\n\n");
    system("pause");
}

void display_3() {
    display_main();

    printf("                     [1] theo bang chu cai                    \n");
    printf("                     [2] theo ho va ten                       \n");
    printf("                     [5] quay lai                             \n");
    printf(" -------------------------------------------------------------\n");
    printf("                          Nhap: ");
}

void display_4() {
    display_main();

    printf("\n\n");
    printf("           khong co sinh vien nao trong danh sach!           \n");
    printf("\n\n");
    system("pause");
}

void input(sv arr[], int cnt[]) {
    FILE *f1 = fopen("input.txt", "r");

    if(f1 == NULL) {
        return;
    }

    while(fscanf(f1, " %[^\n] %s %f %d", all_in(arr, cnt[0])) != EOF) {
        cnt[0]++;
    }

    fclose(f1);
}

void output(sv arr[], int l, int r) {
    if(r + 1 == 0) {
        display_4();
        return;
    }

    display_main();

    printf("| %-5s | %-30s | %-10s | %-5s |\n", "STT", "Ho va ten", "Lop", "GPA");
    printf(" -------------------------------------------------------------\n");

    for(int i = l; i <= r; i++) {
        printf("| %-5d | %-30s | %-10s | %-5.1f |\n", i + 1, arr[i].ten, arr[i].lop, arr[i].gpa);
    }

    printf(" -------------------------------------------------------------\n");
    printf("\n");
    system("pause");
}

void save(sv arr[], int cnt[]) {
    FILE *f2 = fopen("input.txt", "w");

    for(int i = 0; i < cnt[0]; i++) {
        fprintf(f2, "%s\n%s\n%.1f\n%d\n", all_out(arr, i));
    }

    fclose(f2);
}

void push(sv arr[], int cnt[]) {
    if(cnt[0] == n) {
        display_1_0();
        return;
    }

    int i = cnt[0];

    display_main();
    printf("\n");

    printf("           Nhap ho va ten: ");
    fgets(arr[i].ten, 30, stdin);
    int j = strlen(arr[i].ten);
    arr[i].ten[--j] = '\0';

    printf("           Nhap lop: ");
    fgets(arr[i].lop, 10, stdin);
    int k = strlen(arr[i].lop);
    arr[i].lop[--k] = '\0';

    printf("           Nhap GPA: ");
    scanf("%f", &arr[i].gpa);
    
    // nhap u
    int m = 0;
    
    for(int k = j - 1; k != 0; k--) {
        if(arr[i].ten[k] == ' ') {
            break;
        }
        
        m++;
    }
    
    arr[i].u = j - m;

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

    printf("           Nhap STT sinh vien: ");
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
            
            while(true) {
                search(arr, 0, cnt[0] - 1);
                
                char x;

                display_main();
                printf("\n");
                
                printf("                       Tiep tuc (y/n): ");
                scanf(" %c", &x);
                
                if(x == 'n') {
                    break;
                }
            }
        }
        
        else if(key == 2) {
            break;
        }
        
        else if(key == 5) {
            break;
        }
        
        else {
            display_2_0();
        }
    }
}

void sort(sv arr[], int cnt[]) {
    for(int i = 0; i < cnt[0] - 1; i++) {
        int pos = i;

        for(int j = i + 1; j < cnt[0]; j++) {
            if(cmp(arr[pos], arr[j])) {
                pos = j;
            }
        }

        swap(arr, i, pos);
    }
}

void search(sv arr[], int l, int r) {
    char x;

    display_main();
    printf("\n");

    printf("           Nhap ky tu can tim: ");
    scanf(" %c", &x);

    int lb = lower_bould(arr, l, r, x);

    if(lb < 0) {
        display_4();
    }
    else {
        int ub = upper_bould(arr, lb, r, x);
        output(arr, lb, ub);
    }
}

int lower_bould(sv arr[], int l, int r, char x) {
    int pos = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;
        int i = arr[m].u;

        if(arr[m].ten[i] == x) {
            pos = m;
            r = m - 1;
        }
        else if(arr[m].ten[i] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}

int upper_bould(sv arr[], int l, int r, char x) {
    int pos = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;
        int i = arr[m].u;

        if(arr[m].ten[i] == x) {
            pos = m;
            l = m + 1;
        }
        else if(arr[m].ten[i] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}
