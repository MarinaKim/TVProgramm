#include "TvChanel.h"

TvChanel::TvChanel()
{
	this->nameOfTransfer = "";
	this->timeOfTransfer = "";
	this->nameOfChanel = "";
	this->type = "";
}

TvChanel::TvChanel(string nameOfChanel, string type, string nameOfTransfer, string timeOfTransfer)
{
	
	this->nameOfChanel = nameOfChanel;
	this->type = type;
	this->nameOfTransfer = nameOfTransfer;
	this->timeOfTransfer = timeOfTransfer;
}

TvChanel::TvChanel(const TvChanel & obj)
{	
	this->nameOfChanel = obj.nameOfChanel;
	this->type = obj.type;
	this->nameOfTransfer = obj.nameOfTransfer;
	this->timeOfTransfer = obj.timeOfTransfer;
}
