#include<iostream>
using namespace std;


int factorial(int num) {
	if (num == 0) {
		return 1;
	}
	return (num * factorial(num-1));
}
int sochet(int n, int k) {
	if ((k == 0) || (n == k)) {
		return 1;
	}

	return factorial(n)/ (factorial(n-k) * factorial(k));
}
int main(){
	int nn, kk;
	cin >> nn;
	cin >> kk;
	cout << sochet(nn, kk);
}
