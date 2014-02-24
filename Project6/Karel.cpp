#include "Karel.h"


Karel::Karel(void)
{
}
Karel::Karel(int a, int s, int b)
{
	ave = a;
	street = s;
	beeper = b;
	icon = 0;
}


int Karel::getAve()
{
	return ave;
}

int Karel::getStreet()
{
	return street;
}

int Karel::getBeeper()
{
	return beeper;
}

System::Drawing::Icon^ Karel::getIcon()
{
	if (icon == 0)
	{
		return karelRight;
	}
	if (icon == 1)
	{
		return karelLeft;
	}
	if (icon == 2)
	{
		return karelUp;
	}
	if (icon == 3)
	{
		return karelDown;
	}
}

System::Drawing::Icon^ Karel::placeBeeper()
{
	return beeperIcon;
}

void Karel::setAve(int newAve)
{
	ave = newAve;
}

void Karel::setStreet(int newStreet)
{
	street = newStreet;
}

void Karel::setBeeper(int newBeeper)
{
	beeper = newBeeper;
}

void Karel::setIcon(int newIcon)
{
	icon = newIcon;
}

void 
	Karel::turnLeft()
{
	if (icon == 0)
	{
		icon = 2;
		getIcon();
	}
	if (icon == 1)
	{
		icon = 3;
		getIcon();
	}
	if (icon == 2)
	{
		icon = 1;
		getIcon();
	}
	if (icon == 3)
	{
		icon =0;
		getIcon();
	}
}

void Karel::move()
{
	if (icon == 0)
	{
		street++;
	}
	if (icon == 1)
	{
		street--;
	}
	if (icon == 2)
	{
		ave--;
	}
	if (icon == 3)
	{
		ave++;
	}
}

void Karel::pickBeeper()
{
	beeper++;
}

void Karel::putBeeper()
{
	beeper--;
	placeBeeper();
}