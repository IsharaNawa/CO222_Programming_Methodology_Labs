#This is the make file for cipher programme

#variable for C complier
CC=gcc

#variable for C compilation flags
CFLAGS=-Wall

#variable for the name of the progamme
NAME=cipher

#Specifying dependencies of the programme
CSRC = cipher.c vigenere.c
HSRC = vigenere.h
OBJ = $(CSRC:.c=.o)	

#Target for the main programme
$(NAME) : $(OBJ)
	 $(CC) -o $(NAME) $(OBJ)

#Target for the object file 	
cipher.o : %o:%c $(HSRC)
	$(CC) $(CFLAGS) -c $<

#Target for the object file
vigenere.o : %o:%c $(HSRC)
	$(CC) $(CFLAGS) -c $<

#Creating the phony target clean
.PHONY : clean
clean :
	rm -f $(OBJ)

#Creating the phony target clobber
.PHONY : clobber	
clobber :
	rm -f $(OBJ)
	rm -f $(NAME)

#Creating the phony target test
.PHONY : test
test :
	./$(NAME)<test.dat

#End of the Makefile
	