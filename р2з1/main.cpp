# включить  < iostream >
# включить  < iomanip >
# включить  < math.h >
// #include <stdlib.h>
используя  пространство имен  std ;
основной  ( )
{
    плавать а, б;
    интервал с;
    cout << " Введите (с плавающей запятой) a, b " <<endl;
    цин>>а>>б; // а должно быть меньше чем b
    cout << " Enter (int) s " <<endl;
    цин>>с;
    float точки[s+ 1 ]; // на отрезках n частей получается n+1 точек промежутка (*-*-*-*)
    cout<<endl<< " Таблица (координата точки, sin, cos) " <<endl;

    cout << " Точки: | " ; // по условию нужны заголовки строк или заголовки столбца??
    для ( int i = 0 ; i<(s+ 1 ); i++)
    {
        точки[i]=a+i*((ba)/s); // абс не нужен
        cout<<fixed<< setprecision ( 2 )<< setw ( 9 )<<точки[i]<< " | " ;
    }
     cout<<endl;
     cout<< " Грех: | " ;
    для ( int i = 0 ; i<(s+ 1 ); i++)
    {
      //   точки[i]=a+i*((ba)/s); //абс не нужен
        cout<<fixed<< setprecision ( 2 )<< setw ( 9 )<< sin (tochki[i])<< " | " ;
    }
       cout<<endl;
     cout<< " Cos: | " ;
    для ( int i = 0 ; i<(s+ 1 ); i++)
    {
      //   точки[i]=a+i*((ba)/s); //абс не нужен
        cout<<fixed<< setprecision ( 2 )<< setw ( 9 )<< cos (точки[i])<< " | " ;
    }
 //    длина=2*M_PI*r;
  //   cout<<"Длина круга = "<<length;

}
