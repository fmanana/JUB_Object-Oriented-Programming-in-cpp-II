/*
    CH08-320143
    a2_p2.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>

template <class T>
class Stack
{
    T *arr;
    int top = 0;
    int size;
    
    public:
        //Stack constructor
        Stack(int size = 10);
        Stack(const Stack&);
        ~Stack(){delete[] arr;}; //Destructor
        //Methods
        bool push(T element);
        bool pop(T &out);
        T back(void);
        int getNumEntries();
};

template<class T>
Stack<T>::Stack(int size)
{
    arr = new T [size];
}

template<class T>
bool Stack<T>::push(T element)
{
    //Checking to see if the array is full
    if(top > 9)
    {
        std::cout << "Failed to push!" << std::endl;
        return false;
    }
    else
    {
        arr[top++] = element;
        std::cout << "Pushing: " << element << std::endl;
        return true;
    }
}

template<class T>
bool Stack<T>::pop(T &out)
{
    if(top < 0)
        {
            std::cout << "Failed to pop!" << std::endl;
            return false;
        }
    
    else
    {
        out = arr[--top];
        std::cout << "Popping: " << out << std::endl;
        return true;
    }
}

template<class T>
T Stack<T>::back(void)
{
    std::cout << "The last element: " << arr[top-1] << std::endl;
    return (arr[top-1]);
}

template<class T>
int Stack<T>::getNumEntries()
{
    std::cout << "Number of elements: " << top << std::endl;
    return (top);
}