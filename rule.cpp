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
				cout << "��";
			}
			else if (rulemap[i][j] == 0)
			{
				cout << "  ";
			}
			else if (i == 3 && j == 2)
			{
				cout << "���G�Ң��@�@�@�@�@�@�@�@�@�@�@�@�@�@�@���G���";
			}
			else if (i == 6 && j == 2)
			{
				cout << "���G���������Ϣ��@�@�@�@�@�@�@�@�@�@�@���G�ڢӢԢ�";
			}
			else if (i == 9 && j == 2)
			{
				cout << "���G�����@�@������@�@�@�@�@�@�@�@�@�@���G��עբ֢�";
			}
			else if (i == 12 && j == 2)
			{
				cout << "�D�G����B����B�@�]������B����^�@�@�@���G�Ңݢ��";
			}
			else if (i == 15 && j == 2)
			{
				cout << "�H�G�Ң��@�����@���������Ϣ����@�]�����H�������H�^";
			}
			else if (i == 18 && j == 2)
			{
				cout << "���G�Ң��@�����@���������Ϣ����@�]�����H�������H�^";
			}
			else if (i == 24 && j == 3)
			{
				cout << "�ޢ������  ��ޢϢѢ�  ����  ��������������...   ";
			}
		}
		cout << endl;
	}
}