# makefile for SD23p4
#
#
sd23p4: sd23p4.cpp
	g++ -Wall -g sd23p4.cpp -o ./Build/DEBUG/sd23p4

.PHONY: clean
clean:
	rm ./Build/DEBUG/*


