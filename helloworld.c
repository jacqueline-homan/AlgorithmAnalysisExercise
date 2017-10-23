#include <sys/time.h>
#include <stdio.h>

int main() {
	/* First C program - Algorithm analysis */
	clock_t tic = clock();
	printf("Hello, world! \n");
    clock_t toc = clock();
    struct timeval tv1, tv2;
    gettimeofday(&tv1, NULL);
    gettimeofday(&tv2, NULL);

    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    printf("Total time = %f seconds\n", 
    		(double)(tv2.tv_usec - tv1.tv_usec) / 1000000 + 
    		(double) (tv2.tv_usec - tv1.tv_usec));
	return 0;
}