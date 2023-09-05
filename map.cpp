#include "map.h"

MAP::MAP(int s)
{
	size = s;
	edge[s][s] = { 0 };
}

void MAP::displayMap()
{

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (edge[i][j] == 1)
			{
				cout << "■";
			}
			else if (edge[i][j] == 0)
			{
				cout << "  ";
			}
			else if (edge[i][j] == 2)
			{
				cout << "￥";
			}
			else if (edge[i][j] == 3)
			{
				cout << "★";
			}
			else if (edge[i][j] == 4)
			{
				cout << "☆";
			}
			else if (edge[i][j] == 5 || edge[i][j] == 6)
			{
				cout << "？";
			}
			else if (edge[i][j] == 7 || edge[i][j] == 8 || edge[i][j] == 9)
			{
				cout << "※";
			}
		}
		cout << endl;
	}
}

void MAP::setMap(int size)
{
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
			{
				edge[i][j] = 1;
			}
			else
			{
				edge[i][j] = 0;
			}
		}
	}
}

void MAP::setsize(int s)
{
	size = s;
}

int MAP::getsize()
{
	return size;
}
//初始化座標
void MAP::initial()
{
	x = 14;
	y = 14;
	edge[x][y] = 2;
}

bool MAP::getdie()
{
	return die;
}

void MAP::setscore()
{
	score = score;
}

int MAP::getscore()
{
	return score;
}

void MAP::generateo()
{
	while (1) {
		srand(time(NULL));
		int plusfood_x = rand() % (size - 2) + 1;
		int plusfood_y = rand() % (size - 2) + 1;
		if (edge[plusfood_x][plusfood_y] ==0)
		{
			plus_x = plusfood_x;
			plus_y = plusfood_y;
			edge[plusfood_x][plusfood_y] = 3;
			break;
		}
	}
}

void MAP::generatex()
{
	while (1) {
		int minusfood_x = rand() % (size - 2) + 1;
		int minusfood_y = rand() % (size - 2) + 1;
		if (edge[minusfood_x][minusfood_y] == 0)
		{
			die_x = minusfood_x;
			die_y = minusfood_y;
			edge[minusfood_x][minusfood_y] = 4;
			break;
		}
	}
}

void MAP::generatebomb()
{
	while (1) {
		int bomb_x = rand() % (size - 2) + 1;
		int bomb_y = rand() % (size - 2) + 1;
		int p = rand() % 2;
		if (edge[bomb_x][bomb_y] == 0)
		{
			question_x = bomb_x;
			question_y = bomb_y;
			if (p == 0)
			{
				edge[bomb_x][bomb_y] = 5;
			}
			else if(p==1)
			{ 
				edge[bomb_x][bomb_y] = 6;
			}
			break;
		}
	}
}

void MAP::generatebig()
{
	while (1) {
		int bigbomb_x = rand() % (size - 2) + 1;
		int bigbomb_y = rand() % (size - 2) + 1;
		int q = rand() % 3;
		if (edge[bigbomb_x][bigbomb_y] == 0) {
			bigquestion_x = bigbomb_x;
			bigquestion_y = bigbomb_y;
			if (q == 0 || q == 1)
			{
				edge[bigbomb_x][bigbomb_y] = 7;
			}
			else if (q == 2)
			{
				edge[bigbomb_x][bigbomb_y] = 8;
			}
		}
		break;
	}
}
			
//獲取方向
int MAP::direction(int olddir)
{
	int newdir = olddir;
	if (_kbhit()) {
		_getch();
		newdir = _getch();
	}
	return newdir;
}
//移動位置
void MAP::move(int dir)
{
	int a;
	int b;
	switch (dir)
	{
	case 72:
	{
		a = x - 1;
		if (edge[a][y] == 1 || edge[a][y] == 4 || edge[a][y] == 5 || edge[a][y] == 7)
		{
			die = true;
			return;
		}
		if (edge[a][y] == 3)
		{
			score++;
			edge[x][y] = 0;
			x--;
			edge[x][y] = 2;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[a][y] == 6)
		{
			edge[x][y] = 0;
			x--;
			edge[x][y] = 2;
			score = score + 10;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[a][y] == 8)
		{
			edge[x][y] = 0;
			x--;
			edge[x][y] = 2;
			score = score + 20;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			generatebig();
			return;
		}
		if (edge[a][y] == 0)
		{
			edge[x][y] = 0;
			x--;
			edge[x][y] = 2;
			return;
		}
	}
	case 80:
	{
		a = x + 1;
		if (edge[a][y] == 1 || edge[a][y] == 4 || edge[a][y] == 5 || edge[a][y] == 7)
		{
			die = true;
			return;
		}
		if (edge[a][y] == 3)
		{
			score++;
			edge[x][y] = 0;
			x++;
			edge[x][y] = 2;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[a][y] == 6)
		{
			edge[x][y] = 0;
			x++;
			edge[x][y] = 2;
			score = score + 10;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[a][y] == 8)
		{
			edge[x][y] = 0;
			x++;
			edge[x][y] = 2;
			score = score + 20;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			generatebig();
			return;
		}
		if (edge[a][y] == 0)
		{
			edge[x][y] = 0;
			x++;
			edge[x][y] = 2;
			return;
		}
	}
	case 75:
	{
		b = y - 1;
		if (edge[x][b] == 1 || edge[x][b] == 4 || edge[x][b] == 5 || edge[x][b] == 7)
		{
			die = true;
			return;
		}
		if (edge[x][b] == 3)
		{
			score++;
			edge[x][y] = 0;
			y--;
			edge[x][y] = 2;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[x][b] == 6)
		{
			edge[x][y] = 0;
			y--;
			edge[x][y] = 2;
			score = score + 10;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[x][b] == 8)
		{
			edge[x][y] = 0;
			y--;
			edge[x][y] = 2;
			score = score + 20;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			generatebig();
			return;
		}
		if (edge[x][b] == 0)
		{
			edge[x][y] = 0;
			y--;
			edge[x][y] = 2;
			return;
		}
	}
	case 77:
	{
		b = y + 1;
		if (edge[x][b] == 1 || edge[x][b] == 4 || edge[x][b] == 5 || edge[x][b] == 7)
		{
			die = true;
			return;
		}
		if (edge[x][b] == 3)
		{
			score++;
			edge[x][y] = 0;
			y++;
			edge[x][y] = 2;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[x][b] == 6)
		{
			edge[x][y] = 0;
			y++;
			edge[x][y] = 2;
			score = score + 10;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			generatebomb();
			edge[bigquestion_x][bigquestion_y] = 0;
			generatebig();
			return;
		}
		if (edge[x][b] == 8)
		{
			edge[x][y] = 0;
			y++;
			edge[x][y] = 2;
			score = score + 20;
			edge[plus_x][plus_y] = 0;
			generateo();
			edge[die_x][die_y] = 0;
			generatex();
			edge[question_x][question_y] = 0;
			generatebomb();
			generatebig();
			return;
		}
		if (edge[x][b] == 0)
		{
			edge[x][y] = 0;
			y++;
			edge[x][y] = 2;
			return;
		}
	}
	}
}

int MAP::getspeed()
{
	return speed;
}

void MAP::checkspeed()
{
	if (score >= 10)
	{
		speed = 1;
	}
	else if (score >= 5)
	{
		speed = 150;
	}
}