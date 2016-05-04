#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void sort (int *a, int l, int r)
{
	if (l > r){
		return;
	}
	int i, j;
	i = l;
	j = r;
	int key = a[l];
	while (i < j){

		while (i < j && key <= a[j]){
			j--;
		}
		a[i] = a[j];
		while (i < j && key >= a[i]){
			i++;
		}
		a[j] = a[i];
	}
	a[i] = key;
	sort(a, l, i - 1);
	sort(a, i + 1, r);
}


int main()
{
	int b[1000000] = {0};
	for (int i = 0; i < 1000000; i++){
		scanf("%d", &b[i]);
	}
	sort(b, 0, 999999);
	for (int i = 0; i < 1000000; i++){
		printf("%d ", b[i]);
		if (i % 15 == 0){
			printf("\n");
		}
	}
	printf("\nThe time is : %2.lf", (double)clock()/CLOCKS_PER_SEC);	
	return 0;
}
