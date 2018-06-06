#include "CPU.h"

#include <iostream>

int main()
{

	BYTE* memory = new BYTE[0x102];
	memory[0x100] = 0x06;
	memory[0x101] = 0xAA;

	CPU cpu(memory);

	std::cout << std::hex;

	*cpu.B = 0xFF;
	std::cout << "B: " << (int)*cpu.B << std::endl;

	std::cout << "B: " << (int)*cpu.B << std::endl;

	cpu.ExecOpCode();

	std::cout << "B: " << (int)*cpu.B << std::endl;

	char c;
	std::cin >> c;

    return 0;
}

