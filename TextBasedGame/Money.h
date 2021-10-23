#pragma once
#include "PlacableActor.h"
class Money :
	public PlacableActor
{
public:
	Money(int x, int y, int color);

	int GetWorth() const { return m_worth; }

	virtual void Draw() override;

private:
	int m_worth;
};

