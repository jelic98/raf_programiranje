#include <stdio.h>

int main() {
	int n, i, j;

	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++) {
			if(i % 3 == 0 || j % 3 == 0) {
				printf("-");
			}else {
				if(i % 3 == 1) {	
					printf("%d", i % 3 + j % 3 - 1);	
				}else {
					printf("%d", i % 3 + j % 3);	
				}
			}
		}

		printf("\n");
	}

	return 0;
}
