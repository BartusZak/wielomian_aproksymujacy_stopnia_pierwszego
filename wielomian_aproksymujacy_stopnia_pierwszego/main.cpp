#include <iostream>
#include <vector> // do tworzenia zmiennej vektorowej
#include <fstream> // do zapisu do pliku
#include <math.h> // do potegowania

using namespace std;

int const m= 100;
vector<double> x(m);
vector<double> y(m);
vector<double> x2(m);
vector<double> x_y(m);
float suma_x, suma_y, suma_x2, suma_x_y, srednia_x, srednia_y, srednia_x2, srednia_x_y, n, A,B,pom,M;
int main()
{
    //podajemy n
    cout << "Podaj n: ";
    cin >> n;

    //podajemy x
    for(int i=1;i<=n;i++)
    {
        cout << "Podaj x(" << i << ")";
        cin >> x[i];
        suma_x = suma_x + x[i];
    }

    cout << endl;

    //podajemy y
    for(int i=1;i<=n;i++)
    {
        cout << "Podaj y(" << i << ")";
        cin >> y[i];
        suma_y = suma_y + y[i];
    }

    for (int i=1;i<=n;i++)
    {
        x2[i] = x[i] * x[i];
        suma_x2 = suma_x2 + x2[i];
    }

       for (int i=1;i<=n;i++)
    {
        x_y[i] = x[i] * y[i];
        suma_x_y = suma_x_y + x_y[i];
    }

    srednia_x = (1/n) * suma_x;
    srednia_y = (1/n) * suma_y;
    srednia_x2 = (1/n) * suma_x2;
    srednia_x_y = (1/n) * suma_x_y;

    cout << "Suma x: " << suma_x << endl;
    cout << "Srednia x: " << srednia_x << endl;

    cout << endl;

    cout << "Suma y: " << suma_y << endl;
    cout << "Srednia y: " << srednia_y << endl;

    cout << endl;
    cout << "Suma x2: " << suma_x2 << endl;
    cout << "Srednia x2: " << srednia_x2 << endl;

    cout << endl;

    cout << "Suma x y: " << suma_x_y << endl;
    cout << "Srednia x y: " << srednia_x_y << endl;

    cout << endl;

    A = (srednia_x_y - (srednia_x * srednia_y))/(srednia_x2 - (srednia_x*srednia_x));
    B = srednia_y - A * srednia_x;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    for(int i=1;i<=n;i++)
    {
        pom += pow(A * x[i] + B - y[i],2);
    }
    M = 1/n * pom;

    cout << "M = " << M << endl;

    ofstream myfile;
    myfile.open ("zadanie.txt");
    for (int i=1;i<=n;i++)
    {
        myfile << x[i] << " " << y[i] << "\n";
    }

    myfile.close();


    return 0;
}
