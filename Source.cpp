#include <iostream>

using namespace std;

int Fibonacci(int i)

{
	
	if (i < 1) return 0;
	

	if (i == 1) return 1;
	
	return Fibonacci(i - 1) + Fibonacci(i - 2);

}

int main()

{
	int n;
	cin >> n;
	int i = 0;
	int b, a;

	while (i < 100000000000 )

	{
		i++;
		if ((Fibonacci(i) < n) && (Fibonacci(i + 1) > n)) {
			break;
		}

	}

	if ((n - Fibonacci(i)) >= (Fibonacci(i+1) - n)) {
		cout << Fibonacci(i + 1) << endl;
	}
	else {
		cout << Fibonacci(i);
	}
}