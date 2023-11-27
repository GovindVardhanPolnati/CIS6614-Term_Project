#include"json.h"
#include<klee/klee.h>

int main(int argc,char **argv)
{
	char arr[10];
	klee_make_symbolic(arr,10,"arr");
	klee_assume(arr[9]=='\0');

	json_parse(arr,9);
}
