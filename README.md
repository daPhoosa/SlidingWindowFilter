SlidingWindowFilter
===================

Simple Sliding Filter library designed for the Arduino platform.

Written by Phillip Schmidt


Window size increase by powers of two:
Size Arg | Window Size
	0    |     1 
	1    |     2 
	2    |     4 
	3    |     8 
	4    |     16 
	5    |     32 
	6    |     64 

Only accepts Arduino data type INT

With 16Mhz Arduino this filter requires 8us for any size window

