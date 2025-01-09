#include <stdio.h>  // Include the standard input-output library

// Function to open a file and read its content
void openFile() {
    // File pointer for the input file
    FILE* input_file;

    // Specify the full path for the input file
    const char* file_path = "C:\\Users\\patha\\source\\repos\\C_AdvancedComputing_FileHandling\\x64\\Debug\\destination_file.bin";

    // Open the file in binary read mode ("rb")
    // fopen_s is a safer version of fopen, used here to open the file in read mode
    // If fopen_s returns a non-zero value, it means there was an error opening the file
    if (fopen_s(&input_file, file_path, "rb") != 0) {
        printf("Error: Cannot open the file.\n");  // Print an error message if the file can't be opened
        return;  // Exit the function if file opening fails
    }

    // Buffer to hold the content read from the file
    char buffer[256]; // Define a character array (buffer) to store the file content

    // Read the content of the file into the buffer
    // fread reads up to (sizeof(buffer) - 1) bytes of data from the file into the buffer
    // The function returns the number of bytes successfully read
    size_t bytes_read = fread(buffer, 1, sizeof(buffer) - 1, input_file);

    // Null-terminate the buffer to treat it as a string
    buffer[bytes_read] = '\0'; // Ensure that the buffer is null-terminated

    // Print the content read from the file
    printf("File content:\n%s\n", buffer);

    // Close the file after reading to release resources
    fclose(input_file);

    // Return from the function (0 is typically used for successful completion in the main function, but here it's void, so no need for a return value)
    return;
}

// The main function could be added here to call openFile() if needed
// int main() {
//     openFile();  // Call the function to open the file and read from it
//     return 0;  // Return 0 to indicate successful execution of the program
// }
