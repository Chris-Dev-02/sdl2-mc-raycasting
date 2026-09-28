#pragma once
#include"SDL2/SDL.h"

class Draw2d
{
public:
	Draw2d();
	void DrawPixel(SDL_Renderer* renderer, int x, int y, Uint8 r, Uint8 g, Uint8 b);
	void DrawLine(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, Uint8 r, Uint8 g, Uint8 b);
	void DrawSquare(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, Uint8 r, Uint8 g, Uint8 b);
	void DrawCircle(SDL_Renderer* renderer, int radious, Uint8 r, Uint8 g, Uint8 b);
	void DrawTriangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3, Uint8 r, Uint8 g, Uint8 b);
	void DrawColumn();
};

