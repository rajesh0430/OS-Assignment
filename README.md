# OS-Assignment
 1. Design a file-copying program named filecopy using ordinary pipes. This program will 
be passed two parameters: the name of the file to be copied and the name of the copied 
file. The program will then create an ordinary pipe and write the contents of the file to be 
copied to the pipe. The child process will read this file from the pipe and write it to the 
destination file. For example, if we invoke the program as follows: 
filecopy input.txt copy.txt 
The file input.txt will be written to the pipe. The child process will read the contents of 
this file and write it to the destination file copy.txt.

2. Consider a scenario of demand paged memory. Page table is held in registers. It takes 8 
milliseconds to service a page fault if an empty page is available or the replaced page is 
not modified and 20 milliseconds if the replaced page is modified. Memory access time is 
100 nanoseconds. Assume that the page to be replaced is modified 70 percent of the time. 
Generate a solution to find maximum acceptable page-fault rate for access time that is not 
more than 200 nanoseconds.
