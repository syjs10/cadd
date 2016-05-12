#include <iostream>

using namespace std;

void sort (int *a, int l, int r){
	if (l >= r){
		return;
	}
	int i = l;
	int j = r;
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

int main ()
{
	int a[10] = {1,34,56,768,9,8,4,0,9,3};
	sort (a, 0, 9);
	for (int i = 0; i < 10; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
