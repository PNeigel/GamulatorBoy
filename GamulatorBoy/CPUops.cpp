#include "CPU.h"

void CPU::ExecOpCode()
{
	BYTE* opcode = &m_memory[PC];
	switch (*opcode) {
		// manual page 65
		case 0x06:
		{ // LD B,n
			*B = *(opcode+1);
			PC++;
			cycles += 8;
			break;
		}
		case 0x0E:
		{ // LD C,n
			*C = *(opcode + 1);
			PC++;
			cycles += 8;
			break;
		}
		case 0x16:
		{ // LD D,n
			*D = *(opcode + 1);
			PC++;
			cycles += 8;
			break;
		}
		case 0x1E:
		{ // LD E,n
			*E = *(opcode + 1);
			PC++;
			cycles += 8;
			break;
		}
		case 0x26:
		{ // LD H,n
			*H = *(opcode + 1);
			PC++;
			cycles += 8;
			break;
		}
		case 0x2E:
		{ // LD L,n
			*L = *(opcode + 1);
			PC++;
			cycles += 8;
			break;
		}
		// manual page 66
		case 0x7F:
		{ // LD A,A
			//*A = *A;
			cycles += 4;
			break;
		}
		case 0x78:
		{ // LD A,B
			*A = *B;
			cycles += 4;
			break;
		}
		case 0x79:
		{ // LD A,C
			*A = *C;
			cycles += 4;
			break;
		}
		case 0x7A:
		{ // LD A,D
			*A = *D;
			cycles += 4;
			break;
		}
		case 0x7B:
		{ // LD A,E
			*A = *E;
			cycles += 4;
			break;
		}
		case 0x7C:
		{ // LD A,H
			*A = *H;
			cycles += 4;
			break;
		}
		case 0x7D:
		{ // LD A,L
			*A = *L;
			cycles += 4;
			break;
		}
		case 0x7E:
		{ // LD A,(HL)
			*A = m_memory[HL];
			cycles += 8;
			break;
		}
		case 0x40:
		{ // LD B,B
			//*B = *B;
			cycles += 4;
			break;
		}
		case 0x41:
		{ // LD B,C
			*B = *C;
			cycles += 4;
			break;
		}
		case 0x42:
		{ // LD B,D
			*B = *C;
			cycles += 4;
			break;
		}
		case 0x43:
		{ // LD B,E
			*B = *E;
			cycles += 4;
			break;
		}
		case 0x44:
		{ // LD B,H
			*B = *H;
			cycles += 4;
			break;
		}
		case 0x45:
		{ // LD B,L
			*B = *L;
			cycles += 4;
			break;
		}
		case 0x46:
		{ // LD B,(HL)
			*B = m_memory[HL];
			cycles += 8;
			break;
		}
		case 0x48:
		{ // LD C,B
		    *C = *B;
			cycles += 4;
			break;
		}
		case 0x49:
		{ // LD C,C
			//*C = *C;
			cycles += 4;
			break;
		}
		case 0x4A:
		{ // LD C,D
			*C = *D;
			cycles += 4;
			break;
		}
		case 0x4B:
		{ // LD C,E
			*C = *E;
			cycles += 4;
			break;
		}
		case 0x4C:
		{ // LD C,H
			*C = *H;
			cycles += 4;
			break;
		}
		case 0x4D:
		{ // LD C,L
			*C = *L;
			cycles += 4;
			break;
		}
		case 0x4E:
		{ // LD C,(HL)
			*C = m_memory[HL];
			cycles += 8;
			break;
		}
		case 0x50:
		{ // LD D,B
			*D = *B;
			cycles += 4;
			break;
		}
		case 0x51:
		{ // LD D,C
		    *D = *C;
			cycles += 4;
			break;
		}
		// manual page 67
		case 0x52:
		{ // LD D,D
			//*D = *D;
			cycles += 4;
			break;
		}
		case 0x53:
		{ // LD D,E
			*D = *E;
			cycles += 4;
			break;
		}
		case 0x54:
		{ // LD D,H
			*D = *H;
			cycles += 4;
			break;
		}
		case 0x55:
		{ // LD D,L
			*D = *L;
			cycles += 4;
			break;
		}
		case 0x56:
		{ // LD D,(HL)
			*D = m_memory[HL];
			cycles += 8;
			break;
		}
		case 0x58:
		{ // LD E,B
			*E = *B;
			cycles += 4;
			break;
		}
		case 0x59:
		{ // LD E,C
			*E = *C;
			cycles += 4;
			break;
		}
		case 0x5A:
		{ // LD E,D
		    *E = *D;
			cycles += 4;
			break;
		}
		case 0x5B:
		{ // LD E,E
			//*E = *E;
			cycles += 4;
			break;
		}
		case 0x5C:
		{ // LD E,H
			*E = *H;
			cycles += 4;
			break;
		}
		case 0x5D:
		{ // LD E,L
			*E = *L;
			cycles += 4;
			break;
		}
		case 0x5E:
		{ // LD E,(HL)
			*E = m_memory[HL];
			cycles += 8;
			break;
		}
		case 0x60:
		{ // LD H,B
			*H = *B;
			cycles += 4;
			break;
		}
		case 0x61:
		{ // LD H,C
			*H = *C;
			cycles += 4;
			break;
		}
		case 0x62:
		{ // LD H,D
			*H = *D;
			cycles += 4;
			break;
		}
		case 0x63:
		{ // LD H,E
		    *H = *E;
			cycles += 4;
			break;
		}
		case 0x64:
		{ // LD H,H
			//*H = *H;
			cycles += 4;
			break;
		}
		case 0x65:
		{ // LD H,L
			*H = *L;
			cycles += 4;
			break;
		}
		case 0x66:
		{ // LD E,(HL)
			*H = m_memory[HL];
			cycles += 8;
			break;
		}
		case 0x68:
		{ // LD L,B
			*L = *B;
			cycles += 4;
			break;
		}
		case 0x69:
		{ // LD L,C
			*L = *C;
			cycles += 4;
			break;
		}
		case 0x6A:
		{ // LD L,D
			*L = *D;
			cycles += 4;
			break;
		}
		case 0x6B:
		{ // LD L,E
			*L = *E;
			cycles += 4;
			break;
		}
		case 0x6C:
		{ // LD L,H
		    *L = *H;
			cycles += 4;
			break;
		}
		case 0x6D:
		{ // LD L,L
			//*L = *L;
			cycles += 4;
			break;
		}
		case 0x6E:
		{ // LD L,(HL)
			*L = m_memory[HL];
			cycles += 8;
			break;
		}
		case 0x70:
		{ // LD (HL),B
			m_memory[HL] = *B;
			cycles += 8;
			break;
		}
		case 0x71:
		{ // LD (HL),C
			m_memory[HL] = *C;
			cycles += 8;
			break;
		}
		case 0x72:
		{ // LD (HL),D
			m_memory[HL] = *D;
			cycles += 8;
			break;
		}
		case 0x73:
		{ // LD (HL),E
			m_memory[HL] = *E;
			cycles += 8;
			break;
		}
		case 0x74:
		{ // LD (HL),H
			m_memory[HL] = *H;
			cycles += 8;
			break;
		}
		case 0x75:
		{ // LD (HL),L
			m_memory[HL] = *L;
			cycles += 8;
			break;
		}
		case 0x36:
		{ // LD (HL),n
			m_memory[HL] = *(opcode+1);
			PC++;
			cycles += 12;
			break;
		}
		// manual page 68
		case 0x0A:
		{ // LD A,(BC)
			*A = m_memory[BC];
			cycles += 8;
			break;
		}
		case 0x1A:
		{ // LD A,(DE)
			*A = m_memory[DE];
			cycles += 8;
			break;
		}
		case 0xFA:
		{ // LD A,(nn)
			SHORT* nn = (SHORT*)(opcode + 1);
			*A = m_memory[*nn];
			PC += 2;
			cycles += 16;
			break;
		}
		case 0x3E:
		{ // LD A,#
			*A = m_memory[*(opcode+1)];
			PC += 1;
			cycles += 8;
			break;
		}
		// manual page 69
		case 0x47:
		{ // LD B,A
			*B = *A;
			cycles += 4;
			break;
		}
		case 0x4F:
		{ // LD C,A
			*C = *A;
			cycles += 4;
			break;
		}
		case 0x57:
		{ // LD D,A
			*D = *A;
			cycles += 4;
			break;
		}
		case 0x5F:
		{ // LD E,A
			*E = *A;
			cycles += 4;
			break;
		}
		case 0x67:
		{ // LD H,A
			*H = *A;
			cycles += 4;
			break;
		}
		case 0x6F:
		{ // LD L,A
			*L = *A;
			cycles += 4;
			break;
		}
		case 0x02:
		{ // LD (BC),A
			m_memory[BC] = *A;
			cycles += 8;
			break;
		}
		case 0x12:
		{ // LD (DE),A
			m_memory[DE] = *A;
			cycles += 8;
			break;
		}
		case 0x77:
		{ // LD (HL),A
			m_memory[HL] = *A;
			cycles += 8;
			break;
		}
		case 0xEA:
		{ // LD (nn),A
			SHORT* nn = (SHORT*)(opcode + 1);
			m_memory[*nn] = *A;
			PC += 2;
			cycles += 16;
			break;
		}
		// manual page 70
		case 0xF2:
		{ // LD A,(C)
			*A = m_memory[0xFF00 + *C];
			cycles += 8;
			break;
		}
		case 0xE2:
		{ // LD (C),A
			m_memory[0xFF00 + *C] = *A;
			cycles += 8;
			break;
		}
		// manual page 71
		case 0x3A:
		{ // LDD A,(HL)   LD A,(HLD)   LD A,(HL-)
			*A = m_memory[HL];
			HL--;
			cycles += 8;
			break;
		}
		// manual page 72
		case 0x32:
		{ // LDD (HL),A   LD (HLD),A  LD (HL-),A
			m_memory[HL] = *A;
			HL--;
			cycles += 8;
			break;
		}
		// manual page 73
		case 0x2A:
		{ // LDI A,(HL)   LD A,(HLI)   LD A,(HL+)
			*A = m_memory[HL];
			HL++;
			cycles += 8;
			break;
		}
		// manual page 74
		case 0x22:
		{ // LDI (HL),A   LD (HLI),A  LD (HL+),A
			m_memory[HL] = *A;
			HL++;
			cycles += 8;
			break;
		}
		// manual page 75
		case 0xE0:
		{ // LDH (n),A
			BYTE n = *(opcode + 1);
			m_memory[0xFF00+n] = *A;
			PC++;
			cycles += 12;
			break;
		}
		case 0xF0:
		{ // LDH A,(n)
			BYTE n = *(opcode + 1);
			*A = m_memory[0xFF00 + n];
			PC++;
			cycles += 12;
			break;
		}
		// manual page 76
		case 0x01:
		{ // LD BC,nn
			SHORT* nn = (SHORT*)opcode + 1;
			BC = *nn;
			PC += 2;
			cycles += 12;
			break;
		}
		case 0x11:
		{ // LD DE,nn
			SHORT* nn = (SHORT*)opcode + 1;
			DE = *nn;
			PC += 2;
			cycles += 12;
			break;
		}
		case 0x21:
		{ // LD HL,nn
			SHORT* nn = (SHORT*)opcode + 1;
			HL = *nn;
			PC += 2;
			cycles += 12;
			break;
		}
		case 0x31:
		{ // LD SP,nn
			SHORT* nn = (SHORT*)opcode + 1;
			SP = *nn;
			PC += 2;
			cycles += 12;
			break;
		}
		case 0xF9:
		{ // LD SP,HL
			SP = HL;
			cycles += 8;
			break;
		}
		// manual page 77
		case 0xF8:
		{ // LDHL SP,n
			HL = addOperation(SP, *(opcode+1));
			FLAGS.Z = 0;
			FLAGS.N = 0;
			cycles += 12;
			break;
		}


	}
	PC++;
}

SHORT CPU::addOperation(SHORT & A, BYTE & B)
{
	FLAGS.H = ((A & 0xFFF) + (B & 0xFFF)) & 0x1000;

	uint32_t result = (uint32_t)A + (uint32_t)B;
	FLAGS.C = result & 0x10000;

	FLAGS.Z = !(result);
	FLAGS.N = 0;

	return (SHORT)result;
}
