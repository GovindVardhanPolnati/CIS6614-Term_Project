#include <stdio.h>
#include<klee/klee.h>
#include<assert.h>
#include<stdlib.h>

void check_string(char *buf,int len){
if(buf[0] == "T" &&
   buf[1] == "E" &&
   buf[2] == "S" &&
   buf[3] == "T"){
	assert(0);
   }
   return;
}

int main(int argc, char **argv){
	char buf[10];
	klee_make_symbolic(buf,sizeof(buf),"buf");
	check_string(buf,10);
	return 0;

}

