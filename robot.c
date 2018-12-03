/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
<<<<<<< HEAD
 * @author Samuel Lemly, Tanya L. Crenshaw, Nathan Schmedake
=======
 * @author Ben Pirkl
>>>>>>> 1f6504750ca2ccaf94b2d0d0f79e0c5866f3e8ac
=======
 * @author Tanya L. Crenshaw, Nathan Schmedake, Olivia Dendinger
>>>>>>> 2e254262f4439c2bb302e92b3718ed6c0c9ef606
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really love robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "UWR: Unidentified Wheeled Robot\n"
<<<<<<< HEAD
	 "%s    i_i    \n"
<<<<<<< HEAD
	 "%s   [U_U]   \n"
=======
	 "%s   [u3u]   \n"
	 "%s  /|-_-|\\ \n"
>>>>>>> 1f6504750ca2ccaf94b2d0d0f79e0c5866f3e8ac
=======
	 "%s    o_o    \n"
	 "%s   [@_@]   \n"
>>>>>>> 2e254262f4439c2bb302e92b3718ed6c0c9ef606
	 "%s  /|___|\\ \n"
>>>>>>> 2e254262f4439c2bb302e92b3718ed6c0c9ef606
	 "%s   d   b   \n",blank, blank, blank, blank);

  blank = blank - 10;
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (0)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
