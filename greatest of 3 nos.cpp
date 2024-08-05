#include <iostream>
using namespace std;

int main() {
	int a , b, c;
	a=10;
	b=20;
	c=30;
	if (a>=b && a >=c){
		cout << a << " A is greater" << endl;
	}
	else if (b>=a && b>=c){
		cout << b << " B is greater" << endl;
	}
	else {
		cout << c << " C is greater " << endl;
	}
	return 0;
}