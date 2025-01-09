#include <stdio.h>  // Include the standard input-output library

// Function to delete a specified file
void DeleteFile() {
    // Specify the full path for the file to delete
    const char* file_path = "C:\\Users\\patha\\source\\repos\\C_AdvancedComputing_FileHandling\\x64\\Debug\\destination_file.bin";

    // Attempt to delete the file using the remove function
    // remove() attempts to delete the file specified by file_path
    // If the file deletion fails, remove() returns a non-zero value
    if (remove(file_path) != 0) {
        perror("Error deleting file");  // perror prints a system error message if file deletion fails
        return;  // Exit the function if the file couldn't be deleted
    }

    // Confirm that the file has been deleted successfully
    printf("File deleted successfully!\n");  // Print a message to indicate the file was deleted

    // Return from the function (0 is typically used for successful completion in the main function, but here it's void, so no need for a return value)
    return;
}

// The main function could be added here to call DeleteFile() if needed
// int main() {
//     DeleteFile();  // Call the function to delete the specified file
//     return 0;  // Return 0 to indicate successful execution of the program
// }
