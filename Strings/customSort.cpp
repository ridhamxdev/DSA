class Solution {
public:
    static string str;
    static bool custom(char s1,char s2){
        return(str.find(s1)<str.find(s2));
    }
    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),custom);
        return s;
    }
};
string Solution::str;