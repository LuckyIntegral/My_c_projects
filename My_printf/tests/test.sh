cd ..
make libftprintf.a

cp tests/test_c.c test.c
cc -o test test.c -L . libftprintf.a
./test

cp tests/test_s.c test.c
cc -o test test.c -L . libftprintf.a
./test

cp tests/test_di.c test.c
cc -o test test.c -L . libftprintf.a
./test

cp tests/test_p.c test.c
cc -o test test.c -L . libftprintf.a
./test

cp tests/test_u.c test.c
cc -o test test.c -L . libftprintf.a
./test

cp tests/test_x.c test.c
cc -o test test.c -L . libftprintf.a
./test

cp tests/test_xx.c test.c
cc -o test test.c -L . libftprintf.a
./test

rm test test.c
make fclean
