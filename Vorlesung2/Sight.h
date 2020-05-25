#pragma once
#include "Location.h"
class Sight :
	public Location
{
public: 
	Sight(int x, int y, std::string name, std::string whatYouSee);
	void visit() const override;

private:
	std::string m_whatYouSee;
};

