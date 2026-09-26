#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'kmp' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY x as parameter.
 */

string kmp(vector<int> x) {
    int unique_chars = 0;
    int total_len = 0;
    for (int i = 0; i < 26; i++) {
        if (x[i] > 0) {
            unique_chars++;
            total_len += x[i];
        }
    }

    // Case 1: Only 1 unique character exists
    if (unique_chars == 1) {
        string res = "";
        for (int i = 0; i < 26; i++) {
            if (x[i] > 0) {
                res.append(x[i], (char)('a' + i));
                break;
            }
        }
        return res;
    }

    // Case 2: A character has a frequency of exactly 1
    for (int i = 0; i < 26; i++) {
        if (x[i] == 1) {
            string res = "";
            res += (char)('a' + i);
            x[i]--;
            for (int j = 0; j < 26; j++) {
                if (x[j] > 0) {
                    res.append(x[j], (char)('a' + j));
                }
            }
            return res;
        }
    }

    // Find the first (smallest) character available
    int first_char = -1;
    for (int i = 0; i < 26; i++) {
        if (x[i] > 0) {
            first_char = i;
            break;
        }
    }

    // Case 3: We can safely interleave the first character
    // The number of remaining slots available for other characters must be >= first_char_count - 2
    int other_chars_count = total_len - x[first_char];
    if (x[first_char] - 2 <= other_chars_count) {
        string res = "";
        res += (char)('a' + first_char);
        res += (char)('a' + first_char);
        x[first_char] -= 2;

        for (int i = first_char + 1; i < 26; i++) {
            while (x[i] > 0) {
                res += (char)('a' + i);
                x[i]--;
                if (x[first_char] > 0) {
                    res += (char)('a' + first_char);
                    x[first_char]--;
                }
            }
        }
        return res;
    }

    // Case 4: Cannot interleave safely. Group via block arrangement.
    // Structure: [first_char][all of second_char][rest of first_char][remaining characters...]
    int second_char = -1;
    for (int i = first_char + 1; i < 26; i++) {
        if (x[i] > 0) {
            second_char = i;
            break;
        }
    }

    string res = "";
    res += (char)('a' + first_char);
    x[first_char]--;

    res.append(x[second_char], (char)('a' + second_char));
    x[second_char] = 0;

    res.append(x[first_char], (char)('a' + first_char));
    x[first_char] = 0;

    for (int i = 0; i < 26; i++) {
        if (x[i] > 0) {
            res.append(x[i], (char)('a' + i));
        }
    }

    return res;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string x_temp_temp;
    getline(cin, x_temp_temp);

    vector<string> x_temp = split(rtrim(x_temp_temp));

    vector<int> x(26);

    for (int i = 0; i < 26; i++) {
        int x_item = stoi(x_temp[i]);

        x[i] = x_item;
    }

    string result = kmp(x);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
