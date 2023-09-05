#include "rule.h"

rule::rule(int s)
	:MAP(s)
{
	rulemap[s][s] = { 0 };
}

void rule::setRulemap()
{
	for (int i = 0; i < MAP::getsize(); i++)
	{
		for (int j = 0; j < MAP::getsize(); j++)
		{
			if (i == 0 || j == 0 || i == 29 || j == 29)
			{
				rulemap[i][j] = 1;
			}
			else
			{
				rulemap[i][j] = 0;
			}
			if (i == 3)
			{
				if (1<j &&j<26)
				{
					rulemap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					rulemap[i][j] = 1;
				}
				else
				{
					rulemap[i][j] = 0;
				}
			}
			else if (i == 6)
			{
				if (1 < j &&j < 28)
				{
					rulemap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					rulemap[i][j] = 1;
				}
				else
				{
					rulemap[i][j] = 0;
				}
			}
			else if (i == 9)
			{
				if (1 < j &&j < 29)
				{
					rulemap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					rulemap[i][j] = 1;
				}
				else
				{
					rulemap[i][j] = 0;
				}
			}
			else if (i == 12)
			{
				if (1 < j &&j < 28)
				{
					rulemap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					rulemap[i][j] = 1;
				}
				else
				{
					rulemap[i][j] = 0;
				}
			}
			else if (i == 15)
			{
				if (1 < j &&j < 29)
				{
					rulemap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					rulemap[i][j] = 1;
				}
				else
				{
					rulemap[i][j] = 0;
				}
			}
			else if (i == 18)
			{
				if (1 < j &&j < 29)
				{
					rulemap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					rulemap[i][j] = 1;
				}
				else
				{
					rulemap[i][j] = 0;
				}
			}
			else if (i == 24)
			{
				if (3 <= j && j <= 28)
				{
					rulemap[i][j] = -1;
				}
				else if (j == 0 || j == 29)
				{
					rulemap[i][j] = 1;
				}
				else
				{
					rulemap[i][j] = 0;
				}
			}
		}
	}
}

void rule::displayMap()
{
	for (int i = 0; i < MAP::getsize(); i++)
	{
		for (int j = 0; j < MAP::getsize(); j++)
		{
			if (rulemap[i][j] == 1)
			{
				cout << "¡½";
			}
			else if (rulemap[i][j] == 0)
			{
				cout << "  ";
			}
			else if (i == 3 && j == 2)
			{
				cout << "¡¸¡G¢Ò¢ñ¢í¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡ô¡G¢ã¢Þ";
			}
			else if (i == 6 && j == 2)
			{
				cout << "¡¹¡G¢û¢ë¢÷¢ú¢í¡Ï¢°¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡ö¡G¢Ú¢Ó¢Ô¢â";
			}
			else if (i == 9 && j == 2)
			{
				cout << "¡½¡G¢ü¢ð¢í¡@£@¢é¢ô¢ô¡@¡@¡@¡@¡@¡@¡@¡@¡@¡@¡÷¡G¢à¢×¢Õ¢Ö¢â";
			}
			else if (i == 12 && j == 2)
			{
				cout << "¢D¡G¢î¢ô£B¢î¢ô£B¡@¡]¢ø¢ô¢é£B¢í¢ú¡^¡@¡@¡@¡õ¡G¢Ò¢Ý¢å¢Ü";
			}
			else if (i == 15 && j == 2)
			{
				cout << "¡H¡G¢Ò¢ñ¢í¡@¢÷¢ú¡@¢û¢ë¢÷¢ú¢í¡Ï¢°¢¯¡@¡]¢´¢¯¢H¡þ¢´¢¯¢H¡^";
			}
			else if (i == 18 && j == 2)
			{
				cout << "¡°¡G¢Ò¢ñ¢í¡@¢÷¢ú¡@¢û¢ë¢÷¢ú¢í¡Ï¢±¢¯¡@¡]¢µ¢¶¢H¡þ¢²¢²¢H¡^";
			}
			else if (i == 24 && j == 3)
			{
				cout << "¢Þ¢ú¢í¢û¢û  ¢á¢Þ¢Ï¢Ñ¢Ó  ¢ü¢÷  ¢ë¢÷¢ö¢ü¢ñ¢ö¢ý¢í...   ";
			}
		}
		cout << endl;
	}
}