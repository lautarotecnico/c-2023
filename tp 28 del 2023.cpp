#include <bits/stdc++.h>
class CShape
{
	private:
		
		int apellido;
		int sueldobasico;
		int domicilio;
		int hijos;
		int antiguedad;
		
	public:
	
	CShape (int a, int b, int c, int d, int e);
	
	int setApellido (int apellido);
	int setSueldobasico (int salario);
	int setDomicilio (int direccion);
	int setHijos (int hijos);
	int setAntiguedad (int sueldobasico);
	
};

CShape::CShape(int a , int b , int c, int d, int e)
{
apellido = SetApellido (a);
sueldobasico = SetSueldobasico (b);
domicilio = SetDomicilio (c);
hijos = SetHijos (d);
antiguedad = SetAntiguedad (e);

}

int CShape::SetApellido(int a)
{
	
apellido = a;

return apellido;

}

int CShape::SetSueldobasico(int b)
{
	
sueldobasico = b;
return sueldobasico;

}

int CShape::SetDomicilio(int c)
{
	
domicilio = c;
return domicilio;

}

int CShape::SetHijos(int d)
{
	
hijos = d;
return hijos;

}
int CShape::setAntiguedad(int e)
{
	
	antiguedad = e;
	return antiguedad;
}
 
int main()

{
	

int wesker,30anios,$80.000,64C- WallStreet,3hijos;

CShape (apellido,antiguedad,sueldobasico,domicilio,hijos);

cout<<"Ingrese el apellido del empleado"<<endl;

cin>>wesker;

cout<<"La antiguedad del empleado es de: "<<endl;

cin>>30anios;

cout<<"El sueldobasico del empleado es de: "<<endl;

cin>>$80.000;

cout<<"El domicilio es de: "<<endl;

cin>>64C-WallStreet;

cout<<"La cantidad de sus hijos es de:"<<endl;

cin>>3hijos;

return 0;

}