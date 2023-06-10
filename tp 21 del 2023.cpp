#include <bits/stdc++.h>

using namespace std;

vector <int> GenerarVectorPrincipal(vector <int> Principal, int n){
	
	int aleatorio = 0;
	
	srand(time(NULL));
	
	for(int i = 0; i < n; i++){
		aleatorio = rand() % 30;
		Principal.push_back(aleatorio);
	}
	return Principal;
}

void MostrarVector(vector <int> A){
	for(int i = 0; i < A.size(); i++){
		cout<<A[i]<<"|";
	}
	cout<<endl;
}

void MostrarSuma(vector <int> A){
	for(int i = 0; i < A.size(); i++){
		cout<<A[i];	
		if(i != A.size() - 1){
			cout<<" + ";
		}
	}
}

vector <int> HacerSuma(vector <int> A, vector <int> B){
	
	vector <int> suma;
	int suma1 = 0, suma2 = 0;
	for(int i = 0; i < A.size(); i++){
		suma1 = suma1 + A[i];	
	}
	
	for(int i = 0; i < B.size(); i++){
		suma2 = suma2 + B[i];
	}
	
	suma = {suma1, suma2};
	
	return suma;
}

vector <int> GenerarVectorPares(vector <int> Principal){
	
	vector <int> Pares;
	
	for(int i = 0;  i < Principal.size(); i++){
		if(i % 2 != 0){
			Pares.push_back(Principal[i]);
		}
	}
	
	return Pares;
}

vector <int> GenerarVectorImpares(vector <int> Principal){
	
	vector <int> Impares;
	
	for(int i = 0; i < Principal.size(); i++){

		if(i % 2 == 0){
			Impares.push_back(Principal[i]);
		}
	}
	
	return Impares;
}

int main(){
	
	vector <int> Principal, Pares, Impares, suma;
	int n;
	
	cout<<"ingresar la longitud del vector principal: ";
	cin>>n;
	
	Principal = GenerarVectorPrincipal(Principal, n);
	
	MostrarVector(Principal);
	
	Pares = GenerarVectorPares(Principal);
	
	Impares = GenerarVectorImpares(Principal);
	
	suma = HacerSuma(Pares, Impares);
	
	cout<<"la suma de los vectores es: ";
	MostrarVector(suma);
	
	cout<<endl<<"por que ";
	MostrarSuma(Pares);
	cout<<" = "<<suma[0];
	
	cout<<" y ";
	MostrarSuma(Impares);
	cout<<" = "<<suma[1]<<endl;
	
	return 0;
}