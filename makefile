a.out : BTP_Alloc.cpp
	g++ BTP_Alloc.cpp

run :
	./a.out
		
clean : 
	rm a.out		
