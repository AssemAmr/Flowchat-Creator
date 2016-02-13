#ifndef AddVariableAssign_H
#define AddVariableAssign_H

#include "Action.h"
#include "StatementAction.h"
#include "..\Statements\VariableAssign.h"

//Add Variable Assignment Statement Action
//This class is responsible for 
// 1 - Getting Assignment stat. coordinates from the user
// 2 - Creating an object of Assignment class and fill it parameters
// 3 - Adding the created object to the list of statements
class AddVariableAssign : public StatementAction
{
public:
	AddVariableAssign(ApplicationManager *pAppManager);

	//Read Assignemt statements position
	virtual void ReadActionParameters();

	//Create and add an assignemnt statement to the list of statements
	virtual void Execute();
};

#endif