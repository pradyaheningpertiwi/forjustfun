#include <iostream>
using namespace std;

int nilaiterbesar(int angka[],int n){
int terbesar;
		terbesar =0;
	for(int i=0; i <n; i++){
		 if(terbesar<angka[i]){
		 terbesar=angka[i];
		 }
	}
	return terbesar;
}

int main(){
	int n;
	cin>>n;
	int angka[n];
	for(int i=0;i<n;i++){
		cin>>angka[i];
	}
	cout<<nilaiterbesar(angka,n);
}
