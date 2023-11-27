#include <stdio.h>
#include<klee/klee.h>
#include<assert.h>
#include<stdlib.h>
#include<time.h>

int get_value_based_on_time(){
	time_t rawtime;
	struct tm timeinfo;
	
	time(&rawtime);
	timeinfo=*(localtime(&rawtime));
	printf("Current local time and date: %s",asctime(&timeinfo));
	klee_make_symbolic(&timeinfo,sizeof(struct tm),"timeinfo");
	if(timeinfo.tm_min==12)
		assert(0);
		
	return 1;
}

int main(){
	return get_value_based_on_time();
}