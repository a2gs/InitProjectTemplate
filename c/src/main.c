/* Andre Augusto Giannotti Scota (a2gs)
 * andre.scota@gmail.com
 *
 * <Project Name>
 *
 * <License>
 *
 */

/* <file name>
 * <File description>
 *
 *  Who     | When       | What
 *  --------+------------+----------------------------
 *          |            |
 *          |            |
 */


/* *** INCLUDES ************************************************************************ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <fcntl.h>
#include <signal.h>

#include <pthread.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

/*#include <libSample.h>*/

#include "main.h"
#include "src1.h"
#include <libSample.h>


/* *** DEFINES AND LOCAL DATA TYPE DEFINATION ****************************************** */
#define NONE		(0)


/* *** LOCAL PROTOTYPES (if applicable) ************************************************ */


/* *** EXTERNS / LOCAL / GLOBALS VARIEBLES ********************************************* */
int var1        = 1;
static int var2 = 2;


/* *** FUNCTIONS *********************************************************************** */
/* <header function description ONLY for local functions (not in .h)> void function(void)
 *
 * <Description>
 *
 * INPUT:
 *  <None>
 * OUTPUT:
 *  <None>
 */

/* int fLocal(int x, int *y)
 *
 * Copy x+v value to y (address).
 *
 * INPUT:
 *  x - Value to be copied to 'y' address
 * OUTPUT:
 *  y - With 'x' value
 *  OK - Ok execution
 *  NOK - Erro
 */
int fLocal(int x, int *y)
{
	*y = x;

	return(OK);
}


/* int main(int argc, char *argv[])
 *
 * The main function
 *
 * INPUT:
 *  argc - Number of system parameters
 *  argv - System parameters
 * OUTPUT:
 *  0 - Ok to shell
 *  !0 - NOk to shell
 */
int main(int argc, char *argv[])
{
	int x, y;
	typeX_t a;
	typeY_e b;

	x = 13;
	y = 0;
	a.b = 8;
	b = AAA;

	if(a.b == var2 || b == BBB) a.a = "andre";
	else                        a.a = "augusto";

	fLocal(x, &y);

	func(y, &x);

	libFunc(x, var2, &y);

	return(0);
}
