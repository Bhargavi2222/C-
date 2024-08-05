#include <iostream>
using namespace std;

int main (){
	char ch = 'e';
	if (isalpha(ch)){
		if (ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
			cout << ch << " is a Vowel "<< endl;
    	}
	    else {
	    	cout << ch <<  " is a consonant " << endl;
		}
		
	}
	else {
		cout<< ch << " is not a alphabet" << endl;
	}
	return 0;
}