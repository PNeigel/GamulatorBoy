#include "CPU.h"

CPU::CPU(BYTE* memory) :
	m_memory(memory)
{
}

std::ostream& operator<<(std::ostream& str, BYTE* byte)
{
	str << (void *)byte;
	return str;
}

std::ostream& operator<<(std::ostream& str, BYTE byte)
{
	str << (int)byte;
	return str;
}