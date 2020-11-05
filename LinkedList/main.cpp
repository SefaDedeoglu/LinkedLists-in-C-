#include <iostream>
#include "linked.h"
#include <sstream>
using namespace std;
/*
@author Sefa Dedeoðlu
Linkedlist yapýsýný c++ da kodlamak istedim .
Ayný isim ile biri kaydedildiðinde silmek için ilk sýradaki ismi siliyor 
mesela msi 3. sýrada 5. sýraya yeni bir msi eklediðimde msi ismini silerken 3. sýradakini siliyor.
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
