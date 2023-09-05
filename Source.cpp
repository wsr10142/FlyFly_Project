#include "map.h"
#include "start.h"
#include "gameover.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "rule.h"
using namespace std;
#pragma warning(disable:4996)

int main()
{
	int dir = 72;//初始方向:up
	MAP map(30);
	START start(30);
	gameover gameover(30);
	rule rule(30);
	map.setMap(30);
	start.setStartMap();
	map.initial();
	map.generateo();
	map.generatex();
	map.generatebomb();
	map.generatebig();
	rule.setRulemap();
	while (1)
	{	
		start.displayMap();
		char a;
		a = getch();
		if (a == 32) 
		{
			while (1)
			{
				system("cls");
				rule.displayMap();
				char d;
				d = getche();
				if (d == 32)
				{
					system("cls");
					map.displayMap();
					while (1)
					{
						char b;
						b = getch();
						system("cls");
						map.displayMap();
						if (b == 72 || b == 80 || b == 75 || b == 77)
						{
							while (1)
							{
								system("cls");
								map.displayMap();
								dir = map.direction(dir);
								map.move(dir);
								map.checkspeed();
								cout << "　　　　　　　　　　　　　分數:" << map.getscore() << endl;
								if (map.getdie() == true)
								{
									system("cls");
									gameover.setEndMap();
									gameover.displayMap();
									while (1)
									{
										char c;
										c = getch();
										if (c == 49)
										{
											system("cls");
											return main();
										}
										else if (c == 50)
										{
											system("cls");
											return 0;
										}
									}
								}
								Sleep(map.getspeed());
								system("cls");
							}
						}
					}
				}
			}
		}
		system("cls");
	}
}
