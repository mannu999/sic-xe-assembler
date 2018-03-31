#include <bits/stdc++.h>
using namespace std;

map<string, int> static OPTAB = {
	{"ADD", 3},
	{"ADDF", 3},
	{"ADDR", 2},
	{"AND", 3},
	{"CLEAR", 2},
	{"COMP", 3},
	{"COMPF", 3},
	{"COMPR", 2},
	{"DIV", 3},
	{"DIVF", 3},
	{"DIVR", 2},
	{"FIX", 1},
	{"FLOAT", 1},
	{"HIO", 1},
	{"J", 3},
	{"JEQ", 3},
	{"JGT", 3},
	{"JLT", 3},
	{"JSUB", 3},
	{"LDA", 3},
	{"LDB", 3},
	{"LDCH", 3},
	{"LDF", 3},
	{"LDL", 3},
	{"LDS", 3},
	{"LDT", 3},
	{"LDX", 3},
	{"LPS", 3},
	{"MUL", 3},
	{"MULF", 3},
	{"MULR", 2},
	{"NORM", 1},
	{"OR", 3},
	{"RD", 3},
	{"RMO", 2},
	{"RSUB", 3},
	{"SHIFTL", 2},
	{"SHIFTR", 2},
	{"SIO", 1},
	{"SSK", 3},
	{"STA", 3},
	{"STB", 3},
	{"STCH", 3},
	{"STF", 3},
	{"STI", 3},
	{"STL", 3},
	{"STS", 3},
	{"STSW", 3},
	{"STT", 3},
	{"STX", 3},
	{"SUB", 3},
	{"SUBF", 3},
	{"SUBR", 2},
	{"SVC", 2},
	{"TD", 3},
	{"TIO", 1},
	{"TIX", 3},
	{"TIXR", 2},
	{"WD", 3},
	{"+ADD", 4},
	{"+ADDF", 4},
	{"+AND", 4},
	{"+COMP", 4},
	{"+COMPF", 4},
	{"+DIV", 4},
	{"+DIVF", 4},
	{"+J", 4},
	{"+JEQ", 4},
	{"+JGT", 4},
	{"+JLT", 4},
	{"+JSUB", 4},
	{"+LDA", 4},
	{"+LDB", 4},
	{"+LDCH", 4},
	{"+LDF", 4},
	{"+LDL", 4},
	{"+LDS", 4},
	{"+LDT", 4},
	{"+LDX", 4},
	{"+LPS", 4},
	{"+MUL", 4},
	{"+MULF", 4},
	{"+OR", 4},
	{"+RD", 4},
	{"+RSUB", 4},
	{"+SSK", 4},
	{"+STA", 4},
	{"+STB", 4},
	{"+STCH", 4},
	{"+STF", 4},
	{"+STI", 4},
	{"+STL", 4},
	{"+STS", 4},
	{"+STSW", 4},
	{"+STT", 4},
	{"+STX", 4},
	{"+SUB", 4},
	{"+SUBF", 4},
	{"+TD", 4},
	{"+TIX", 4},
	{"+WD", 4},
};

map<string,int> DIRECTIVES = {
	{"START",1},
	{"RESW",1},
	{"RESB",1},
	{"WORD",1},
	{"BYTE",1},
	{"END",1},
	{"BASE",1},
	{"ORG",1},
	{"EQU",1},
	{"LTORG",1}
};

map<string, int> OPCODETAB = {
	{"ADD",0x18},
	{"ADDF",0x58},
	{"ADDR",0x90},
	{"AND",0x40},
	{"CLEAR",0xB4},
	{"COMP",0x28},
	{"COMPF",0x88},
	{"COMPR",0xA0},
	{"DIV",0x24},
	{"DIVF",0x64},
	{"DIVR",0x9C},
	{"FIX",0xC4},
	{"FLOAT",0xC0},
	{"HIO",0xF4},
	{"J",0x3C},
	{"JEQ",0x30},
	{"JGT",0x34},
	{"JLT",0x38},
	{"JSUB",0x48},
	{"LDA",0x00},
	{"LDB",0x68},
	{"LDCH",0x50},
	{"LDF",0x70},
	{"LDL",0x08},
	{"LDS",0x6C},
	{"LDT",0x74},
	{"LDX",0x04},
	{"LPS",0xD0},
	{"MUL",0x20},
	{"MULF",0x60},
	{"MULR",0x98},
	{"NORM",0xC8},
	{"OR",0x44},
	{"RD",0xD8},
	{"RMO",0xAC},
	{"RSUB",0x4C},
	{"SHIFTL",0xA4},
	{"SHIFTR",0xA8},
	{"SIO",0xF0},
	{"SSK",0xEC},
	{"STA",0x0C},
	{"STB",0x78},
	{"STCH",0x54},
	{"STF",0x80},
	{"STI",0xD4},
	{"STL",0x14},
	{"STS",0x7C},
	{"STSW",0xE8},
	{"STT",0x84},
	{"STX",0x10},
	{"SUB",0x1C},
	{"SUBF",0x5C},
	{"SUBR",0x94},
	{"SVC",0xB0},
	{"TD",0xE0},
	{"TIO",0xF8},
	{"TIX",0x2C},
	{"TIXR",0xB8},
	{"WD",0xDC}
};

map<string, int> REGISTERS{
	{"A",0},
	{"T",5},
	{"B",3},
	{"L",2},
	{"X",1},
	{"S",4},
	{"F",6}
};