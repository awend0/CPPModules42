#include "Caster.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    Caster(argv[1]).printResult();
    return (0); 
}
