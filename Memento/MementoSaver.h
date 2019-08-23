#pragma once
#include <memory>
#include "PosMemento.h"
#include "SizeMemento.h"

class SizeSaver
{
public:
	SizeSaver() {};
	~SizeSaver() {};

	void SetMemento(std::shared_ptr<SizeMemento> mem) {
		m_memento = mem;
	}
	std::shared_ptr<SizeMemento> GetMemento() {
		return m_memento;
	}
private:
	std::shared_ptr<SizeMemento> m_memento;
};

class PosSaver
{
public:
	PosSaver() {};
	~PosSaver() {};

	void SetMemento(std::shared_ptr<PosMemento> mem) {
		m_memento = mem;
	}
	std::shared_ptr<PosMemento> GetMemento() {
		return m_memento;
	}
private:
	std::shared_ptr<PosMemento> m_memento;
};