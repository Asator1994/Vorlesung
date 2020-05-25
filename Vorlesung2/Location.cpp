#include "Location.h"

#include <iostream>

Location::Location(int x, int y, std::string name) : m_x(x), m_y(y), m_name(name) {

}

void Location::visit() const
{
	std::cout << m_name << m_x << m_y << std::endl;
}
