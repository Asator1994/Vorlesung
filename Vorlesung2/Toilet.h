#pragma once
#include "Location.h"
class Toilet :
	public Location
{
public:
	Toilet(int x, int y, std::string name, std::string stink);
	void visit() const override;
private:
	const std::string m_stink;
};

