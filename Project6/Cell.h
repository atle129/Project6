#pragma once
ref class Cell
{
private:
	
	int ave;
	int street;
	bool access;
	bool hasBeeper;

	

public:

	Cell(void);

	Cell(int a, int s, bool w);

	bool getAccess();
	int getAve();
	int getStreet();
	bool getBeeper();

	void setAccess(bool w);
	void setBeeper(bool beeper);

};

