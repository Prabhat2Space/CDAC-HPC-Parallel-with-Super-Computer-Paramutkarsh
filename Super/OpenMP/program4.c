#include<omp.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
int nthreads, tid;
/* fork a team of threads giving them their own copies of variables */
#pragma omp parallel private(nthreads, tid) num_threads(4)
{
	/*Obtain thread number  */

	#pragma omp parallel

	tid = omp_get_thread_num();
	printf("Hello world from thread = %d\n", tid);
/* Only master thread does this */
	if (tid == 0)

	{	nthreads = omp_get_thread_num();
		printf("Number of threads  = %d\n",nthreads);
}
}	/* All threads join master thread*/
}
