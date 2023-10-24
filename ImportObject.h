#include <SDL.h>
#include <stdio.h>
#include <list>
#include "ImportComponent.h"
#pragma once
using namespace std;
class ImportObject
{
public:
	ImportObject();
	~ImportObject();
private:
	list<ImportComponent> components;
};

