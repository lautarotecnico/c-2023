#include <bits/stdc++.h>
using namespace std;
vector <int> GenerarVector (vector <int> V, int n);
void MostrarVector(vector <int> V);
vector <int> SumarVector (vector <int> A, vector <int> B);

int main()
{
	vector <int> A,B,C;
	A = GenerarVector(A,10);
	B = GenerarVector(B,10);
	MostrarVector(A);
	MostrarVector(B);
	C = SumarVector(A,B);
	MostrarVector(C);
	
	return 0;
}
vector <int> GenerarVector(vector <int> V, int n)
{
	srand(time(NULL));
	int e,i;
	
	for(i=0;i<n;i++)
	{
		e=rand()%100;
		V.push_back(e);
	}
	return V;
}
void MostrarVector(vector <int> V)
{
	int i;
	for(i=0; i<V.size(); i++)
	{
		cout<<V[i]<<"/";
	}
	cout<<endl;
}
vector <int> SumarVector(vector <int> A, vector <int> B)
{
	int i;
	vector <int> C;
	int e;
	for(i=0; i<A.size(); i++)
	{
	e = A[i]+B[i];
		C.push_back(e);
	}
	return C;
}




