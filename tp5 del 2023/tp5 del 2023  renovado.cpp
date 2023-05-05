#include <bits\stdc++.h>
using namespace std;

float CalcularFahrenheit(float Celciuls)
{
	float Fahrenheit;
	Fahrenheit = Celciuls * 1.8 + 32;
	return Fahrenheit;
}

int main()
{
	float celciuls;
	
	cout<<"ingrese la cntidad de los grados Celcius : ";
	cin>>celciuls;
	
	float fahrenheit = CalcularFahrenheit(celciuls);
	
	cout<<"la cantidad ingresada de los Celcius a Fahrenjeiat es de : "<<fahrenheit<<endl;
}