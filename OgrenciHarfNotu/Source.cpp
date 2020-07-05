#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	double odevNot = 0.0, vizeNot = 0.0, finalNot = 0.0, devamsizlikDurum = 0.0, ortalama = 0.0;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << ". ��rencinin bilgilerini giriniz.\n";
		cout << "�dev notunu giriniz (0-100): ";
		a: cin >> odevNot;
		if (odevNot < 0.0 || odevNot > 100.0) {
			cout << "[!] 0-100 s�n�rlar� aras�nda �dev not de�eri giriniz: "; 
			goto a;
		}
		cout << "Vize s�nav notunu giriniz (0-100): ";
		b: cin >> vizeNot;
		if (vizeNot < 0.0 || vizeNot > 100.0) {
			cout << "[!] 0-100 s�n�rlar� aras�nda vize not de�eri giriniz: ";
			goto b;
		}
		cout << "Final s�nav notunu giriniz (0-100): ";
		c: cin >> finalNot;
		if (finalNot < 0.0 || finalNot > 100.0) {
			cout << "[!] 0-100 s�n�rlar� aras�nda final not de�eri giriniz: ";
			goto c;
		}
		cout << "Devam y�zdesini giriniz (0-100): ";
		d: cin >> devamsizlikDurum;
		if (devamsizlikDurum < 0.0 || devamsizlikDurum > 100.0) {
			cout << "[!] 0-100 s�n�rlar� aras�nda devam y�zde de�eri giriniz: ";
			goto d;
		}
		if (devamsizlikDurum < 80.0)
		{
			cout << i << ". ��rencinin notu: " << "D\n\n";
		}
		else if (finalNot < 50.0)
		{
			cout << i << ". ��rencinin notu: " << "FF\n\n";
		}
		else
		{
			double ortalama = ((odevNot * 20) / 100) + ((vizeNot * 30) / 100) + ((finalNot * 50) / 100);
			if(ortalama >= 89.5)
				cout << i << ". ��rencinin notu: " << "AA";
			else if(ortalama >= 79.5)
				cout << i << ". ��rencinin notu: " << "BA";
			else if(ortalama >= 74.5)
				cout << i << ". ��rencinin notu: " << "BB";
			else if(ortalama >= 69.5)
				cout << i << ". ��rencinin notu: " << "CB";
			else if(ortalama >= 59.5)
				cout << i << ". ��rencinin notu: " << "CC";
			else if(ortalama >= 54.5)
				cout << i << ". ��rencinin notu: " << "DC";
			else if(ortalama >= 49.5)
				cout << i << ". ��rencinin notu: " << "DD";
			else if(ortalama >= 44.5)
				cout << i << ". ��rencinin notu: " << "FD";
			else
				cout << i << ". ��rencinin notu: " << "FF";
			cout << " (ortalama: " << ortalama << ")";
			cout << "\n\n";
		}
	}
	return 0;
}