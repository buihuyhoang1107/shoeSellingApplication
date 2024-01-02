#include "LISTITEM.h"
void LISTITEM::search(string a)
{
	ifstream inFile;
	inFile.open("listAccount.txt", ios_base::in);

	if (inFile.fail() == true)
	{
		cout << "file cua ban khong ton tai" << endl;
	}

	inFile >> this->row >> this->col;
	string** arr;
	arr = new string * [this->row];
	//Cap phat vung nho cot
	for (int i = 0; i < this->row; i++)
	{
		arr[i] = new string[this->col];
	}
	//Doc gia tri tu file
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			inFile >> arr[i][j];
		}
	}
	//Tạo một biến giá trị để lấy thông tin dòng n
	int tempI;
	int tempJ;
	for (int i = 0; i < this->row; i++)
	{

		for (int j = 0; j < this->col; j++)
		{

			if (arr[i][j] == a)
			{
				tempI = i;
				tempJ = j;
			}
		}
	}
	for (int i = tempI; i < tempI + 1; i++)
	{
		for (int j = tempJ; j < this->col; j++)
		{
			switch (j)
			{
			case 0:
			{
				cout << "Ma tai khoan:\t";
				cout << arr[i][j] << " ";
				cout << endl;
				break;
			}
			case 1:
			{
				cout << "Ten tai khoan:\t";
				cout << arr[i][j] << " ";
				cout << endl;
				break;
			}
			case 2:
			{
				cout << "Mat khau: \t";
				cout << arr[i][j] << " ";
				cout << endl;
				break;
			}
			default:
				break;
			}
		}
	}
	inFile.close();
	cout << "-------" << endl;
}
void LISTITEM::check(string a)
{
	ifstream inFile;
	inFile.open("listAccount.txt", ios_base::in);

	if (inFile.fail() == true)
	{
		cout << "file cua ban khong ton tai" << endl;
	}
	inFile >> this->row >> this->col;
	string** arr;
	arr = new string * [this->row];
	//Cap phat vung nho cot
	for (int i = 0; i < this->row; i++)
	{
		arr[i] = new string[this->col];
	}
	//Doc gia tri tu file
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			inFile >> arr[i][j];
		}
	}
	//Tạo một biến giá trị để lấy thông tin dòng n
	int tempI = -1;
	for (int i = 0; i < this->row; i++)
	{

		for (int j = 0; j < this->col; j++)
		{

			if (arr[i][j] == a)
			{
				tempI = i;
				cout << "Tai khoan co ton tai" << endl;
			}
		}
	}
	if (tempI == -1)
		cout << "Tai khoan khong ton tai" << endl;
	
	inFile.close();
}
int LISTITEM::showList()
{
	string data;
	ifstream inFile;
	inFile.open("listItem.txt", ios_base::in);

	if (inFile.fail() == true)
	{
		cout << "file cua ban khong ton tai" << endl;
		system("pause");
		return 0;
	}
	inFile >> this->row >> this->col;
	string** arr;
	arr = new string * [this->row];
	//Cap phat vung nho cot
	for (int i = 0; i < this->row; i++)
	{
		arr[i] = new string[this->col];
	}
	//Doc gia tri tu file
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			inFile >> arr[i][j];
		}
	}
	//Xuat gia tri co trong file
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	inFile.close();
}