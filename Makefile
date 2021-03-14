main.exe:	main.cpp
	g++ -o main.exe main.cpp -g 

run:		main.exe 
	./main.exe 