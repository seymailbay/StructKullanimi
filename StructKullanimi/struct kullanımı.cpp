#include <iostream>
using namespace std; 
struct ogrenci{
	int num;
	char ad[20];
	char soyad [20];
	double ort;
	
	
};
int main(){
	
	struct ogrenci ogr;
	cout << "ogrenci num giriniz: ";
	cin >> ogr.num;
	cout << "ogrenci adinin giriniz ";
	cin >> ogr.ad;
	cout << "ogrenci soyad giriniz: ";
	cin >> ogr.soyad;
	cout << "ogrenci ort giriniz: ";
	cin >> ogr.ort;
	
	
	return 0;
	
}
