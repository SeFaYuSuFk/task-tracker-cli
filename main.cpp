#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> gorevler;

void gorevEkle()
{
	string yeniGorev;
	cout << "Gorev ismi:\n";
	cin.ignore();

	getline(cin, yeniGorev);

	gorevler.push_back(yeniGorev);
	cout << "Gorev eklendi.\n";



}

void gorevListele()
{
	cout << "==Gorevlerimiz==\n";

	if (gorevler.empty())
	{
		cout << "Liste suan bos. Lutfen gorev ekleyin.\n";
		return;
	}

	else
	{
		for (int i = 0; i < gorevler.size(); i++)
		{
			cout << i + 1 << gorevler[i] << endl;
		}
	}



}

void gorevSil()
{
	if (gorevler.empty())
	{
		cout << "Listede silinecek gorev yok.\n";
		return;
	}

	gorevListele();

	int silinecekNo;
	cout << "Silmek istediğiniz gorevin numarasini yaziniz.\0";
	cin >> silinecekNo;

	if (silinecekNo > 0 && silinecekNo <= gorevler.size())
	{
		gorevler.erase(gorevler.begin() + (gorevler.size() - 1));
	}

	else
		cout << "Yanlis numara girdiniz.\n";

	cout << "Gorev silindi.\n";

}




int main()
{
	int secim;

	do
	{
		cout << " ==Gorev Takip Programi==\n";
		cout << " 1. Gorev Ekle\n";
		cout << " 2. Gorev Listeleme\n";
		cout << " 3. Gorev Sil\n";
		cout << " 4. Cikis.\n";
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
			gorevSil();
			break;
		case 4:
			cout << "Programdan cikis yapiliyor.\n";
			break;

		default:
			cout << "Yanlis secim yaptiniz. Tekrar deneyiniz.\n";


		}


	} while (secim != 4);



	return 0;
}