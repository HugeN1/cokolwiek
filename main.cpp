
#include <iostream>

using namespace std;

int x;
int y;
int w;

int main()
{
    cout << "Hello World!\n";
	cin >> x;
	cin >> y;
	x = x + y;
	cout << x <<endl;
	y = x - y;
	cout << y << endl;
	w = x * y;
	cout << "wynik mnożenia: " << w;
}