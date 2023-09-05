#include "Start.h"

START::START(int s)
	:MAP(s)
{
	startmap[s][s] = { 0 };
}

void START::setStartMap()
{
	for (int i = 0; i < MAP::getsize(); i++)
	{
		for (int j = 0; j < MAP::getsize(); j++)
		{
			if (i == 0 || i == 29 || j == 0 || j == 29)
			{
				startmap[i][j] = 1;
			}
			else
			{
				startmap[i][j] = 0;
			}
			if (i == 2)
			{
				if (j == 0 || j == 29 || j == 6 || j == 7 || j == 18 || j == 23 || j == 24)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 3)
			{
				if (j == 0 || j == 29 || j == 6 || j == 7 || j == 23 || j == 24)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 4)
			{
				if (j == 0 || j == 29 || j == 9 || j == 13)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 5)
			{
				if (j == 0 || j == 29 || j == 10 || j == 12 || j == 20 || j == 21)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 6)
			{
				if (j == 0 || j == 29 || j == 3 || j == 7 || j == 8 || j == 9 || j == 10 || j == 11 || j == 12 || j == 13 || j == 14 || j == 15 || j == 16 || j == 17 || j == 19 || j == 22 || j == 26) {
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 7)
			{
				if (j == 0 || j == 29 || j == 7 || j == 17 || j == 18 || j == 22)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 8)
			{
				if (j == 0 || j == 29 || j == 7 || j == 9 || j == 13 || j == 17 || j == 21)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 9)
			{
				if (j == 0 || j == 29 || j == 5 || j == 7 || j == 17 || j == 20)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 10)
			{
				if (j == 0 || j == 29 || j == 7 || j == 17 || j == 18 || j == 19 || j == 23)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 11)
			{
				if (j == 0 || j == 29 || j == 7 || j == 9 || j == 14 || j == 17 || j == 20 || j == 26 || j == 27)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 12)
			{
				if (j == 0 || j == 29 || j == 2 || j == 3 || j == 7 || j == 10 || j == 11 || j == 12 || j == 13 || j == 17 || j == 21 || j == 26 || j == 27)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 13)
			{
				if (j == 0 || j == 29 || j == 2 || j == 3 || j == 7 || j == 17 || j == 18 || j == 22)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 14)
			{
				if (j == 0 || j == 29 || j == 7 || j == 8 || j == 9 || j == 10 || j == 11 || j == 12 || j == 13 || j == 14 || j == 15 || j == 16 || j == 17 || j == 19 || j == 22)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 15)
			{
				if (j == 0 || j == 29 || j == 20 || j == 21 || j == 27)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 16)
			{
				if (j == 0 || j == 29 || j == 2 || j == 9 || j == 10 || j == 13 || j == 24)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 17)
			{
				if (j == 0 || j == 29 || j == 5 || j == 9 || j == 10 || j == 16 || j == 20 || j == 21)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 18)
			{
				if (j == 0 || j == 29 || j == 20 || j == 21)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 22)
			{
				if (j == 0 || j == 29 || j == 3 || j == 4 || j == 5 || j == 7 || j == 11 || j == 13 || j == 16 || j == 17 || j == 18 || j == 20 || j == 24 || j == 26)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 23)
			{
				if (j == 0 || j == 29 || j == 3 || j == 7 || j == 11 || j == 13 || j == 16 || j == 20 || j == 24 || j == 26)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 24)
			{
				if (j == 0 || j == 29 || j == 3 || j == 4 || j == 7 || j == 12 || j == 16 || j == 17 || j == 20 || j == 25)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 25)
			{
				if (j == 0 || j == 29 || j == 3 || j == 7 || j == 8 || j == 9 || j == 12 || j == 14 || j == 16 || j == 20 || j == 21 || j == 22 || j == 25)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}
			else if (i == 20)
			{
				if (3 <= j && j <= 28)
				{
					startmap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					startmap[i][j] = 1;
				}
				else
				{
					startmap[i][j] = 0;
				}
			}

		}
	}
}

void START::displayMap()
{
	for (int i = 0; i < MAP::getsize(); i++)
	{
		for (int j = 0; j < MAP::getsize(); j++)
		{
			if (startmap[i][j] == 1)
			{
				cout << "¡½";
			}
			else if (startmap[i][j] == 0)
			{
				cout << "  ";
			}
			else if (i == 20 && j == 3)
			{
				cout << "¢Þ¢ú¢í¢û¢û  ¢á¢Þ¢Ï¢Ñ¢Ó  ¢ü¢÷  ¢ë¢÷¢ö¢ü¢ñ¢ö¢ý¢í...   ";
			}
		}
		cout << endl;
	}
}