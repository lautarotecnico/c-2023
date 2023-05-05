#include<bits/stdc++.h>
using namespace std;
float CalcularSalario(int salario);
int main(){
	int salario;
	cout<<"Empresa ABC"<<endl;
	cout<<"insira seu salario:";
	cin>>salario;
	float s=CalcularSalario(salario);
	cout<<"O novo salario e:"<<s<<endl;
	return 0;
}
float CalcularSalario(int salario){
	int sal;
	if(salario<=400.00){
		cout<<"a porcentagem e:15%"<<endl;
		sal=salario+salario*0.15;
	}
	if(salario>=400.01 && salario<=800.00){
		cout<<"a porcentagem e:12%"<<endl;
		sal=salario+salario*0.12;
	}
	if(salario>=800.01 && salario<=1200.00){
		cout<<"a porcentagem e:10%"<<endl;
		sal=salario+salario*0.10;
	}
	if(salario>=1200.01 && salario<=2000.00){
		cout<<"a porcentagem e:7%"<<endl;
		sal=salario+salario*0.7;
	}
	if(salario>=2000.01){
		cout<<"a porcentagem e:4%"<<endl;
		sal=salario+salario*0.4;
	}
	return sal;
}