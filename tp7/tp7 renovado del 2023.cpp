#include<bits/stdc++.h>
#include<string>
using namespace std;

int ContarLetraA(string f){

int cont=0;
for(int i=0;i<f.size();i++)
{
	if(f[i]=='a'||f[i]=='A'||f[i]=='e'||f[i]=='E'||f[i]=='i'||f[i]=='I'||f[i]=='o'||f[i]=='O'||f[i]=='u'||f[i]=='U')
	{
		cont++;
	}
}
return cont;
}
int main()
{
	string f;
	int v;
	cout<<"ingresar una frase"<<endl;
	getline(cin,f);
	v=ContarLetraA(f);
	cout<<"la frase tenia" <<v<< "vocales" <<endl;
	
	return 0;
}

