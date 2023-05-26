echo output con i leaks del programma:
make re
echo test1:
leaks -atExit -- ./push_swap 1 2 3 4 5 6 7 8 9 0
echo test2:
leaks -atExit -- ./push_swap 1 2 3 4 5 6 7 8 9 2147483657
echo test3:
leaks -atExit -- ./push_swap 1 2 3 4 2147483657 5 6 7 8 9 
make fclean
