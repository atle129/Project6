#include "Cell.h"


Cell::Cell(void)
{

}

Cell::Cell(int a, int s, bool w)
{
	ave = a;
	street = s;
	access = w;
	hasBeeper = false;
}

bool Cell::getAccess()
{
	return access;
}

int Cell::getAve()
{
	return ave;
}

int Cell::getStreet()
{
	return street;
}

bool Cell::getBeeper()
{
	return hasBeeper;
}

void Cell::setAccess(bool w)
{
	access = w;
}

void Cell::setBeeper(bool beeper)
{
	hasBeeper = true;
}
