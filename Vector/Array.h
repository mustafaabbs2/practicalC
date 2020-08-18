#pragma once
#include <array>
#include<iostream>
#include<cstring>
// Sample file for an array class 
template<typename T, size_t S>
class Array
{
public:
    constexpr int size() const {return S;}

    T& operator[](size_t index) //return by reference
    {return m_Data[index];}

   // T* Data {return m_Data;}
 //   const T* Data {return m_Data;}

private:
    T m_Data[S]; //stack allocated array in the end
};