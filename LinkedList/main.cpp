#include <iostream>
#include "linked.h"
#include <sstream>
using namespace std;
/*
@author Sefa Dedeo�lu
Linkedlist yap�s�n� c++ da kodlamak istedim .
Ayn� isim ile biri kaydedildi�inde silmek i�in ilk s�radaki ismi siliyor 
mesela msi 3. s�rada 5. s�raya yeni bir msi ekledi�imde msi ismini silerken 3. s�radakini siliyor.
*/
int main() {
	
	int cases;
	string name;
	linked *link = new linked();
	link->insert("Asus");
	link->insert("Monster");
	link->insert("MSI");
	link->insert("Acer");
	system("COLOR b");
	while(true){
	cout<<"\t**************MENU************"<<endl;
	cout<<"1.Listeyi yazdir"<<endl;
	cout<<"2.Liste uzunlugu"<<endl;
	cout<<"3.listeye ekleme"<<endl;
	cout<<"4.Listeden silme"<<endl;
	cout<<"5.Listeyi temizle"<<endl;
	cout<<"6.Sistemden cikis."<<endl;
	cin>>cases;
	switch(cases){
		case 1:
			cout<<"Liste yazdiriliyor..."<<endl;
			link->printList();
			system("pause");
			system("cls");
			break;
		case 2:
			cout<<link->Lenght()<<endl;
			system("pause");
			system("cls");
			break;
		case 3:
			while(true){
			cout<<"Yeni stringi giriniz :(cikmak icin q yazip entera basin)"<<endl;
			cin>>name;
			if(name=="q"){
				break;
			}

			link->insert(name);
	}
			system("pause");
			system("cls");
			break;
		case 4:
		while(true){
		cout<<"Silinecek string  :(cikmak icin q yazip entera basiniz)\n";
		cin>>name;
		if(name=="q"){
		break;
		}
		link->deleteNode(name);
		}
		system("pause");
		system("cls");
			break;
		case 5:
			link->Clear();
			cout<<"Liste silindi"<<endl;
			system("pause");
			system("cls");
			break;
			
		case 6:
			cout<<"Sistemden cikis icin herhangi bir tusa basiniz"<<endl;
			system("pause");
			system("cls");
			exit(-1);
			break;
		default:
			cout<<"1-6 araliginda bir deger giriniz!!"<<endl;
	}
}
	return 0;
}
