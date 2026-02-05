class Solution {
public:
    string countAndSay(int n) {
        string s1,s2;
        s1 = "1";
        for( int i = 1; i < n; i++ )
        {
            string s2 = "";
            for( int j = 0; j < s1.length(); j++ )
            {
                int count = 1;
                while( s1[j] == s1[j+1] )
                {
                    j++;
                    count++;
                }
                if( s1[j] != s1[j+1] )
                {
                    s2 = s2 + to_string( count );
                    s2 = s2 + s1.substr( j, 1 );
                    count = 1;
                }
            }
            s1 = s2;
        }
        return s1;
    }
};
