	#include<stdio.h>
int main()
{
	double p;
	//convert all input into one SI unit nanosecond
	int memory_acess_time=100;
	long int page_replacement=20000000;
    long int page_empty=8000000;
	float page_replaced_time=0.7;
	float page_remaining_time=1-0.7;
	int maximum_acess_time=200;
	
	//(1-p) is probalitiy of find page fault rate
//	((1-p)*memory_acess_time )+ (page_replaced_time *p *page_replacement)+ (page_remaining_time* p *page_empty)=maximum_acess_time;

int q=page_replaced_time*page_replacement;
int r=page_remaining_time*page_empty;
float s=q+r-100;
p=100/s;

	printf("\nmaximum acceptable page-fault rate for access time is %lf",p);
	printf("\nmaximum acceptable page-fault percentage rate for access time is %lf ",p*100);
	printf("%%");
}
