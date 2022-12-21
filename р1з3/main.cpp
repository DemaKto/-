# включить  < iostream >
# включить  < math.h >
// #include <stdlib.h>
используя  пространство имен  std ;
основной  ( )
{
    int ха, ya, xb, yb, xc, yc;
    float ab,bc,ac,p,s,r,length,scircle;
    cout << " введите Xa, Ya " <<endl;
    цин >> ха >> я;
    cout << " введите Xb, Yb " <<endl;
    cin>>xb>>yb;
    cout << " введите Xc, Yc " <<endl;
    cin>>xc>>yc;

    ab= sqrt ( pow (xb-xa, 2 )+ pow (yb-ya, 2 ));
    bc= sqrt ( pow (xc-xb, 2 )+ pow (yc-yb, 2 ));
    ac= sqrt ( pow (xc-xa, 2 )+ pow (yc-ya, 2 ));
    р=аб+бк+ас;
    s= sqrt (p/ 2 *(p/ 2 -ab)*(p/ 2 -bc)*(p/ 2 -ac));
            // cout<<"Периметр треугольника, P= "<<p<<endl;
            // cout<<"Площадь треугольника S= "<<s<<endl;
    // r радиус вписанной окружности, равная площадь треугольника раздел на полупериметр
    г=s/(р/ 2 );
    длина= 2 *M_PI*r;
    круг=M_PI* pow (r, 2 );
    cout<< " Длина окружности l= " <<length<<endl;
    cout<< " Площадь круга S= " <<scircle;

}
