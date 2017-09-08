#include <stdio.h>

/* Put function prototypes for ARM assembly code and corresponding C code here */
int sum_a(int a, int b);
int sum_c(int a, int b);

int sum_array_c(int *array, int i);
int sum_array_a(int *array, int i);

int find_max_c(int *array, int n);
int find_max_a(int *array, int n);

int fib_rec_c(int n);
int fib_rec_a(int n);

int fib_iter_c(int n);
int fib_iter_a(int n);

int find_str_c(char * s, char *sub);
//int find_str_a(char *s, char *sub);

  
/* Put test functions here */

void test_sum(void)
{
    printf("sum_a(0, 0) = %d [%d]\n", sum_a(10,40), sum_a(0,0) == 0);
    printf("sum_c(0, 0) = %d [%d]\n", sum_c(10,40), sum_c(0,0) == 0);    
}

void test_array(void){

  int i;
  int size = 10 ;
  int array[size];

  int value = -1001;
  //negs
  for(i = 0; i<size; i++){

    array[i] =value;
    value++;

  }
  printf("Sum_array_c: %d\n", sum_array_c(array,size));
  printf("Sum_array_a: %d\n", sum_array_a(array,size));

  printf("\n");

  //positive
  value =1000;
  for(i = 0; i<size; i++){

    array[i] =value;
    value++;

  }
  printf("Sum_array_c: %d\n", sum_array_c(array,size));
  printf("Sum_array_a: %d\n", sum_array_a(array,size));
  printf("\n");

  // size 0;
  for(i = 0; i<size; i++){

    array[i] =0;
  }
  printf("Sum_array_c: %d\n", sum_array_c(array,size));
  printf("Sum_array_a: %d\n", sum_array_a(array,size));
  printf("\n");


  // size 1000
  size = 1000;
  int arrayTwo[size];
  for(i = 0; i<size; i++){
    arrayTwo[i] = 10;
    value++;
  }
  printf("Sum_array_c: %d\n", sum_array_c(arrayTwo,size));
  printf("Sum_array_a: %d\n", sum_array_a(arrayTwo,size));
  printf("\n");
}

void test_max(void){

  int size = 10;
  int array[] = {-1020, -5, -6,-3,-43,-1,-23,-10,-32,-102032} ;

  printf("find_max_c: %d\n", find_max_c(array,size));
  printf("find_max_a: %d\n", find_max_a(array,size));
  printf("\n");

  
  int sizeTwo = 10;
  int arrayTwo[] = {0, 5, 6,3,43,1,23,10, 32 ,1} ;

  printf("find_max_c: %d\n", find_max_c(arrayTwo,sizeTwo));
  printf("find_max_a: %d\n", find_max_a(arrayTwo,sizeTwo));
  printf("\n");

  
  int sizeThree = 10;
  int arrayThree[] = {0,0,0,0,0,0,0,0,0,0} ;

  printf("find_max_c: %d\n", find_max_c(arrayThree,sizeThree));
  printf("find_max_a: %d\n", find_max_a(arrayThree,sizeThree));
  printf("\n");

  int i;
  int sizeFour = 1000;
  int arrayFour[sizeFour];
  int value = -500;
  for(i = 0; i<sizeFour; i++){
    arrayFour[i] = value;
    value++;
  }
  printf("find_max_c: %d\n", find_max_c(arrayFour,sizeFour));
  printf("find_max_a: %d\n", find_max_a(arrayFour,sizeFour));
  printf("\n"); 
    
}

void test_fib_rec(void){
  int i;
  for(i = 0; i<20; i++){
    printf("fib_rec_c  %d is: %d\n",i, fib_rec_c(i));
    printf("fib_rec_a  %d is: %d\n",i, fib_rec_a(i));
  }
  printf("\n");
}

void test_fib_iter(void){
  int i;
  for(i = 0; i<20; i++){
    printf("fib_iter_c  %d is: %d\n",i, fib_iter_c(i));
    printf("fib_iter_a  %d is: %d\n",i, fib_iter_a(i));
  }
  printf("\n");
}

void test_find_str(void){
  printf("find_str_cis: %d\n", find_str_c("the meh is word","the meh is word"));
}

int main(int argc, char **argv)
{
    test_sum();
    test_array();
    test_max();
    test_fib_rec();
    test_fib_iter();
    test_find_str();
}
