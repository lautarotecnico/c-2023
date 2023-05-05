#include <iostream>
#include <string>
using namespace std;
int main()
{
	string frase;
	string vocales ="hola";
	int n =-1;
	cout<<"ingrese una frase";
	cin>>frase;
	for(int i = 0; i<=frase.length(); i++)
	{
		for(int j=0; j<=vocales.length();j++)
		if(frase[i])
		{
			n++;
		}
	}
	cout<<"la cantidad de vocales es:"<<n;
	return 0;
}