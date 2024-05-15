
#include<stdio.h>
#include<omp.h>
int main()
{
#pragma omp parallel num_threads(8)
printf("\nWelcome to Universe of HPC\n");
}
