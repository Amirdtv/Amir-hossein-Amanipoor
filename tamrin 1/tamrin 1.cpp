#include <iostream>
using namespace std;
int main()
{
	int x[10][10], i, j, input, cont = 0;

	cout << "100 adad vared konin"<<endl;
	//age enghadr bikari

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			cin >> x[j][i];

	cout << "adad mored nazar ra vared konin" << endl;
	cin >> input;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			if (x[j][i] == input)
				cont++;
	cout << "tedad adad moshabeh = " << cont;
}