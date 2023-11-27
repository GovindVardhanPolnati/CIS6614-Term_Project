#include "utf8.h"
#include<klee/klee.h>


int main(int argc, char **argv){
	char arr[10];
	klee_make_symbolic(arr,10,"arr");
	klee_assume(arr[9]=='\0');
       
       	char arr1[10];
        klee_make_symbolic(arr1,10,"arr");
        klee_assume(arr1[9]=='\0');

	
	utf8ncasecmp(arr,arr1,9);

}
