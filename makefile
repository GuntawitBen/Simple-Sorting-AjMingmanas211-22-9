compilebubble: mainbubble.cpp 
	 g++  mainbubble.cpp -o bubble

compileinsertion: maininsertion.cpp 
	 g++  maininsertion.cpp -o insertion

compileselection: mainselection.cpp 
	 g++  mainselection.cpp -o selection

runbubble: bubble
	./bubble 1 3 4 5 7 6 2

runinsertion: insertion
	./insertion 1 3 4 5 7 6 2

runselection: selection
	./selection 1 3 4 5 7 6 2

clean: bubble
	 rm bubble
