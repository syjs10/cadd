#include <iostream>

using namespace std;

void sort(int *a, int left, int right){
	if(left < right){
		int i = left;
		int j = right;
		int key = a[i];
		while (i < j){
			while (i < j && key <= a[j]){
				j--;
			}
			a[i] = a[j];
			while (i < j && key >=a[i]){
				i++;
			}
			a[j] = a[i];
		}
		a[i] = key;
		sort(a, left, i - 1);
		sort(a, i + 1, right);
	}
}
int main()
{
	int a[10] = {1, 23, 4, 5, 5, 8, 9, 7, 90, 0};
	sort(a, 0, 9);
	for (int i = 0; i < 10; i++){
		cout << a[i] << " ";
	}	
	cout << endl;
	return 0;
}
