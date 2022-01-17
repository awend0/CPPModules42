#include "Array.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        unsigned int len = atoi(argv[1]);
        if (len < 0)
            return (1);

        Array<int> arrA(len);
        for (unsigned int i = 0; i < len; i++)
            arrA[i] = i;
        
        Array<int> arrB(arrA);
        Array<int> arrC = arrA;

        for (unsigned int i = 0; i < len; i++)
            arrA[len - i - 1] = i;

        std::cout << "A\t|\tB\t|\tC" << std::endl;
        for (unsigned int i = 0; i < len; i++)
            std::cout << arrA[i] << "\t|\t" << arrB[i] << "\t|\t" << arrC[i] << std::endl;
    }
    else
    {
        Array<int> arrInt(5);
        arrInt[0] = 0;
        arrInt[1] = 1;
        arrInt[2] = 2;
        arrInt[3] = 3;
        arrInt[4] = 4;
        Array<float> arrFloat(5);
        arrFloat[0] = 0.0;
        arrFloat[1] = 0.1;
        arrFloat[2] = 0.2;
        arrFloat[3] = 0.3;
        arrFloat[4] = 0.4;
        Array<std::string> arrStr(5);
        arrStr[0] = "Hello";
        arrStr[1] = "my";
        arrStr[2] = "name";
        arrStr[3] = "is";
        arrStr[4] = "mraymun";

        std::cout << "Int\t|\tFloat\t|\tString" << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << arrInt[i] << "\t|\t" << arrFloat[i] << "\t|\t" << arrStr[i] << std::endl;

        Array<int> testOutOfBounds(10);
        try
        {
            std::cout << testOutOfBounds[10] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            std::cout << testOutOfBounds[-5] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
