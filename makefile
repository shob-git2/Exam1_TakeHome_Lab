main_comparison: main.o compare.o
	g++ -o main_comparison "main.o" "compare.o"

main.o: main.cpp
	g++ -c main.cpp -o "main.o"

compare.o: compare.cpp
	g++ -c compare.cpp -o "compare.o"

