#include "Array.h"

int main()

{   int size = 5;
    Array<int,5> data;

    //std::cout<<data.size();

    memset(&data[0], 0, data.size()*sizeof(int));

    data[1] = 5;

    for (size_t i=0 ; i<data.size(); i++)
    { std::cout<<data[i]<<std::endl; }
}