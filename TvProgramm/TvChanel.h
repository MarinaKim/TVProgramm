#pragma once
#include"Library.h"
#include"NameOfTranfer.h"

class TvChanel {
private:
	string nameOfChanel;
	string type;
	string nameOfTransfer;
	string timeOfTransfer;	
public:
	TvChanel();
	TvChanel(string nameOfChanel,  string type, string nameOfTransfer, string timeOfTransfer);
	TvChanel(const TvChanel & obj);

	friend istream& operator<<(istream& is, TvChanel& obj);
	friend ostream& operator<<(ostream& os, TvChanel obj);

};