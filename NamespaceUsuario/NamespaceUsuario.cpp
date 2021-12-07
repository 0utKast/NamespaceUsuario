#include <iostream>

namespace primero // define un namespace llamado primero
{
    // Este hacerAlgo() pertenece al namespace primero
    int hacerAlgo(int x, int y)
    {
        return x + y;
    }
}

namespace segundo // define un namespace llamado segundo
{
    // Este hacerAlgo() pertenece al namespace segundo
    int hacerAlgo(int x, int y)
    {
        return x - y;
    }
}


int main()
{
    std::cout << primero::hacerAlgo(4, 3) << '\n'; // usa el hacerAlgo() que existe en el namespace primero
    return 0;
}















/*#include <iostream>

int hacerAlgo(int x, int y); // declaración anticipada para hacerAlgo

int main()
{
    std::cout << hacerAlgo(4, 3) << '\n'; // ¿Qué hacer algo deberíamos usar?
    return 0;
}*/



/*// Este hacerAlgo() suma el valor de sus parámetros
int hacerAlgo(int x, int y)
{
    return x + y;
}*/

/*// Este hacerAlgo() resta el valor de sus parámetros
int hacerAlgo(int x, int y)
{
    return x - y;
}*/