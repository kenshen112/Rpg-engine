#pragma once
class Stats
{
private:
	int mHP;
	int cHP = mHP;
	int tempHP;
	int level;

public:
	Stats()
	{
		mHP = 0;
		tempHP = 0;
		level = 0;
	}
	
	void setDefaults()
	{
		mHP = 100;
		level = 1;
	}

	void maxHP(int hp)
	{
		mHP = hp;
	}
	
	void increaseCurrentHP(int cHP)
	{
		this->cHP += cHP;
	}

	void decreaseCurrentHP(int cHP)
	{
		this->cHP -= cHP;
	}

	void setLevel(int l)
	{
		level = l;
	}

	~Stats()
	{

	}
};

