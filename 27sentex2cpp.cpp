#include<iostream>
using namespace std;
int DigitsBack(int num) {
	int i = 1;
	int n = 1;
	int k = num;
	int j = 0;
	int counter = 0;
	while (k != 0) {
		k = k / 10;
		j++;
	}
	while (i < j) {
		n = n * 10;
		i++;
	}
	while (num != 0) {
		counter = counter + (num % 10) * n;
		n = n / 10;
		num = num / 10;
	}
	return counter;
}
int main(){
	int numb;
	cin >> numb;
	cout << DigitsBack(numb);

}