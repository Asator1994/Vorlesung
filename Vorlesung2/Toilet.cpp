#include "Toilet.h"
#include <iostream>

Toilet::Toilet(int x, int y, std::string name, std::string stink) : Location(x, y, name), m_stink(stink) {}

void Toilet::visit() const
{
	std::cout << m_name << m_x << m_y << "stinks like" << m_stink << std::endl;
}
