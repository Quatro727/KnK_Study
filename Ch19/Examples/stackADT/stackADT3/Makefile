test: stack_client.o stackADT3.o
	gcc -o test stack_client.o stackADT3.o
stack_client.o: stack_client.c stackADT3.h
	gcc -c stack_client.c
stackADT3.o: stackADT3.c stackADT3.h
	gcc -c stackADT3.c

