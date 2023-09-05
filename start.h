#include "map.h"
#ifndef START_H
#define START_H

class START :public MAP
{
public:
	START(int);
	void setStartMap();
	void displayMap();
private:
	int startmap[30][30];
};

#endif