/*Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Sample Input

3 12345678912345 a 334.23 14049.30493
Sample Output

3
12345678912345
a
334.230
14049.304930000 */

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>> a >> b >> c >> d>> e;
    cout << a << endl; 
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(6)<< d << endl; //ouput = 223.754 use fixed to get output = 569.256314  or 25.478965 or 8965.123456//
    cout << fixed << setprecision(9)<< e << endl;
    return 0;
}
