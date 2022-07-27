#pragma once
#include "PlacableActor.h"
class Life : public PlacableActor
{
public:
	Life(int x, int y, int value);

	virtual ActorType GetType() override { return ActorType::Life; }
	virtual void Draw() override;
private:
	int m_worth;
};