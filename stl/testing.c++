#include <iostream>
#include <fstream> // For file handling

int main()
{
    // Define variables
    int x = 2, y = 3;
    int sum = x + y;

    // Display the output
    std::cout << "The sum of " << x << " and " << y << " is: " << sum << std::endl;

    // Create and open a file
    std::ofstream outFile("output.txt");

    // Check if the file is open
    if (outFile.is_open())
    {
        outFile << "The sum of " << x << " and " << y << " is: " << sum << std::endl;
        outFile.close(); // Close the file
        std::cout << "Result has been written to output.txt" << std::endl;
    }
    else
    {
        std::cerr << "Error opening file!" << std::endl;
    }

    return 0;
}
