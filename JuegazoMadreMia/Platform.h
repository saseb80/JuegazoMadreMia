#pragma once
#include <string>
#include "GameState.h"

class GameState;

class Platform
{
private:
	int width;
	int height;
public:
	Platform(std::string name);
	void RenderClear();
	void RenderPresent();
	void CheckEvent(GameState *obj, bool (GameState::*f)(int));
	~Platform(){}
};