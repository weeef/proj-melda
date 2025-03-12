In order to compile the game, you must run the following commands. 
Everything is built into app3, previously we had a makefile which compiled all of our other header files.
We ended up ditching most other files in an effort to have something for the final demo day. 

g++ -g -Wall -c app3.cpp
g++ -g -Wall app3.o /usr/local/cs/cs251/react.o -lcurl
ssh username@rns202-5.cs.stolaf.edu
cd ~/sd/GroupProject
/usr/local/cs/cs251/bridge.py

