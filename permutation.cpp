#include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// void getPermutation(int ind, string s, int size, vector<string> &ans, string &ds)
// {
//     if (ind == size)
//     {
//         ans.push_back(ds);
//         return;
//     }
//     for (int i = ind; i < s.size(); i++)
//     {
//         ds += s[i];
//         getPermutation(ind + 1, s, size, ans, ds);
//         ds.pop_back();
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter Number of charecter in a word: ";
//     cin >> n;
//     string s, ds;
//     cout << "Enter a word of length > " << n << ": ";
//     cin >> s;
//     vector<string> ans1, ans2, ans3;

//     // generating 4,6 and 8 length substring of s;

//     // 4 charecter words
//     getPermutation(0, s, 4, ans1, ds);
//     for (int i = 0; i < 10; i++)
//         cout << ans1[i] << " ";

//     cout << endl;
//     // 6 charecter words
//     getPermutation(0, s, 6, ans2, ds);
//     for (int i = 0; i < 10; i++)
//         cout << ans2[i] << " ";

//     cout << endl;
//     // 8 charecter words
//     getPermutation(0, s, 8, ans3, ds);
//     for (int i = 0; i < 10; i++)
//         cout << ans3[i] << " ";
//     return 0;
// }