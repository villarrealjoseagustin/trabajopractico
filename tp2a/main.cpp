#include <iostream>

using namespace std;

int main()
{float  m1, m2, b1, b2, px, py;
    cout << " ingrese pendiente 1 " << endl;
    cin>> m1;
    cout << " ingrese pendiente 2 " << endl;
    cin>> m2;
    cout << " ingrese ordenada 1 " << endl;
    cin>> b1;
    cout << " ingrese ordenada 2 " << endl;
    cin>> b2;
    if (m1 == m2 && b1== b2){
        cout << " las rectas son iguales, por lo tanto la recta es la interseccion " << endl;

    }else {
        if(m1 == m2 && b1!=b2){

            cout << " son paralelas, por lo tanto no hay interseccion " << endl;

        }else{
            px = (b1-b2) / (m2-m1);
            py = (m1 * px) + b1;
            cout << " son perpendiculares y los puntos son "   << px << " , " << py<<endl;
        }
    }
 return  0 ;
}
