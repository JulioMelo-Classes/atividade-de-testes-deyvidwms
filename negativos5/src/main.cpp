#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int cont = 0;

    int array[SIZE] = {0};

    for (int i = 0; i < SIZE; i++) {
        cin>>array[i];
    }

    for (int j = 0; j < SIZE; j++) {
        if (array[j]<0)
            cont++;
    }

    cout<<cont<<"\n";

    return 0;
}
