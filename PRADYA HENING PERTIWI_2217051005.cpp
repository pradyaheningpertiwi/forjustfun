#include <iostream>
using namespace std;

int main(){
	int angka,angka1,angka2,angka3;
	char temp,temp2;
 	cin>>angka>>angka1>>angka2>>angka3;
 	temp = (angka > angka1 ? angka : angka1 );
 	temp2 = (temp>angka2 ? temp : angka2);
 	cout<<(temp2>angka3 ? temp2 : angka3);
}
