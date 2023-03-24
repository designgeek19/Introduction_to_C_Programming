* Arrays
- declaring/initializing arrays
- acessing arrays with subscripts
- multidimentional arrays

* Files
- reading and writing text files
//
* ARRAYS: they let us store a set of data types in memory
e.g.
	int values[100];
	char names[25];
Arrays can also be used to provide initializers
e.g.
int values[4] = {0, 1, 2, 3};
char greeting[5] = {'h', 'e', 'l', 'l', 'o'};
char name[] = {'p', 'a', 'u', 'l'};
int bigarray[] = {[0] = 1, [1] = 10, [999] = 0}

* Accessing elements in an array:
Note* that arrays are zero based (starts from zero)
more examples of assigning values in arrays:
	int values[100];
	values[23] = 911;
	int j = values[23];
	values[j] = 912;

* Multidimensional arrays:
e.g.
int values[2] [2] ;
int values[2] [2] =
	{{0,1} , {1,0}} ;
int values[2] [2] = {0,1,1,0};
// In the arrays above, the 3rd example does the same thing as the second example.

* Accessing elements in multidimentional arrays:
int i = valies[2][3];  	//row with index 2 and column with index 3
values[0][2] = 1000;	//row 0, column 2 gets the value 1000

*FILES:
-Before you can read or write in a file in C, you have to open it first
	fopen() : is used to open text files and binary files for read/write
	fclose() : close files when finished

* Working with files
- DEBUGGING: dealing with errors:

"errno" error number variable = globally defined integer that is set to the last error code
To access this variable, use "indlude <errno.h> in top of your source file

"ferror()" also returns the error number for the last failed operation

"perror()" prints out the actual description of the error

*Reading from text files
	fscanf() : reads input from files
	fgetc() : reads text files one character at a time
	fgets() : reads a line at a time from a text file
*Writing from text files
	fprintf() : just like printf, it sends only the formatted output to the file
	fputc() : write to text file char at a time
	fputs() : writes to a text file one line at a time
//
Examples:

FILE *fout = fopen{"file_name.csv","w+");
if(fout == NULL) {
	perror("Could not open file_name.csv");
	return;
}

int 1=0;
fprintf(fout,"time, latitude, longitude\n");
for(i=0; i<sample_size; i++) {
	fprintf(fout, "%lld,%f,%f,]n", start_time + (time_inc * i),
		start_lat + (lat_inc * i),
		start_long + (long_inc * i));
}

fclose(fout);

//
1 FILE *fout = fopen{"file_name.csv","w+");
- fopen here means "open the file named "file_name.csv" with a write permission (w+). (It would truncate if the file already exists)
- this first line would lead to a pointer: pointers are identified by * during their declaration.
2. if(fout == NULL) = condition: if the file does not open successfully
3.  perror("Could not open file_name.csv"); = print an error message with the description of the text inside the bracket, along with other details of the error.
4. int 1=0; = if the file opens, assign the init value of i to 0
5. fprintf(fout,"time, latitude, longitude\n"); = print these words inside the file
6. fprintf(fout, "%lld,%f,%f,]n", start_time + (time_inc * i), = the output would be an integer (%lld), followed by two floatin
g point values (%f, %f)
7. fclose(fout); = close out the file when you are done updating it
