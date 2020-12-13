#pragma once
#include <iostream>

#include <string>
using namespace std;
class Candidate
{
public:
	int vote;
	string name;	
};

class Elections
{
	double sum = 0;
public:	
	Candidate arr[5];
	void Set_candidates();
	void Get_candidates();
	void Get_Winner();
};

