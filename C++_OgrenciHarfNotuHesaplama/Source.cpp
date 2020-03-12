#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	double odevNot = 0.0, vizeNot = 0.0, finalNot = 0.0, devamsizlikDurum = 0.0, ortalama = 0.0;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << ". öðrencinin bilgilerini giriniz.\n";
		cout << "Ödev notunu giriniz (0-100): ";
		a: cin >> odevNot;
		if (odevNot < 0.0 || odevNot > 100.0) {
			cout << "[!] 0-100 sýnýrlarý arasýnda ödev not deðeri giriniz: "; 
			goto a;
		}
		cout << "Vize sýnav notunu giriniz (0-100): ";
		b: cin >> vizeNot;
		if (vizeNot < 0.0 || vizeNot > 100.0) {
			cout << "[!] 0-100 sýnýrlarý arasýnda vize not deðeri giriniz: ";
			goto b;
		}
		cout << "Final sýnav notunu giriniz (0-100): ";
		c: cin >> finalNot;
		if (finalNot < 0.0 || finalNot > 100.0) {
			cout << "[!] 0-100 sýnýrlarý arasýnda final not deðeri giriniz: ";
			goto c;
		}
		cout << "Devam yüzdesini giriniz (0-100): ";
		d: cin >> devamsizlikDurum;
		if (devamsizlikDurum < 0.0 || devamsizlikDurum > 100.0) {
			cout << "[!] 0-100 sýnýrlarý arasýnda devam yüzde deðeri giriniz: ";
			goto d;
		}
		if (devamsizlikDurum < 80.0)
		{
			cout << i << ". öðrencinin notu: " << "D\n\n";
		}
		else if (finalNot < 50.0)
		{
			cout << i << ". öðrencinin notu: " << "FF\n\n";
		}
		else
		{
			double ortalama = ((odevNot * 20) / 100) + ((vizeNot * 30) / 100) + ((finalNot * 50) / 100);
			if(ortalama >= 89.5)
				cout << i << ". öðrencinin notu: " << "AA";
			else if(ortalama >= 79.5)
				cout << i << ". öðrencinin notu: " << "BA";
			else if(ortalama >= 74.5)
				cout << i << ". öðrencinin notu: " << "BB";
			else if(ortalama >= 69.5)
				cout << i << ". öðrencinin notu: " << "CB";
			else if(ortalama >= 59.5)
				cout << i << ". öðrencinin notu: " << "CC";
			else if(ortalama >= 54.5)
				cout << i << ". öðrencinin notu: " << "DC";
			else if(ortalama >= 49.5)
				cout << i << ". öðrencinin notu: " << "DD";
			else if(ortalama >= 44.5)
				cout << i << ". öðrencinin notu: " << "FD";
			else
				cout << i << ". öðrencinin notu: " << "FF";
			cout << " (ortalama: " << ortalama << ")";
			cout << "\n\n";
		}
	}
	return 0;
}