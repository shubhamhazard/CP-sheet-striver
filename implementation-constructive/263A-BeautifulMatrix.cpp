// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5][5];
//     int row,col;

//     for(int i=0; i<5; i++)
//     {
//         for(int j=0; j<5; j++)
//         {
//             cin>> arr[i][j];

//             if(arr[i][j] == 1){
//                 row =i;
//                 col = j;
//             }
//         }
//     }
//     cout<< abs(row-2) + abs(col-2);
//     return 0;
// }


#include<iostream>
main() {
  for(int i=0,a;std::cin>>a;i++)
    if(a) std::cout<<abs(2-i/5)+abs(2-i%5);
}