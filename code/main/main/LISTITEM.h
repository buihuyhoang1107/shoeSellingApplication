#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"ITEM.h"
using namespace std;
class LISTITEM
{
private:
	int row;
	int col;
public:
	int showList();
	void search(string a);
	void add(string itempID);
	void check(string itempID);
	void deletee(string itempID);
	void setRow(int& row);
	int getRow();
};

