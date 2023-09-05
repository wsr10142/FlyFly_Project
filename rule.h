#include <iostream>
#include "map.h"
using namespace std;

class rule :public MAP
{
public:
	rule(int);
	void setRulemap();
	void displayMap();
private:
	int rulemap[30][30];
};