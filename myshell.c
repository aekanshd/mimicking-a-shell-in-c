#include "shell.h"

int main() 
{ 
	char inputString[MAXSTRING], *parsedArgs[MAXHISTORY]; 
	char* parsedArgsPiped[MAXHISTORY]; 
	int execFlag = 0; 
	init_shell(); 

	do {  
		printDir();  
		if (takeInput(inputString)) 
			continue;
		execFlag = processString(inputString, 
		parsedArgs, parsedArgsPiped); 

		if (execFlag == 1) 
			execArgs(parsedArgs); 

		if (execFlag == 2) 
			execArgsPiped(parsedArgs, parsedArgsPiped); 
	} while (1);
	
	return 0; 
} 