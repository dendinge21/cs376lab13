/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>
#include <string.h>
/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  if(argc == 2){
	char* c = 0;
	c = argv[1];
	
	if(isdigit(*c) > 0) {
		robotPrintAscii();
	}
  }
  else {
  robotPrintAscii();
  dalekPrintAscii();
  robotPrintMessage();
  }
  return 0;
}
