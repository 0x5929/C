#include <stdio.h>

// input is in a form of a file, or from the command line
// output means to display data on screen, printer, or any output file

// C programming treats all devices as files, like file descriptors
// three files are automatically opened when a program executes to provide access to the keyboard and screen
// 1. standard input --> stdin, device: keyboard
// 2. standard output --> stdout, device: screen
// 3. standard error --> stderr, device: screen, unless redirected

int main(int argc, char **argv){
	
	// use scanf and printf if we need to input/output values other than type char or char*
	// otherwise, use getchar() and putchar() for type char, and gets() and puts() for type char*
	// REMEMBNER: gets and scanf is vulnerable to buffer overflow attacks

	char str1[50];
	char str2[50];

	int i;

	printf("Please enter a two word message, and an id: ");

	scanf("%s %s %d", str1, str2, &i);

	printf("\nYou entered: %s, %s, %d\n", str1, str2, i);

	return 0;
}
