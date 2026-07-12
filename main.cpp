#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector <string> gorevler;

vector <bool> durumlar;

void verileriYukle()
{
	ifstream dosya("C:\\Kullanıcılar\\sefay\\gorevler.txt");

	bool durum = false;
	string gorevAdi;

	while (dosya >> durum)
	{
		dosya.ignore();
		getline(dosya, gorevAdi);

		durumlar.push_back(durum);
		gorevler.push_back(gorevAdi);
	}

	dosya.close();
}

void verileriKaydet()
{
	ofstream dosya("C:\\Kullanıcılar\\sefay\\gorevler.txt");

	for (int i = 0; i < gorevler.size(); i++)
	{
		dosya << durumlar[i] << gorevler[i] << endl;
	}


	dosya.close();

}



void gorevEkle()
{
	string yeniGorev;
	cout << "Gorev ismi:\n";
	cin.ignore();

	getline(cin, yeniGorev);

	gorevler.push_back(yeniGorev);
	durumlar.push_back(false);
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

			string kutucuk;

			if (durumlar[i] == true)
			{
				kutucuk = "[X]";
			}

			else
			{
				kutucuk = "[]";
			}



			cout << i + 1 << kutucuk << gorevler[i] << endl;




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
		gorevler.erase(gorevler.begin() + (silinecekNo - 1));
		durumlar.erase(durumlar.begin() + (silinecekNo - 1));
		cout << "Gorev silindi.\n";
	}

	else
		cout << "Yanlis numara girdiniz.\n";

}

void gorevTamamla()
{
	if (gorevler.empty())
	{
		cout << "Listede gorev yok.\n";
		return;
	}

	gorevListele();

	int secilenNo;
	cout << "Tamamlanacak gorevin numarasini secin.\n";
	cin >> secilenNo;

	if (secilenNo > 0 && secilenNo <= gorevler.size())
	{
		durumlar[secilenNo - 1] = true;
		cout << "Gorev tamamlanmis olarak isaretlendi.\n";
	}

	else
		cout << "Yanlis numara girdiniz.\n";
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
		cout << " 4. Gorev Tamamla.\n";
		cout << " 5. Cikis\n";
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
			gorevTamamla();
			break;
		case 5:
			verileriKaydet();
			cout << "Veriler kaydedildi. Programdan cikis yapiliyor.\n";
			break;
		default:
			cout << "Yanlis secim yaptiniz. Tekrar deneyiniz.\n";


		}


	} while (secim != 5);



	return 0;
}