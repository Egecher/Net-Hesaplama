#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	string isim, soyisim;
	int dogru, yanlis, exit;
	double net;

	cout << "Ad�n�z� giriniz: ";
	cin >> isim;
	cout << "Soyad�n�z� giriniz: ";
	cin >> soyisim;

	cout << "Merhaba " << isim << " " << soyisim << " net hesaplama program�na ho�geldin!\n\n";
	cout << "Do�ru say�n�z� giriniz: ";
	cin >> dogru;
	cout << "Yanl�� say�n�z� giriniz: ";
	cin >> yanlis;

	net = dogru + (yanlis * -0.25);
	cout << "Say�n " << isim << " " << soyisim << " netiniz " << net << " dir.\n\n";

	cout << "Programdan ��k�� yapmak i�in herhangi bi harfe bas�p enterlay�n...";
	cin >> exit;

	return 0;
}