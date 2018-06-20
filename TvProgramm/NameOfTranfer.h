#pragma once
#include"Library.h"
class nameOfTransfer {
private:
	string name;
	string time;
public:
	nameOfTransfer() {
		this->name = "";
		this->time = "";
	}
	nameOfTransfer(string name,string time) {
		this->name = name;
		this->time = time;
	}
	friend ostream& operator<<(ostream& os, nameOfTransfer obj) {
		os << obj.name << "\t" << obj.time << endl;
		return os;
	}
		
};