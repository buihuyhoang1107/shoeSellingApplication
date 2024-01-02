#include<iostream>
#include<fstream>
#include<string>
#include"LISTITEM.h"
#include"ITEM.h"
using namespace std;
//Xuat ra ma hinh cac san pham


int main()
{
	/*showDescribe();
	int chose, number;
	char check;
	cout << endl;
	do
	{
		cout << "Hay chon giay ban muon them vao gio hang (0 de ket thuc): ";
		cin >> chose;
		switch (chose)
		{
		case 1:
		{
			cout << "Ban chon Giay-Nike" << endl;
			cout << "Nhap so luong muon mua: ";
			cin >> number;
			break;
		}
		case 2:
		{
			cout << "Chon 2" << endl;

			break;
		}
		case 3:
		{
			cout << "Chon 3" << endl;

			break;
		}
		case 4:
		{
			cout << "Chon 4" << endl;
			break;
		}
		default:
			cout << "Ok bay gio chung ta se vao gio hang" << endl;
			break;
		}

	} while (chose > 0 && chose < 5);*/

	LISTITEM ls;
	string a = "102";
	ls.check(a);
	system("pause");
	return 0;
}

