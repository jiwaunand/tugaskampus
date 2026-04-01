#include <stdio.h>

int main(){
	int n;
	int ans = 0;
	printf("Jumlah n: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		if(i % 2 == 0) {
			continue;
		}
		ans++;
	}
	printf("Jumlah bilangan ganjil: %d", ans);
	return 0;
}
