#include <stdio.h>
#include<klee/klee.h>
#include<assert.h>
#include<stdlib.h>

void check_string(char *buf){
	if (strcmp(buf,"KLEE_IS_COOL")==0)
		assert(0);
	return;
}

int main(int argc,char **argv){
#define SIZE 20
	char buf[SIZE];
	klee_make_symbolic(buf,sizeof(buf),"buf");
	klee_assume(buf[SIZE-1]=="\0");
	check_string(buf);
	return 0;
}