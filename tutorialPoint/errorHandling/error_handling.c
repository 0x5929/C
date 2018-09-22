#include <stdio.h>
#include <stdlib.h>		// has exit function
#include <string.h>		// has strerror function
#include <errno.h>		// used for error handling

extern int errno;		// defined in errno.h

int main(int argc, char **argv) {
	// not to mess with globals
	int errnum;

	FILE *fp;

	fp = fopen("I do not exist.txt", "r");		// produce an error, because we cannot read a file if the file does not exist

	if (fp == NULL){				// function return as NULL, -1 is usually an error, please use docs for reference
		errnum = errno;
		fprintf(stderr, "value of errno, using fprintf: %d\n", errnum);	// this writes to standard error file stream using fprintf
		perror("Error printed by perror");				// this appends : and error string after
		fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
		exit(EXIT_FAILURE);			// exit status failure
	
	}else{
		fclose(fp);
		exit(EXIT_SUCCESS);			// exit status success
	}

	return 0;
}
