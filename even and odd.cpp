#include <iostream>
using namespace std;

int main(){
	int number;
	cin >> number;
	if (number % 2 ==0 ){
		cout << number << "Even" << endl;
	}
	else {
		cout << number << "Odd" << endl;
	}
	return 0;
}




//Geeks for Geeks
// C++ program to check
// for even or odd
/*#include <iostream>
using namespace std;

// Returns true if n is
// even, else odd
bool isEven(int n) { return (n % 2 == 0); }

// Driver code
int main()
{
    int n = 247;
    if (isEven(n) == true) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd";
    }

    return 0;
}*/