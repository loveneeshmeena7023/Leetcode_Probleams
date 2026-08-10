class Solution {
public:
    bool backspaceCompare(string s, string t) {

       return getActual(s)==(getActual(t));
    }

        string getActual(string input){

        string actualstring = "";
        int  hashCount =0;

        for(int  i=input.length()-1; i>=0;  i--){

            if(input[i] == '#'){
             hashCount++;
                continue;
            }
            if(hashCount >0){
                hashCount--;
            }else{
                actualstring.insert(actualstring.begin(),input[i]);


            }
        }
        return actualstring;
    }
};