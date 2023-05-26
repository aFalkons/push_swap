echo output con i leaks del programma:
make re
leaks -atExit -- ./push_swap 1 2 3 4 5 6 7 8 9 2147483657
make fclean
