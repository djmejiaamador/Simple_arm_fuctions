#include <stdio.h>
int fib_iter_c(int n){

  int rv = 0;

  if(n == 0){
    rv = 0;
  }else if (n == 1){
    rv = 1;
  }else{

    //printf("n is %d\n", n);
    int i;
    int size = n;
    int array[n];
    array[0] = 0;
    array[1] = 1;
    for(i = 2; i < n+1 ; i++ ){
      array[i] = array[i-1] + array[i-2];
      // printf("index is:%d\n array at i is %d\n", i,array[i]);
    }
    rv = array[n];
  }
  return rv;
}
