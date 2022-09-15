CC=g++

#lab 2

exercise2-1.5: Exercise2/exercise2-1.5.cpp
	$(info Building exercise2-1.5)
	$(CC) Exercise2/exercise2-1.5.cpp -o Exercise2/exercise2-1.5 

exercise2-1.11-while: Exercise2/exercise2-1.11-while.cpp
	$(info Building exercise2-1.11-while)
	$(CC) Exercise2/exercise2-1.11-while.cpp -o Exercise2/exercise2-1.11-while 

exercise2-1.11-for: Exercise2/exercise2-1.11-for.cpp
	$(info Building exercise2-1.11-for)
	$(CC) Exercise2/exercise2-1.11-for.cpp -o Exercise2/exercise2-1.11-for 
