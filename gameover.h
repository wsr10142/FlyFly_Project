#include "map.h"
#ifndef GAMEOVER_H
#define GAMEOVER_H

class gameover :public MAP
{
public:
	gameover(int);
	void setEndMap();
	void displayMap();
private:
	int endmap[30][30];
};

#endif