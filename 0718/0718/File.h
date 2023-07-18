#pragma once
#include <string>
#include <stdio.h>
using namespace std;

 class File
 {
 public:
 	File(const char * filename);
 	~File();
 	void writeFile(char * s);
 	FILE* fp;
	const char * filename;
 };

