#include<iostream>
using namespace std;
int main() {
	int n, m, array[100][100];
	cin >> n;
	cin >> m;
	int tmp = 0;
	int counter;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			cin >> array[i][j];
		}
	} 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tmp = tmp + array[i][j];
			counter = tmp / (n * m);
			if (array[i][j] < counter) {
				array[i][j] = 0;
			}
			else {
				array[i][j] = 255;
			}
			cout << array[i][j] << " ";
		}
		
		cout << endl;
	}
}
