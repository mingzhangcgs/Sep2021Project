#pragma once
#include <string>
#include <vector>

class PlacableActor;

class Level
{
	char* m_pLevelData;
	int m_width;
	int m_height;

	std::vector<PlacableActor*> m_pActors;

public:
	Level();
	~Level();

	bool Load(std::string levelName, int* playerX, int* playerY);
	void Draw();
	PlacableActor* UpdateActors(int x, int y);

	bool IsSpace(int x, int y);
	bool IsWall(int x, int y);

	int GetHeight() { return m_height; }
	int GetWidth() { return m_width; }

private:
	bool Convert(int* playerX, int* playerY);
	int GetIndexFromCoordinates(int x, int y);
};

