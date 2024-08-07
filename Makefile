NAME:=a.out
CPP=c++
SRCS:=CMyString.cpp\
	main
H:=CMyString.h
OBJS=$(SRCS:.cpp=.o)
$(NAME) : $(OBJS)
	$(CPP) $^ -o $(NAME)
.o: $(SRCS) $(H)
	$(CPP) $< -o $@
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : clean fclean