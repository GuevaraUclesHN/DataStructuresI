#include<iostream>

using namespace std;
int main()
{
	int a, numeroIngresado, bnumero, temp = 0;
	cout << "Ingrese Numero: ";

	cin >> numeroIngresado;
	bnumero = numeroIngresado;
	while (numeroIngresado > 0)
	{
		a = numeroIngresado % 10;
		numeroIngresado = numeroIngresado / 10;
		temp = temp * 10 + a;
	}
	if (temp == bnumero)
	{
		cout << "Palindromo";
	}
	else
	{
		cout << "No Palindromo";
	}

	system("pause");

}