#include <stdio.h>
#include<klee/klee.h>
#include<assert.h>
#include<stdlib.h>

void check_string(char *buf,int len){
	unsigned int sum =1;
	for(int i=0;i<len;i++){
	sum*=(int)buf[i];
	}
	
	if (sum==257)
		assert(0);
		
	return;
}

int main(int argc, char **argv){
#define SIZE 5
	char buf[SIZE];
	klee_make_symbolic(buf,sizeof(buf),"buf");
	check_string(buf,SIZE);
	return 0;

}
