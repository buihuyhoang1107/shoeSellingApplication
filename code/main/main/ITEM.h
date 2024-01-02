#pragma once
#include<iostream>
#include<string>
using namespace std;
	
class ITEM
{
private:
	int itemID;
	string nameItem;
	string pricesItem;
	string promotionItem;
public:
	void update(int itemID);
	int getPrices(int itemID);
	string getInformationItem(int itemID);
	void closeItem(int itemID);
};

