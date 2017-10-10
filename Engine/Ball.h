#pragma once

#include "Graphics.h"

class Ball
{
public:
	Ball(const Vec2& pos_in, const Vec2& velocity_in);
	void Update(float dt);
	void ReboundFromWalls(const RectF& walls);
	void ReboundX();
	void ReboundY();
	void Draw( Graphics& gfx ) const;
	RectF GetRect() const;
	Vec2 GetVelocity() const;

private:
	static constexpr float radius = 7.0f;
	Vec2 pos;
	Vec2 velocity;
};