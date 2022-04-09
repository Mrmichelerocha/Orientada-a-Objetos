#include "box.hpp"

int main()
{
    Box b1(1,1,10);
    Box b2;
    Box b3;
    Box b4;
    Box b5(b1);
    CandyBox a1;

    b1.SetValue(10,10,10);
    // b2.SetValue(10,10);
    // b3.SetValue(10);
    // b4.SetValue();
    b2.SetValue(10,10,10);
    a1.SetName("doces  deliciosos da vovo");

    Box b6(b3+b4);

    float w,h,d;
    string a;
    b1.GetValue(w,h,d);
    cout << "Box 3 -> w: " << w << " h: " << h << " d: " << d << endl;

    b2.GetValue(w,h,d);
    cout << "Box 3 -> w: " << w << " h: " << h << " d: " << d << endl;

    a1.SetName(a);
    cout << "Box 3 -> a: " << a << endl;

    b4.GetValue(w,h,d);
    cout << "Box 4 -> w: " << w << " h: " << h << " d: " << d << endl;

    b6.GetValue(w,h,d);
    cout << "Box 6 -> w: " << w << " h: " << h << " d: " << d << endl;

    b6 = b6 * 0.5;
    b6.GetValue(w,h,d);
    cout << "Box 6 -> w: " << w << " h: " << h << " d: " << d << endl;

    Box b7 = b6 * b1;
    b7.GetValue(w,h,d);
    cout << "Box 7 -> w: " << w << " h: " << h << " d: " << d << endl;


    Box LOTOFBOXES[10000];

    return 0;
}
