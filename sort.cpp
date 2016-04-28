#include <iostream>
using namespace std;
void sort(int *a, int left, int right){
	if (left >= right){
		return;
	}
	int i, j;
	i = left;
	j = right;
	int key = a[i];
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
	sort(a, left, i - 1);
	sort(a, i + 1, right);
}

int main()
{
	int a[10] = {4,2,45,667,88,9,98,0,80,35};
	sort(a, 0, 9);
	for (int i = 0; i < 9; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
