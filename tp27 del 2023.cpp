#include <bits/stdc++.h>
class CShape
{
	private:
		int nombre;
		int ano_ingreso;
		int salario;
		int direccion;
		
	public:
	
	CShape (int a, int b, int c, int d );
	
	int setNombre (int nombre);
	int setAno_ingreso (int ano_ingreso);
	int setSalario (int salario);
	int setDireccion (int direccion);	
	
};

CShape::CShape(int a , int b , int c, int d)
{
	
nombre = SetNombre (a);
ano_ingresado = SetAno_ingresado (b);
salario = SetSalario (c);
direccion = SetDireccion (d);

}

int CShape::SetNombre(int a)
{
	
nombre = a;

return nombre;

}

int CShape::SetAno_ingresado(int b)
{
	
ano_ingresado = b;
return ano_ingresado;

}

int CShape::SetSalario(int c)
{
	
salario = c;
return salario;

}

int CShape::SetDireccion(int d)
{
	
direccion = d;
return direccion;

}
int main()

{
	

int robert,2014,$40.000,64C- WallStreet;

CShape (nombre,ano_ingresado,salario,direccion);

cout<<"Ingrese el nombre del empleado"<<endl;

cin>>robert;

cout<<"El ano_ingresado es: "<<endl;

cin>>2014;

cout<<"El salario es de: "<<endl;

cin>>$40.000;

cout<<"La direccion es de: "<<endl;

cin>>64C-WallStreet;

return 0;

}