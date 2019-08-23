#pragma once

class SizeMemento
{
public:
	SizeMemento();
	~SizeMemento();

	SizeMemento(int width, int height) {
		this->width = width;
		this->height = height;
	}

	int GetWidth() { return width; }
	int GetHeight() { return height; }
private:
	int width;
	int height;
};

