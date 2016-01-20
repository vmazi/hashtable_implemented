Hi! this is th readme for the hashtable program.
This foulder should have 4 other files, hashtable, hashtable.c, makefile and hashtable.h

hashtable is the runnable binary file that executes the functions in hashtable.c  with the test script in the main of hashtable.c. Run in command line by

hashtable.c contains the functions that are listed in the application as well as a main file which runs a test script to be detailed below
 
hashtable.h is the header file of hashtable.c and contains all function prototypes as well as details on each function.

makefile is the file containing the compile and clean commands. if you which to modify the main method in order to test your own testcases, save over the old hashtable.c and in command line type: make hashtable
This will generate a new runnable binary named hashtable which can be executed. This makefile utilizes a gcc compiler and should run on any unix system.
In order to clean up temporary files, type in command line: make clean

Test Script Explained:

So, the way my program works is that the program generates a root hashtable and allocates memory for it based on user input.

Then to insert elements, the user uses the set() method with its two args, the string key and any arbitrary pointer reference.

In order to access the values, one must either utilize the delete() or get() function. However, these function return an unsigned reference, and so when utilized must be cast to whatever type you are working with

The delete() function deletes the value associated with the given key, returning the value on success or null if the key has no value.

The load()function returns a float value representing the load factor (`(items in hash map)/(size of hash map)`)


Now in order to test my implementation, I did the following:

Create 5 references to strings and store values in them

Create a hashtable of size 4 to test collisions and ability to not overfill

Print current load; should be: 	     		  0
insert an element
Print current load; should be:			  .25	
get and print element; should be: 		  Andrew
insert second element
get and print 2nd element; should be:		    Andy
Print current load; should be:			    .50
insert third element
print second element, should be:	            Andy
Print load, should be:	     			    .75
Insert 4th element with duplicate of 3rd's key:     duplicate
Print load: 	   		  		    .75
Set 4th element with unique key
Print load:					    1.00
Get second element:				    Andy	     
Insert fifth element:				    full
Print first element:				    Andrew
delete first element
print load:					    .75
insert new element with same key that first had
print new first element:			    Sam
Print load:					    1.00

destroy hashtable

exit
