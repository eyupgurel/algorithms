// hanoitowers.h : Include file for standard system include files,
// or project specific include files.

#pragma once

// TODO: Reference additional headers your program requires here.
#include <iostream>
#include <vector>
#include <string>

class hanoi_towers
{
private:
	void move(char * r1, char * d, char * r2, std::vector<int>tower) const;
public:
	explicit hanoi_towers(const int height);
	std::vector<int> tower;
	void move(char * r1, char * d, char * r2) const;

};