#pragma once
ref class Karel
{
private:
	static System::Drawing::Icon^ karelRight = gcnew System::Drawing::Icon("karelRight.ico");
	static System::Drawing::Icon^ karelLeft = gcnew System::Drawing::Icon("karelLeft.ico");
	static System::Drawing::Icon^ karelUp = gcnew System::Drawing::Icon("karelUp.ico");
	static System::Drawing::Icon^ karelDown = gcnew System::Drawing::Icon("karelDown.ico");
	static System::Drawing::Icon^ beeperIcon = gcnew System::Drawing::Icon("beeper.bmp");

	int ave; // vertical
	int street; // horizontal
	int beeper;
	int icon;
	

public:
	Karel(void);

	Karel(int a, int s, int b);

	int getAve();
	int getStreet();
	int getBeeper();
	
	System::Drawing::Icon^ Karel::getIcon();

	System::Drawing::Icon^ Karel::placeBeeper();


	void setAve(int newAve);
	void setStreet(int newStreet);
	void setBeeper(int newBeeper);
	void setIcon(int newIcon);

	void turnLeft();
	void move();
	void pickBeeper();
	void putBeeper();
};

