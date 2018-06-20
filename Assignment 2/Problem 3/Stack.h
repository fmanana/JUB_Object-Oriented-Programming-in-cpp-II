/*
    CH08-320143
    a2_p3.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include <cstring>

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
        void resize(int size);
        int getSize();
};

template<class T>
Stack<T>::Stack(int size)
{
    arr = new T [size];
    this->size = size;
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

template<class T>
void Stack<T>::resize(int size)
{
    std::cout << "Resizing..." << std::endl;
    if(size < top)
    {
        int i;
        //Create new array
        int* resized_arr = new T [size];
        //Assign the last values of the old array
        //To the new array
         for(i = 0; i < size; i++)
        {
            resized_arr[i] = arr[top-size+i];
        }
        //Delete the old array
        delete[] arr;
        //Reassign the old array
        arr = resized_arr;
        //Changing the value of size
        this->size = size;
    }
    else if(size == top)
    {
        //Do nothing
        return;
    }
    else //Same logic as first if statement
    {
        int i;  
        int* resized_arr = new T [size];
         for(i = 0; i < size; i++)
        {
            resized_arr[i] = arr[i];
        }
        delete[] arr;
        arr = resized_arr;
        this->size = size;
    }
    
}

template<class T>
int Stack<T>::getSize()
{
    std::cout << "The size of the stack is: " << (size) << std::endl;
    return (size);
}