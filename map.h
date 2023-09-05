#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>
using namespace std;

#ifndef MAP_H
#define MAP_H

class MAP
{
public:
	MAP(int);
	void displayMap();
	void setMap(int);
	void setsize(int);
	int getsize();
	void setscore();
	int getscore();
	bool getdie();
	void initial();
	void generateo();
	void generatex();
	void generatebomb();
	void generatebig();
	void move(int);
	int direction(int);
	int getspeed();
	void checkspeed();
private:
	int x ;
	int y ;
	int plus_x;
	int plus_y;
	int die_x;
	int die_y;
	int question_x;
	int question_y;
	int bigquestion_x;
	int bigquestion_y;
	int speed = 300;
	int score = 0;
	int edge[30][30];
	int size;
	bool die = false;
};
#endif
