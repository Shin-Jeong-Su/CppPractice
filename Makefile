NAME := a.out
CPP := c++
RM := rm -f
CPPFLAGS := -std=c++11
SRCS := CMyString.cpp\
	main.cpp
H := CMyString.h
OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)
%.o: %.cpp $(H)
	$(CPP) $(CPPFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean $(NAME)