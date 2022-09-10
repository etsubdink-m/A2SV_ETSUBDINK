class Solution {
public:
    string sortSentence(string s) {
        
        vector <string> v(10);
        string str;
        string answer;
        
        for(int i = 0; i < s.size(); i++){
            // cpp 0-9 ascii 48 - 57
            if(s[i] >= 48 && s[i] <= 57){
                v[s[i]-48] = str + " ";
                str ="";
                i++;
            }
            else
                str = str + s[i];
        }
        
        for(string j:v){
           answer = answer + j; 
        }
        answer.pop_back();
        return answer;
    }
};