#include<iostream>
using namespace std;
int Stepan(float num, float stepen) {
	float i = 1;
	while (stepen >0) {
		i *= num;
		stepen--;
	}
	return i;
}
int main() {
	float numb;
	float stepka;
	cin >> numb >> stepka;
	cout << Stepan(numb, stepka);
}