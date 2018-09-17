#include <iostream>

int main()
{
    std::cout << "/*";                // Legal
    std::cout << "*/";                // Legal
    std::cout << /* "*/" */;        // Illegal
    std::cout << /* "*/" /* "/*" */;  // Legal

    return 0;
}
