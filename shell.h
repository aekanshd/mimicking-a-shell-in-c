#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
#include <readline/readline.h> 
#include <readline/history.h>

#define MAXSTRING 100
#define MAXHISTORY 10
#define clear() printf("\033[H\033[J")

void openHelp(void);

void printDir(void);

void init_shell(void);

void execArgsPiped(char**, char**);

void execArgs(char**);

void parseSpace(char*, char**);

int takeInput(char*);

int processString(char* str, char**, char**);

int parsePipe(char*, char**);

int ownCmdHandler(char**);