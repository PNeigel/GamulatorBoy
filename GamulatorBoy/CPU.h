#pragma once

#include <iostream>

typedef unsigned char BYTE;
typedef unsigned short int SHORT;

struct Flags {
	bool Z;
	bool N;
	bool H;
	bool C;
};

class CPU {
	public:

		CPU(BYTE* memory);

		void ExecOpCode();

		BYTE* m_memory;

		// Registers
		
		SHORT AF;
		SHORT BC;
		SHORT DE;
		SHORT HL;

		SHORT SP;
		SHORT PC = 0x100;

		BYTE* const A = (BYTE*)&AF + 1;
		BYTE* const F = (BYTE*)&AF;
		BYTE* const B = (BYTE*)&BC + 1;
		BYTE* const C = (BYTE*)&BC;
		BYTE* const D = (BYTE*)&DE + 1;
		BYTE* const E = (BYTE*)&DE;
		BYTE* const H = (BYTE*)&HL + 1;
		BYTE* const L = (BYTE*)&HL;

		int cycles = 0;

		Flags FLAGS;

	private:

		SHORT addOperation(SHORT& A, BYTE& B);
		
};
