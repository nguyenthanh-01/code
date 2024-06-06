#include <bits/stdc++.h>
using namespace std;

#define n (int) 1e6 + 1

void sang_nguyen_to(bool []);

int main() {
	bool arr[n] = {0};
	sang_nguyen_to(arr);
	
	int m = 0; cin >> m;
	while(m--) {
		int a = 0; cin >> a;
		int b = 0; cin >> b;
		
		if(a < 3) {
			printf("2 ");
		}
		
		a = (a%2 == 0) ? a + 1 : a;
		
		for(int i = a; i <= b; i += 2) {
			if(arr[i] == 1) {
				printf("%d ", i);
			}	
		}
		
		printf("\n");
	}
	
	return 0;
}

void sang_nguyen_to(bool arr[]) {
	arr[2] = 1;
	for(int i = 3; i < n; i += 2) {
		arr[i] = 1;
	}
	
	int tmp = sqrt(n);
	for(int i = 3; i <= tmp; i += 2) {
		if(arr[i] == 1) {
 	        for(int j = i * i; j < n; j += i) {
				arr[j] = 0;
		    }
		}
	}
}
