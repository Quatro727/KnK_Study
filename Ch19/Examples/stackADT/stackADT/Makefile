stack_client: stack_client.o stackADT.o
	gcc -o stack_client stack_client.o stackADT.o
stack_client.o: stack_client.c stackADT.h
	gcc -c stack_client.c
stackADT.o: stackADT.c stackADT.h
	gcc -c stackADT.c
