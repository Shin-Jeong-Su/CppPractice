NAME := a.out
CPP := c++
RM := rm -f

SRCS := CMyString.cpp\
	main.cpp
H := CMyString.h
OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)
%.o: %.cpp $(H)
	$(CPP) -c $< -o $@
clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean $(NAME)