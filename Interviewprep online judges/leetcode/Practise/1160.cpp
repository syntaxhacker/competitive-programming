int c[26];
int tmp[26];
class Solution {
public:
    int countCharacters(vector<string>& words, string s) {
        memset(c , 0 , sizeof c);
        for(char &e : s){
          c[e - 'a']++;
        }
        int cnt = 0;
        for(string &ss : words){
        memset(tmp , 0 , sizeof tmp);
          for(int i = 0 ; i<ss.length() ; ++i){
          tmp[ss[i] - 'a']++;
          }
        bool f = 1;
        for(int i = 0 ; i< 26 ;++i){
          if(tmp[i] > c[i]){
             f = 0;
          }
        }
        if(f) cnt+=ss.length();
        }

        return cnt;
    }
};