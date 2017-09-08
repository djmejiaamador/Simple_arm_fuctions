# Add new .o files to OBJS list here
OBJS=driver.o sum_a.o sum_c.o sum_array_a.o sum_array_c.o find_max_c.o find_max_a.o fib_rec_c.o  fib_iter_c.o  find_str_c.o  fib_rec_a.o fib_iter_a.o

all: driver

driver.o: driver.c
	gcc -c -o driver.o driver.c

driver: $(OBJS)
	gcc -o driver $(OBJS)

sum_a.o: sum_a.s
	as -o sum_a.o sum_a.s

sum_c.o: sum_c.c
	gcc -c -o sum_c.o sum_c.c

sum_array_a.o: sum_array_a.s
	as -o sum_array_a.o sum_array_a.s

sum_array_c.o: sum_array_c.c
	gcc -c -o sum_array_c.o sum_array_c.c

find_max_c.o: find_max_c.c
	gcc -c -o find_max_c.o find_max_c.c

find_max_a.o: find_max_a.s
	as -o find_max_a.o find_max_a.s

fib_rec_c.o: fib_rec_c.c
	gcc -c -o fib_rec_c.o fib_rec_c.c

fib_rec_a.o: fib_rec_a.s
	as -o fib_rec_a.o fib_rec_a.s

fib_iter_c.o: fib_iter_c.c
	gcc -c -o fib_iter_c.o fib_iter_c.c


fib_iter_a.o: fib_iter_a.s
	as -o fib_iter_a.o fib_iter_a.s


find_str_c.o: find_str_c.c
	gcc -c -o find_str_c.o find_str_c.c

# Add more .s and .c files here

clean:
	rm -rf $(OBJS) driver
