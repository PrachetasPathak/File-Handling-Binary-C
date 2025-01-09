#include <stdio.h>  // Include the standard input-output library

// Function declarations
void createFile();  // Declaration of the createFile function (defined in Create the File.c)
void openFile();    // Declaration of the openFile function (defined in OpenFile.c)
void DeleteFile();  // Declaration of the DeleteFile function (defined in DeleteFile.c)


int main() {
    // Call the createFile function to create and write to the file
   createFile();  // This function will create the file and write the specified content to it

    // Call the openFile function to read and display the content of the file
   openFile();  // This function will open the file and read its content to display it on the console

 

    // Call the DeleteFile function to delete the specified file
    DeleteFile();  // This function will delete the file that was created and read earlier

    return 0;  // Return 0 to indicate successful execution of the program
}
