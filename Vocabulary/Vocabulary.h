#pragma once
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

class Vocabulary {
public:
	Vocabulary();
	~Vocabulary();

	map<string, int> vocabWord;

	//void getData();
};

