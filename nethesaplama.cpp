#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	string isim, soyisim;
	int dogru, yanlis, exit;
	double net;

	cout << "Adýnýzý giriniz: ";
	cin >> isim;
	cout << "Soyadýnýzý giriniz: ";
	cin >> soyisim;

	cout << "Merhaba " << isim << " " << soyisim << " net hesaplama programýna hoþgeldin!\n\n";
	cout << "Doðru sayýnýzý giriniz: ";
	cin >> dogru;
	cout << "Yanlýþ sayýnýzý giriniz: ";
	cin >> yanlis;

	net = dogru + (yanlis * -0.25);
	cout << "Sayýn " << isim << " " << soyisim << " netiniz " << net << " dir.\n\n";

	cout << "Programdan çýkýþ yapmak için herhangi bi harfe basýp enterlayýn...";
	cin >> exit;

	return 0;
}