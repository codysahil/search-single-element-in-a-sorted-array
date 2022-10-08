#include<iostream>
using namespace std;

void findele(int arr[], int n) {
	int ele = 0;
	for (int i = 0; i < n; i++) {
		ele = ele ^ arr[i];
	}
	cout<<ele;
}



int main() {
	int arr[] = { 11,22,22,34,34,57,57 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findele(arr, n);
	return 0;
}