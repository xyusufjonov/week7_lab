 #include<iostream>
using namespace std;
void displaySordetedNumber(double a,double b,double c){
    if (a>b && a>c) {
        cout << a << " " << b << " " << c << endl;
    }else if(b>a && b>c) {
        cout << b << " " << a << " " << c << endl;
    }else if(c>a && c>b) {
        cout << c << " " << a << " " << b << endl;
    }
}
int main() {
    double a,b,c;
    cin>>a>>b>>c;
    displaySordetedNumber(a,b,c);
    return 0 ;
}