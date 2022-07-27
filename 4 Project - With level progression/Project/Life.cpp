#include <iostream>
#include <windows.h>
#include "Life.h"

Life::Life(int x, int y, int value)
	: PlacableActor(x, y)
	, m_worth(value)
{

}

void Life::Draw()
{
	std::cout << "L";
}
