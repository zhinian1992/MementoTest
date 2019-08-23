#pragma once
#include <memory>
#include "PosMemento.h"
#include "SizeMemento.h"
#include <iostream>

using namespace std;

class Player
{
public:
	Player() {
		m_width = 20;
		m_height = 20;

		pos_x = 10;
		pos_y = 30;

		hp = 100;
		mp = 100;
	};
	~Player() {};

	void initPos(int x, int y) { 
		this->pos_x = x;
		this->pos_y = y;
	}
	void initSize(int width, int height) { 
		this->m_width = width; 
		this->m_height = height; 
	}
	void initState(int hp, int mp) {
		this->hp = hp;
		this->mp = mp;
	}

	void print() {
		cout << "player state: my hp->" << this->hp << "  my mp->" << this->mp << endl;
		cout << "player size: my width->" << this->m_width << "  my height->" << this->m_height << endl;
		cout << "player pos: my pos->" << this->pos_x << "  my height->" << this->pos_y << endl;
	}

	int GetWidth() { return m_width; }
	void SetWidth(int value) { m_width = value; }
	int GetHeight() { return m_height; }
	void SetHeight(int value) { m_height = value; }
	int GetPosX() { return pos_x; }
	void SetPosX(int x) { pos_x = x; }
	int GetPosY() { return pos_y; }
	void SetPosY(int y) { pos_y = y; }

	/*大小记录*/
	std::shared_ptr<SizeMemento> SaveSize() {
		std::shared_ptr<SizeMemento> mem = std::make_shared<SizeMemento>(m_width, m_height);
		return mem;
	}
	void UpdateSize(std::shared_ptr<SizeMemento> mem) {
		this->m_width = mem->GetWidth();
		this->m_height = mem->GetHeight();
	}
	/*位置记录*/
	std::shared_ptr<PosMemento> SavePos() {
		std::shared_ptr<PosMemento> mem = std::make_shared<PosMemento>(pos_x, pos_y);
		return mem;
	}
	void UpdatePos(std::shared_ptr<PosMemento> mem) {
		pos_x = mem->GetX();
		pos_y = mem->GetY();
	}

private:
	/*角色大小属性*/
	int m_width;
	int m_height;
	/*角色位置属性*/
	int pos_x;
	int pos_y;
	/*角色状态属性*/
	double hp;
	double mp;
};

