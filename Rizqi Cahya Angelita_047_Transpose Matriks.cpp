#include <iostream>

using namespace std;

int main(){
	int i,j,m,n, matriks [10][10], transpose[10][10];
	
	cout<<"Masukkan Jumlah Baris Matriks = "; cin>>m;
	cout<<"Masukkan Jumlah Kolom Matriks = "; cin>>n;
	
	cout<<"Masukkan Elemen Matriks\n";
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			cin>>matriks[i][j];
		}
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			transpose[j][i]>>matriks[i][j];
		}
	}
	cout<<"Hasil Transpose Matriks\n";
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			cout<<transpose[i][j] <<"\t";
		}
		cout<<"\n";
	}
}
