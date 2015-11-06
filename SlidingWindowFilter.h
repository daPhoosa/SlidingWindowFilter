/*
  SlidingWindowFilter.h 
  Copyright (c) 2013 Phillip Schmidt.  All right reserved.
 
	!!! All data must be type INT.  !!!
 */

#ifndef SlidingWindowFilter_h

	#define SlidingWindowFilter_h

	#include "Arduino.h"

	class SlidingWindowFilter
	{
	
		public: 
			SlidingWindowFilter(byte size, int seed);
			int in(int value);
			int out();
		
		
		//private:
			byte filterWindowSize;	// number of samples in sliding window	
			byte OldestDataPoint;	// oldest data point location	
			byte shiftOffset;
			
			int * DataList;			// array for data	
			int currentResult;		// most recent result

			long dataSum;				// total of all current samples
	};

#endif
