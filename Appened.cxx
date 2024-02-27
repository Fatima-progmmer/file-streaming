#include <iostream>
#include <fstream>
int main() 
{
    ifstream Fatima("Tanzeela.txt",ios_base::app);
    if (!Fatima)
        cout << "Failed to open file for appending!" << std::endl;
    Fatima << "Hello, world!" << endl;
    Fatima.close();
    return 0;
}
