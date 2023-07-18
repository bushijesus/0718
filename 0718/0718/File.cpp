#include "stdafx.h"
#include "File.h"
#include <fstream>
#include <string>
#include <string.h>


File::File(const char * filename)
{
	this->filename = filename;
	fopen_s(&fp, filename, "w");
}

void File::writeFile(char * s)
{
	if (fp)
	{
		fputs(s, fp);
	}
}
File::~File()
{
	if (fp)
	{
		fclose(fp);
	}
}
