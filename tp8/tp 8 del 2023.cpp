#include <bits/stdc++.h>
#include <string>
using namespace std;
int sumarValorLetras(string frase)
{
	int cont=0;
	for(int i=0;i<frase.size(); i++)
	{
		if(frase[i]=='a'||frase[i]=='e')
		{
			cont++;
		}
		else if(frase[i]=='o'||frase[i]=='s')
		{
			cont=cont+2;
		}
		else if(frase[i]=='d'||frase[i]=='i'||frase[i]=='n'||frase[i]=='r')
		{
			cont=cont+3;
		}
		else if(frase[i]=='c'||frase[i]=='l'||frase[i]=='t'||frase[i]=='u')
		{
			cont=cont+4;
		}
		else if(frase[i]=='m'||frase[i]=='p')
		{
			cont=cont+5;
		}
		else if(frase[i]=='b'||frase[i]=='f'||frase[i]=='g'||frase[i]=='h'||frase[i]=='j'||frase[i]=='q'||frase[i]=='v'||frase[i]=='x'||frase[i]=='y'||frase[i]=='z')
		{
			cont=cont+6;
		}
		else if(frase[i]=='k'||frase[i]=='w')
		{
			cont=cont+7;
		}
	}
	return cont;	
}
int main()
{
	string frase;
	int cont;
	
	cout<<"ingrese la frase"<<endl;
	
	getline(cin,frase);
	
	cont=sumarValorLetras(frase);
	cout<<cont<<endl;
	
	return 0;
}









