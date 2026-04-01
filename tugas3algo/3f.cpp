#include <stdio.h>
#define N 4

int main(){
	for(int i=1;i<=N;i++) {
		for(int j=1;j<=N;j++) {
			if(j == i) {
				printf("1 ");
			} else {
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
