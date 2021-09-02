#include <bits/stdc++.h>
using namespace std;
int main()
{
  int curr = (s[0] - '0') * 10 + (s[1] - '0');
  string final = "";
  if (s[8] == 'A')
  {
    if (curr == 12)
    {
      final = "00";
      final += s.substr(2, 6);
    }
    else
    {
      final = s.substr(0, 8);
    }
  }
  else
  {
    if (curr == 12)
    {
      final = "12";
      final += s.substr(2, 6);
    }
    else
    {
      curr += 12;
      final = to_string(curr);
      final += s.substr(2, 6);
    }
  }
  return final;
}

// int currTime = (s[0]-'0')*10 + (s[1]-'0');
//     string finalTime = "";
//     if(s[8]=='A'){
//         if(currTime ==12){
//             finalTime = "00";
//             finalTime += s.substr(2,6);
//         }
//         else{
//             finalTime = s.substr(0,8);
//         }
//     }
//     else {
//         if(currTime==12){
//             finalTime = "12";
//             finalTime+=s.substr(2,6);
//         }
//         else {
//             currTime +=12;
//             finalTime = to_string(currTime);
//             finalTime +=s.substr(2,6);
//         }
//     }
//     return finalTime;

// for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<=i;k++){
//             cout<<"#";
//         }
//         cout<<endl;
//     }