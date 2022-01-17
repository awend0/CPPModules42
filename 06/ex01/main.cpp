#include <iostream>
#include <cstdint>

typedef struct Data
{
    std::string _somestring;
    std::string _someanotherstring;
    short _val;
} Data;

std::ostream &operator<<(std::ostream &os, Data &obj)
{
    os << "Data struct content: " << std::endl
    << "_somestring = " << obj._somestring << std::endl
    << "_someanotherstring = " << obj._someanotherstring << std::endl
    << "_val = " << obj._val << std::endl;
    return (os);
}

uintptr_t serialize(Data *t)
{
    return reinterpret_cast<uintptr_t>(t);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data test;
    test._val = 256;
    test._somestring = "Did I manage to survive after serializing?";
    test._someanotherstring = "Yes I did!";

    std::cout << "size test: " << sizeof(Data) << std::endl;
    std::cout << test;
    uintptr_t ptr = serialize(&test);
    std::cout << ptr << std::endl;
    Data *newData = deserialize(ptr);
    std::cout << *newData;
    return (0);
}
