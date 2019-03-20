#include <Vector.hpp>
#include <iostream>
int main()
{
    Vector<int> v{{1, 2, 3}};
    Vector<int> u{{10, 20, 30}};
    
    Vector<int> w=v+u;
    int w0=11,
        w1=22,
        w2=33;

    if(w[0]==w0 && w[1]==w1 && w[2]==w2)
        return 0;
    else
    {
        return -1;
    }
    
}