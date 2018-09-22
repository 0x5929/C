#include <stdio.h>

// file input and output

int main(int argc, char **argv){
	// open a file
	// first arg is the path, and second arg is the access mode: 
	// reference please see : https://www.tutorialspoint.com/cprogramming/c_file_io.htm
	
	FILE *wfp;
	wfp = fopen("/tmp/testfile.txt", "w+");

	// writing to a file
	// fputc writes one char, fputs writes a full string, fprintf writes string with format
	
	fprintf(wfp, "This is testing for fprintf...\n");
	fputs("This is a test for fputs...\n", wfp);
	
	// close a working write file
	fclose(wfp);

	
	// reading to a file
	// fgetc reads one char, fgets reads string until \n, and fscanf reads string until space
	// remember the file pointer will always start at the beginning of file, and point to the current character read
	// so the example below will have three different read calls but will terminate and start and point again at the terminated read character
	FILE *rfp;
	char buff[255];

	rfp = fopen("/tmp/testfile.txt", "r");
	
	fscanf(rfp, "%s", buff);
	printf("fscanf reads:  %s\n", buff);

	fgets(buff, 255, rfp);
	printf("fgets reads: %s\n", buff);


	fgets(buff, 255, rfp);
	printf("second fgets reads: %s\n", buff);


	
	// BINARY INPUT OUTPUT FUNCTIONS
	// size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
              
	// size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
	// REFERENCE: https://www.tutorialspoint.com/cprogramming/c_file_io.htm
	return 0;
}
