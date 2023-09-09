#include<iostream>
int main() {
	int a, b, v, c;
	a = b = 1;
	std::cin >> c;
	v = 1;

	
		for (int i = 2;i !=c; ++i) {
			v = a + b;
			a = b;
			b = v;
		}
	
	std::cout << v;
}