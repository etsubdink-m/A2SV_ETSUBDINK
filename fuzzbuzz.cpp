class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> myString; 
       
       for(int i=1 ; i<=n;i++){
           cout<<"[\"";
           if(i%3==0 && i%5==0)
               myString.push_back("FizzBuzz");
           else if(i%3==0 && i%5!=0)
               myString.push_back("Fizz");
           else if(i%3!=0 && i%5==0)
              myString.push_back("Buzz");
           else 
               
               myString.push_back ( to_string(i)) ;
          
       }
        return myString;
    }
};