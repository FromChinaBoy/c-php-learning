#include<stdio.h>
int main(){
	struct _s{
		char a;
		unsigned int b;
		unsigned long c;
		void* d;
		unsigned int e;
		char* f;
	} s;
	s.a = 'a';
	s.b = 1;
	s.c = 2;
	s.d = NULL;
	s.e = 3;
	s.f = &s.a;

	printf("size of struct s is %lu\n",sizeof(s));
	return 1;
}
