#include <bits/stdc++.h>
using namespace std;

void MostrarVector(vector <int> V){
	for(int i = 0; i < V.size(); i++){
		cout<<V[i]<<"/";
	}
	cout<<endl;
}

vector <int> GenerarVector(vector <int> V, int n){
	
	int aleatorio = 0;
	
	srand(time(NULL));
	
	for(int i = 0; i < n; i++){
		aleatorio = rand()%150;
		V.push_back(aleatorio);
	}
	
	return V;
}

int ContarMultiplosDeDos(vector <int> V){
	
	int cont = 0;
	
	for(int i = 0; i < V.size(); i++){
		if(V[i] % 2 == 0){
			cont++;
		}
	}
	return cont;
}

int main(){
	
	vector <int> V;
	
	int n = 10;
	
	V = GenerarVector(V, n);
	
	MostrarVector(V);
	
	cout<<endl<<"la cantidad de numeros pares del vector son: "<<ContarMultiplosDeDos(V);
	
	
	
	return 0;
}