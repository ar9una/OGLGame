#pragma once
class Screen
{
public:
	Screen();
	~Screen();

	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void render(float delta) = 0;


};

