test: stack_client.o stackADT2.o
	gcc -o test stack_client.o stackADT2.o
stack_client.o: stack_client.c stackADT2.h
	gcc -c stack_client.c
stackADT2: stackADT2.c stackADT2.h
	gcc -c stackADT2.c
