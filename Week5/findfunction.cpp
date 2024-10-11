#include <iostream>
#include <string>
using namespace std;
 bool checkS( string str, string s , int i ){
    
      int len = s.length();
      int j =0;
      while( j < len )
      { 
        if( str[i] != s[j]){
          cout << " i called" << endl;
          return false;
        }
        i++; j++;
        
      }
      cout << "this time me" << endl;
      return true;
 }

 bool stringfind(string str, string s){
      int len = str.length();
      
      int i =0;
      while ( i < len ){
          if( str[i] == s[0]){
            if( checkS(str,s ,i))
             return true;
          }
          
          i++;
      }
      return false;
 }

int main() {
  string str;
  string s;

  getline(cin,str);
  getline(cin,s);
  

  bool ans = stringfind( str, s);
  cout <<"Found    or not " << ans << endl;
  
  return 0;
}