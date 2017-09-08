#include <string.h>
#include <stdio.h>

//strstr 
int find_str_c(char * s, char *sub){
  int i;
  int sub_i;
  int sub_is_there = 0;// bool flag
  int char_is_there = 0; // bool flag
  int rv =  -1;

  for(i = 0; s[i] != '\0'; i++){
    printf("i is %d\n", i);
    sub_i = 0;
    if( s[i] == sub[sub_i] ){
      sub_is_there = 1;
      printf(" first char matches\n");
      sub_i++; 
      int temp = i;
      for(sub_i; sub[sub_i] != '\0'; sub_i++ ){
	if( sub[sub_i] ==  s[temp+1] ){
	  sub_is_there = 1 ;
	}else{
	  sub_is_there = 0;
	  break;
	}
	temp++;	
      }
    }
    if(sub_is_there == 1){
      rv  = i;
      break;
    }
  }
  return rv;
}
	
