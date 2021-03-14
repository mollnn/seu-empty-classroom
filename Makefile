main.exe:	main.cpp Makefile
	g++ -o main.exe main.cpp -O4

run:		main.exe 
	./main.exe 