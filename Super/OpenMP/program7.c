#include<stdio.h>
#include<sys/time.h>
#include<omp.h>
#include<stdlib.h>

/* Main Program */

int main(int argc, char **argv)
{
	int NoofRows_A, NoofCols_A, NoofRows_B, NoofCols_B,i,j,k,Noofthreads;
	float **Matrix_A, **Matrix_B, **Result, **Checkoutput, flops;
	
	struct timeval TimeValue_Start;
	struct timezone TimeZone_Start;

	struct timeval TimeValue_Final;
	struct timezone TimeZone_Final;
	long time_start, time_end;
	double time_overhead;

	printf("\n\t\t---------------------------------------------------------------------------------------");

	printf("\n\t\t Centre for Development Of Advance Universe (C-DAU)");
	printf("\n\t\t---------------------------------------------------------------------------------------");
	printf("\n\t\t Objective : Dense Matrix Computations (floating Points Operations)\n");

/* checking for command line arguments */

	if( argc != 6){
	printf("\t\t Very Few Arguments\n");
	printf("\t\t Syntax : exec <Threads> <NoOfRows A> <NoOfCols A> <NoOfRows B> <NoOfCols B>\n");
	exit(-1);
}

Noofthreads=atoi(argv[1]);
NoofRows_A=atoi(argv[2]);
NoofCols_A=atoi(argv[3]);
NoofRows_B=atoi(argv[2]);
NoofCols_B=atoi(argv[3]);


