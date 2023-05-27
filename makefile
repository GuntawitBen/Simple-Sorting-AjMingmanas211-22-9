compile: main.cpp 
	 g++  main.cpp -o bubble

compileSelection: main_selection.cpp 
	 g++  main_selection.cpp -o selection

runSelection: selection
	  ./selection

run: bubble
	 ./bubble 5 6 7 3 2


clean: bubble
	 rm bubble
