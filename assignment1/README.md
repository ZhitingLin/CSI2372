#require
In this lab assignment, you will experiment with low-level arrays.

Create the source file double_arrays.cpp and the header file double_arrays.h to define some global functions for (mathematical) vector calculations.

Design and implement the global function vectDistance returning a double. The function must calculate the Euclidean distance between two equally sized vectors represented as double arrays of size 10.

Design and implement the global function closetPair returning the pair of low-level arrays (returned as two arrays) that are closest to each other in terms of the Euclidean distance. Your function should accept a variable-sized low-level array of arrays of size 10 doubles. For vector comparisons, make use of the above defined vectDistance function.

Create a main function in a separate file main.cpp where you will need to call the above two functions and print the result to console. Test the vectDistance with the following two vectors (stored as low level arrays): 
0.595500 0.652927 0.606763 0.162761 0.980752 0.964772 0.319322 0.611325 0.012422 0.393489 and 
0.416132 0.778858 0.909609 0.094812 0.380586 0.512309 0.638184 0.753504 0.465674 0.674607 . 
To test closetPair use the following additional 3 vectors: 
0.183963 0.933146 0.476773 0.086125 0.566566 0.728107 0.837345 0.885175 0.600559 0.142238 ,
0.086523 0.025236 0.252289 0.089437 0.382081 0.420934 0.038498 0.626125 0.468158 0.247754 , and
0.969345 0.127753 0.736213 0.264992 0.518971 0.216767 0.390992 0.242241 0.516135 0.990155 . 
Note that your function closetPair must be written to accept an arbitrary number of the double arrays of size 10.