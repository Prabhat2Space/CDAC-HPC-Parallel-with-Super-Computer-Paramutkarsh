#include<stdio.h>
#include<omp.h>
int main()
{
#pragma omp parallel
printf("\nWelcome to Universe of HPC\n");
}
