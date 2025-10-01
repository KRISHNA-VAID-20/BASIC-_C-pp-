// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Pair stores two values
//     pair<int, string> p = {1, "KV"};
    
//     cout << p.first << " " << p.second << endl;

//     // Nested pair
//     pair<int, pair<int, int>> nested = {1, {2, 3}};
//     cout << nested.first << " " << nested.second.first << " " << nested.second.second << endl;

//     // Pair array
//     pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};
//     cout << arr[1].first << " " << arr[1].second << endl;

//     return 0;
    
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;

    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    int size=v.size();
    cout << "Size = " << size << endl;
    
    cout << "Elements = " ;
    for(int i=0;i<size;i++){
        cout <<  v[i] << " "; 
    }
    return 0;
}

