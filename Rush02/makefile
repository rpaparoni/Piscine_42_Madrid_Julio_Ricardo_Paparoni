NAME = rush-02                                                                                 
SOURCES = main.c check.c search.c combination.c trio.c                                            
OBJECTS = $(SOURCES:.c=.o)                                                  
                                                                                 
CC = cc                                                                         
CFLAGS = -Wall -Wextra -Werror                                                  
INCLUDE = -I include                                                            
RM = rm -rf                                                                     

all: $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $(NAME) $(OBJECTS)                        

clean:                                                                          
	$(RM) $(OBJECTS)
		
fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean                               	
