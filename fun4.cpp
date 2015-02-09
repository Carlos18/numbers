#include <iostream>
using namespace std;

int main()
{
	int x,y,z,a;
	cout << "Primer numero:";
	cin >> x;
	cout << "Segundo numero:";
	cin >> y;
	z=x/y;
	a=x%y;
	cout << "Resultado:" << z << endl;
	cout << "Residuo:" << a << endl;
	return 0;
}
