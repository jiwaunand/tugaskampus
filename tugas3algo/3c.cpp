#include <stdio.h>
#define N 4

int main(){
	for(int i=1;i<=N;i++) {
		for(int j=1;j<=i;j++) {
			printf("1 ");
		}
		for(int k=0;k<=N-i;k++) {
			printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
