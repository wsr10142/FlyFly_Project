#include "gameover.h"

gameover::gameover(int s)
	:MAP(s)
{
	endmap[s][s] = { 0 };
}

void gameover::setEndMap()
{
	for (int i = 0; i < MAP::getsize(); i++)
	{
		for (int j = 0; j < MAP::getsize(); j++)
		{
			if (i == 0 || i == 29 || j == 0 || j == 29)
			{
				endmap[i][j] = 1;
			}
			else
			{
				endmap[i][j] = 0;
			}
			if (i == 8)
			{
				if (j == 0 || j == 6 || j == 7 || j == 11 || j == 12 || j == 15 || j == 19 || j == 21 || j == 22 || j == 23 || j == 24 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 9)
			{
				if (j == 0 || j == 5 || j == 8 || j == 10 || j == 13 || j == 15 || j == 16 || j == 18 || j == 19 || j == 21 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 10)
			{
				if (j == 0 || j == 5 || j == 10 || j == 11 || j == 12 || j == 13 || j == 15 || j == 17 || j == 19 || j == 21 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 11)
			{
				if (j == 0 || j == 5 || j == 7 || j == 8 || j == 10 || j == 13 || j == 15 || j == 19 || j == 21 || j == 22 || j == 23 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 12)
			{
				if (j == 0 || j == 5 || j == 8 || j == 10 || j == 13 || j == 15 || j == 19 || j == 21 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 13)
			{
				if (j == 0 || j == 6 || j == 7 || j == 10 || j == 13 || j == 15 || j == 19 || j == 21 || j == 22 || j == 23 || j == 24 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 15)
			{
				if (j == 0 || j == 6 || j == 7 || j == 10 || j == 14 || j == 16 || j == 17 || j == 18 || j == 19 || j == 21 || j == 22 || j == 23 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 16)
			{
				if (j == 0 || j == 5 || j == 8 || j == 10 || j == 14 || j == 16 || j == 21 || j == 24 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 17)
			{
				if (j == 0 || j == 5 || j == 8 || j == 11 || j == 13 || j == 16 || j == 21 || j == 24 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 18)
			{
				if (j == 0 || j == 5 || j == 8 || j == 11 || j == 13 || j == 16 || j == 17 || j == 18 || j == 21 || j == 22 || j == 23 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 19)
			{
				if (j == 0 || j == 5 || j == 8 || j == 11 || j == 13 || j == 16 || j == 21 || j == 24 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 20)
			{
				if (j == 0 || j == 6 || j == 7 || j == 12 || j == 16 || j == 17 || j == 18 || j == 19 || j == 21 || j == 24 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 23)
			{
				if (8 <= j && j <= 18)
				{
					endmap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
			else if (i == 25)
			{
				if (10 <= j && j <= 21)
				{
					endmap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					endmap[i][j] = 1;
				}
				else
				{
					endmap[i][j] = 0;
				}
			}
		}
	}
}

void gameover::displayMap()
{
	for (int i = 0; i < MAP::getsize(); i++)
	{
		for (int j = 0; j < MAP::getsize(); j++)
		{
			if (endmap[i][j] == 1)
			{
				cout << "¡½";
			}
			else if (endmap[i][j] == 0)
			{
				cout << "  ";
			}
			else if (i == 23 && j == 12)
			{
				cout << "¢Þ¢ô¢é£B¡@¢é¢ï¢é¢ñ¢ö¡H";
			}
			else if (i == 25 && j == 13)
			{
				cout << "¡]¢°¡^¢ç¢í¢û¡þ¡]¢±¡^¢Ü¢÷";
			}
		}
		cout << endl;
	}
}