a.out : client.o server.o
	gcc server.o client.o -L/usr/include -lreadline -o a.out
client.o : myshell.c shell.h
	gcc -c myshell.c -o client.o
server.o : server.c shell.h
	gcc -c server.c -o server.o