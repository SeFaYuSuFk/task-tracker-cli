#include <iostream>

using namespace std;

int main()
{
	int secim;

	do 
	{
		cout << "== Gorev Takip Programi ==\n";
		cout << "Gorev Ekleme.\n";
		cout << "Gorev Listeleme.\n";
		cout << "Programdan cikis yapiliyor...\n";
		cout << "Lutfen bir secim yapiniz:\n";
		cin >> secim;

		switch (secim)
		{
		case 1:
			cout << "Gorev ekleme fonksiyonları."; //push_back atarak görev eklicez vector kütüphanesini dahil edip.
				break;
		case 2:
			cout << "Gorev listeleme fonksiyonu. ";
				break;
		case 3: 
			cout << "Programdan cikis yapiliyor.";
			break;
		
		default:
			cout << "Yanlis secim yaptınız basa donuluyor."


		}


	} while (secim != 3);

	return 0;

}