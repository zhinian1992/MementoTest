#pragma once

class PosMemento
{
public:
	PosMemento();
	~PosMemento();

	PosMemento(int x, int y) {
		this->x = x;
		this->y = y;
	}

	int GetX() { return x; }
	int GetY() { return y; }
private:
	int x;
	int y;
};

