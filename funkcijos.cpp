#include "header.h"

void Kubelis(Kubas pirmas);

void Kubelis(Kubas pirmas){
    pirmas(16, 6);

    for (int i = 0; i < pirmas.getY(); i++)
    {
        if (i == 0)
            cout << "";
        else if (i == pirmas.getY() - 1)
            cout << "";
        else
            cout << "|" << setw(15) << "|";
        if (i < 1 || i == pirmas.getY() - 1)
        {
            for (int j = 0; j < pirmas.getX(); j++)
            {
                cout << "-";
            }
        }
        cout << endl;
    }
}