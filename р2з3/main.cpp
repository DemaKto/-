# включить  < iostream >
# включить  < math.h >
# включить  < iomanip >
// #include <stdlib.h>
используя  пространство имен  std ;
основной  ( )
{
    инт н;
    поплавок p,lsum,ltape;
    р= 0 ;lsum= 0 ;
    cout<< " введите n деревьев " <<endl;
    цин>>н;
    если (n< 2 ) { возврат  0 ;};
    число с плавающей запятой x1, y1 , xa, ya, xb, yb;
cout << " введите X1, Y1 " <<endl;
    cin>>x1>> y1 ;
    ха=х1; я = у1 ;
    for ( int i= 1 ;i<n;i++) {
        cout<< " введите X " <<i+ 1 << " , Y " <<i+ 1 <<endl;
        cin>>xb>>yb;
        если ((i==(n - 1 ))&&(n> 2 )) p+= sqrt ( pow (x1-xb, 2 )+ pow ( y1 -yb, 2 ));
        p+= sqrt ( pow (xb-xa, 2 )+ pow (yb-ya, 2 ));
        ха=хб; я=ыб;
        }
    для ( int i= 0 ; i<n; i++)
    {    поплавок л;
        cout << " войти в дерево l " <<i+ 1 <<endl;
        цин >> л;
        лсум+=1;
    }
    ltape=(lsum/n)+p;
cout<< " p= " <<p<<endl; // /периметр многоугольника
cout<< " l of tape = " <<fixed<< setprecision ( 2 )<<ltape; // длина ленты

}
