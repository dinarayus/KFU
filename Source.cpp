#include<iostream>
using namespace std;
int NOD(int num1, int num2){
	int i = 1;
	int counter = 0;
	if (num1 < num2) {
		while (i < num1) {
			if ((num1 % i ==0) && (num2 % i == 0)) {
				counter = i;
				i++;
			}
			else {
				i++;
			}
		}

	}
	if (num1 > num2) {
		while (i <= num2) {
			if ((num1 % i == 0) && (num2 % i == 0)) {
				counter = i;
				i++;
			}
			else {
				i++;
			}
		}

	}
	return counter;
}
int main() {
	int x, y;
	cin >> x >> y;
	cout << NOD(x, y);
}