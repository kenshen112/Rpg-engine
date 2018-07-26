#pragma once
class Position
{
private:
	int pX;
	int pY;

public:
	Position()
	{
		pX = 0;
		pY = 0;
	}
	
	void setPx(int x)
	{
		pX = x;
	}

	void setPy(int y)
	{
		pY = y;
	}

	void addPx(int x)
	{
		pX += x;
	}

	void addPy(int y)
	{
		pY += y;
	}

	int getPx()
	{
		return pX;
	}

	int getPy()
	{
		return pY;
	}

	~Position()
	{

	}
};

