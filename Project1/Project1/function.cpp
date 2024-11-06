//#include<iostream>
//#include<string>
//
//#define LOG(x) std::cout << x << std::endl
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0)
//        {
//            return false;
//        }
//        else if (x < 10)
//        {
//            return true;
//        }
//        else 
//        {
//            std::string s = std::to_string(x);
//            int L = s.size();
//            for (int i = 0; i < L / 2; i++)
//            {
//                if (s[i] == s[L - i - 1])
//                    continue;
//                else
//                    return false;
//            }
//            return true;
//
//
//        }
//    }
//};
//
//int main() {
//    Solution r;
//    LOG(r.isPalindrome(121));
//    
//
//}