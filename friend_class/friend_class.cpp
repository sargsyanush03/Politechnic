#include <iostream>

using namespace std;

class C_Array
{
    friend class F_Array;

private:
    double *x1;
    double *x2;
    double x3[10];
    int n;

public:
    C_Array(double *arr1, double *arr2, int size)
    {
        n = size;
        x1 = arr1;
        x2 = arr2;
    }

    ~C_Array()
    {
    }
};

class F_Array
{
public:
    F_Array() {}
    ~F_Array() {}

    void F_Divide(C_Array &ob)
    {
        for (int i = 0; i < ob.n; ++i)
        {
            ob.x3[i] = ob.x1[i] / ob.x2[i];
        }
    }

    void F_Print(C_Array &ob)
    {
        for (int i = 0; i < ob.n; ++i)
        {
            cout << ob.x3[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    do cin >> n; while (n < 1 || n > 10);
    double a1[10], a2[10];

    for (int i = 0; i < n; ++i)
        cin >> a1[i];
    for (int i = 0; i < n; ++i)
        cin >> a2[i];

    C_Array ob(a1, a2, n);
    F_Array Frob;

    Frob.F_Divide(ob);
    Frob.F_Print(ob);

    return 0;
}