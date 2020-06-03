#include "SmartPerson.h"
#include <iostream>

#include "SmartTeam.h"

int SmartPerson::id = 0;

SmartPerson::SmartPerson()
	: m_id(id++)
{
	std::cout << "Constructing SmartPerson " << m_id << std::endl;
}

SmartPerson::~SmartPerson()
{
	std::cout << "Destroying SmartPerson" << m_id << std::endl;
}

bool SmartPerson::canJoinAnotherTeam() const
{
	return m_teams.size() < 3;
}

void SmartPerson::joinTeam(std::weak_ptr<SmartTeam> team)
{
	// Diese Methode sieht ganz anders aus, als in der nicht-smarten Klassen. Und das ist gut so.
	// Die andere Methode macht zwar ggf. ein paar Dinge mehr mit, ist verwirrend und fehleranfällig.
	// Überlegt euch das übertragen auf die reelle Welt: Muss eine Person prüfen, ob in einem Team
	// genug Plätze frei sind, um beizutreten? Nein, diese Bedingung muss bereits im Voraus (oder eben
	// im Nachhinein, wenn es etwas wie einen Mitgliedsantrag geben würde) irgendwo anders geprüft werden
	if (canJoinAnotherTeam()) {
		m_teams.push_back(team);
	}
}
