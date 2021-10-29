#include <iostream>

using namespace std;

int main(){
	int matriks1[10][10], matriks2[10][10], hasil[10][10];
	int i, j, k, m, n, p, q, jumlah = 0;
	cout<<"Masukkan Jumlah Baris Matriks Pertama = "; cin>>m;
	cout<<"Masukkan Jumlah Kolom Matriks Pertama = "; cin>>n;
	
	cout<<"Masukkan Jumlah Baris Matriks Kedua = "; cin>>p;
	cout<<"Masukkan Jumlah Kolom Matriks Kedua = "; cin>>q;
	
	if(n != p){
		cout<<"Matriks Tidak Dapat Dikalikan Satu Sama Lain.\n";
	}else{
		cout<<"Masukkan Elemen Matriks Pertama = \n";
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				cin>>matriks1[i][j];
			}
		}
		cout<<"Masukkan Elemen Matriks Kedua = \n";
		for(i = 0; i < p; i++){
			for(j = 0; j < q; j++){
				cin>>matriks2[i][j];
			}
		}
		
		for(i = 0; i < m; i++){
			for(j = 0; i < p; j++){
				for(k = 0; i < q; k++){
					jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
				}
				hasil[i][j] = jumlah;
				jumlah = 0;
			}
		}
		cout<<"Hasil Perkalian Matriks = \n";
			for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				cout<<hasil[i][j] <<"\t";
			}
			cout<<"\n";
		}
		return 0;
	}
}
