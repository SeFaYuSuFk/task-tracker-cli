#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> gorevler;

void gorevEkle()
{
	string yeniGorev;
	cout << "Gorev ismi\n";
	cin.ignore();

	getline(cin, yeniGorev);

	gorevler.push_back(yeniGorev);
	cout << "Gorev basariyla eklendi.\n";


}

void gorevListele()
{
	cout << "Gorevlerimiz\n";

	if (gorevler.empty())
	{
		cout << "Liste suan bos. Lutfen yeni gorev ekleyin.\n";
	}

	else
	{
		for (int i = 0; i < gorevler.size(); i++)
		{
			cout << i + 1 << " " << gorevler[i] << endl;
		}
	}


}


int main()
{
	int secim;

	do
	{
		cout << " ==Gorev Takip Programi==\n";
		cout << " 1. Gorev Ekle\n";
		cout << " 2. Gorev Listeleme\n";
		cout << " 3. Cikis\n";
		cout << "Seciminiz:\n";
		cin >> secim;

		switch (secim)
		{
		case 1:
			gorevEkle();
			break;
		case 2:
			gorevListele();
			break;
		case 3:
			cout << "Programdan cikis yapiliyor.\n";
			break;

		default:
			cout << "Yanlis secim yaptiniz. Tekrar deneyiniz.\n";


		}


	} while (secim != 3);



	return 0;
}