#include <iostream>
#include <vector>
using namespace std;
void subString(string, string, int, vector<string>&);

            //First inclusive the exclusive

void subString(string s, string ans, int index, vector<string>& answer){
    if( index == s.length()) {
        answer.push_back(ans);
        return;
    }
    char ch = s[index];
    ans.push_back(ch);
    // include current index
    subString(s, ans, index + 1, answer);
    
    ans.pop_back();

    //exculde
    subString(s, ans, index+1, answer);

}
 
int main (){

    string s = "xyz";
    vector<string> answer;
    int index = 0;
    string ans;

    subString(s, ans, index , answer);
    for(string s: answer){
        cout << "-> "<< s << " " << endl;
    }
    // cout << ans.size();
return 0;
}       

            //First Exclude then Inclusive 

// void subString(string str, string ans, int index, vector<string> &answer){
//     if(index >= str.length()) {
//         // cout << "-> "<< ans << " " << endl;
//         answer.push_back(ans);
//         return;}

//     char ch = str[index];

//     // Exclude 
//     subString(str, ans, index + 1, answer);
    
//     // Inclusive
//     ans.push_back(ch);  
//     subString(str, ans, index + 1, answer);
// }
