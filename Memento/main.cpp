#include "pch.h"
#include <string.h>
#include <memory>
#include <iostream>
#include "Player.h"
#include "MementoSaver.h"
using namespace std;

int main()
{
	cout << "player me init state:" << endl;
	Player me;
	me.initPos(50, 100);
	me.initSize(40, 60);
	me.initState(200, 200);
	me.print();

	/*move first*/
	cout << "move to another pos:" << endl;
	me.SetPosX(10);
	me.SetPosY(20);
	me.print();

	PosSaver pos1;
	pos1.SetMemento(me.SavePos());

	/*move second*/
	cout << "move to another pos:" << endl;
	me.SetPosX(30);
	me.SetPosY(-100);
	me.print();

	PosSaver pos2;
	pos2.SetMemento(me.SavePos());

	/*move to pos1*/
	cout << "move to pos1:" << endl;
	me.UpdatePos(pos1.GetMemento());
	me.print();

	/*move to pos2*/
	cout << "move to pos2:" << endl;
	me.UpdatePos(pos2.GetMemento());
	me.print();

	return 0;
}