#include "Sight.h"
#include <iostream>

Sight::Sight(int x, int y, std::string name, std::string whatYouSee)
	: Location(x, y, name)
	, m_whatYouSee(whatYouSee)
{
}

void Sight::visit() const
{
	std::cout << m_name << m_x << m_y << "and you can see" << m_whatYouSee << std::endl;
}
