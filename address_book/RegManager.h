#ifndef _REG_MANAGER_H_
#define _REG_MANAGER_H_

#include "Register.h"

class RegManager
{
protected:
	Register pArray[100];
	int index;

public:
	RegManager();
	void PrintMenu();
	void MakeRegister();
	void Search();
	void List();

	
};

#endif