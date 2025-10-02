#include <iostream>
using namespace std;

void patt1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout  << "* ";
        }
        cout  << endl;
    }
}

void patt2(int n){
    for(int i=n;i>=1;i--){
        for(int j=i;j>0;j--){
            cout  << "* ";
        }
        cout  << endl;
    }
}

void patt3(int n){
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout  << " ";
        }
        for(int j=1;j<=i;j++){
            cout  << "*";
        }
        cout  << endl;

    }
}

void patt4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout  << j;
        }
        cout  << endl;
    }
}

void patt5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout  << i;
        }
        cout  << endl;
    }
}

void patt6(int n){
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout  << " ";
        }
        for(int j=1;j<=i;j++){
            cout  << " *";
        }
        cout  << endl;
    }

}

void patt7(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout  << x << " ";
            x++;
        }
        cout  << endl;
    }
}

void patt8(int n){
    char x='a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout  << x << " ";
            x++;
        }
        cout  << endl;
    }
}

void patt9(int n){
    char x='a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout  << x ;
        }
        x++;
        cout  << endl;
    }
}

void patt10(int n){
    for(int i=1;i<=n;i++){
        char x='a';
        for(int j=1;j<=i;j++){
            cout  << x << " ";
            x++;
        }
        cout  << endl;
    }
}

void patt11(int n){
    for(int i=n;i>=1;i--){
        for(int k=n-i;k>0;k--){
            cout  << " ";
        }
        for(int j=i;j>0;j--){
            cout  << " *";
        }
        cout  << endl;
    }
}

void patt12(int n){        //PASCALS TRIANGLE PATTERN
    for(int i=1;i<=n;i++){
        int coef=1;
        for(int k=n-i;k>0;k--){
            cout  << " ";
        }
        for(int j=1;j<=i;j++){
            cout  << coef << " ";
            coef=coef*(i-j)/j;
        }
        cout  << endl;
    }
}

void patt13(int n){
    for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i; j++) cout << " ";
    for(int j=1; j<=2*i-1; j++) cout << "*";
    cout << endl;
}
}

void hollowdiamond(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n);j++){
            if((i+j)<=n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
            if((i+n)<=j){
                cout << "*";
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n);j++){
            if(i>=j){
                cout << "*";
            }
            else{
                cout << " ";
            }
            if(i>=(2*n-1)-j){
                cout << "*";
            } 
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void diamond(int n){
    for(int i=0;i<(4*n);i++){
        cout << "*";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n);j++){
            if((i+j)<=n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
            if((i+n)<=j){
                cout << "*";
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n);j++){
            if(i>=j){
                cout << "*";
            }
            else{
                cout << " ";
            }
            if(i>=(2*n-1)-j){
                cout << "*";
            } 
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=0;i<(4*n);i++){
        cout << "*";
    }
}

void patt14(int n){
    for(int i=1;i<=n;i++){
        int start= (i%2!=0) ? 1:0;
        for(int j=1;j<=i;j++){
            cout << start << " ";
            start=1-start;
        }
        cout << endl;
    }
}

void patt15(int n){
    int space=2*(n-1);

    for(int i=1;i<=n;i++){
        

        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int k=1;k<=space;k++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space-=2;

    }
}

void patt16(int n){
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout << "  ";
        }
        for(char ch='A';ch<'A' + i;ch++){
            cout << ch << " ";
        }
        for(char ch='A' +i -2;ch>='A';ch--){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    patt1(5);
    cout  << endl;
    patt2(5);
    cout  << endl;
    patt3(5);
    cout  << endl;
    patt4(5);
    cout  << endl;
    patt5(5);
    cout  << endl;
    patt6(5);
    cout  << endl;
    patt7(5);
    cout  << endl;
    patt8(5);
    cout  << endl;
    patt9(5);
    cout  << endl;
    patt10(5);
    cout  << endl;
    patt11(10);
    cout  << endl;
    patt12(5);
    cout << endl;
    patt13(5);
    // cout << endl;
    // hollowdiamond(5);
    // diamond(5);
    // patt14(5);
    // patt15(4);
    // patt16(5);


    return 0;

 }