#include <stdio.h>  // Include the standard input-output library

// Function to create a file and write specific content to it
void createFile() {

    // File pointer for the output file
    FILE* output_file;

    // Specify the full path for the output file
    const char* file_path = "C:\\Users\\patha\\source\\repos\\C_AdvancedComputing_FileHandling\\x64\\Debug\\destination_file.bin";

    // Create a new file or open an existing file in binary write mode ("wb")
    // fopen_s is a safer version of fopen, used here to open the file
    // If fopen_s returns a non-zero value, it means there was an error opening the file
    if (fopen_s(&output_file, file_path, "wb") != 0) {
        printf("Error: Cannot create or open the file.\n");  // Print an error message if the file can't be opened
        return;  // Exit the function if file opening fails
    }

    // Define the text to write to the file
    const char* text = "Hii. This is Prachetas Pathak. This is the file created by me to implement the FILE HANDLING PROCESS. Thank You";

    // Write the text to the file using fprintf
    // %s is a format specifier used to write a string to the file
    fprintf(output_file, "%s", text);

    // The file is created and data is written successfully
    printf("\nFile created and data written successfully!\n");  // Notify the user that the file was created and data was written

    // Close the file after writing to ensure all data is flushed and resources are released
    fclose(output_file);

    // Return from the function (0 is typically used for successful completion in the main function, but here it's void, so no need for a return value)
    return;
}

// The main function could be added here to call createFile() if needed
// int main() {
//     createFile();  // Call the function to create the file and write to it
//     return 0;  // Return 0 to indicate successful execution of the program
// }
