State.o:  State.cpp State.h
	g++ -g -Wall -c State.cpp
Melda.o:  Melda.cpp melda.h
	g++ -g -Wall -c Melda.cpp
Display.o:  display.cpp 
	g++ -g -Wall -c display.cpp
Update.o: update.cpp
	g++ -g -Wall -c update.cpp

app1.o: app1.cpp
	g++ -g -Wall -c app1.cpp

app3.o: app3.cpp
	g++ -g -Wall -c app3.cpp
    g++ -g -Wall app3.o /usr/local/cs/cs251/react.o -lcurl	

tester:  State.o Display.o Update.o Melda.o app1.o app3.o
	g++ -g -Wall State.o Display.o Update.o Melda.o app1.o app3.o -o tester

