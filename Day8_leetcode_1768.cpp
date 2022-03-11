//OK, this is just to prove the point that string manipulation in C++ does not have to be messy.

string mergeAlternately(string w1, string w2) {
    int i = 0, j = 0;
    string res;
    while (i < w1.size() && j < w2.size())
        res += string() + w1[i++] + w2[j++];
    return res + w1.substr(i) + w2.substr(j);
}
//Single pointer version:

string mergeAlternately(string w1, string w2) {
    int p = 0, sz = min(w1.size(), w2.size());
    string res;
    while (p < sz)
        res += string() + w1[p] + w2[p++];
    return res + w1.substr(p) + w2.substr(p);
}
//Optimized version that does not create a temporary strings:

string mergeAlternately(string w1, string w2) {
    int i = 0, j = 0, sz1 = w1.size(), sz2 = w2.size();
    string res(sz1 + sz2, ' ');
    while (i < sz1 || j < sz2) {
        if (i < sz1)
            res[j + i++] = w1[i];
        if (j < sz2)
            res[i + j++] = w2[j];
    }
    return res;
}
//Optimized version with a single pointer:

string mergeAlternately(string w1, string w2) {
    string res;
    for (auto i = 0; i < max(w1.size(), w2.size()); ++i) {
        if (i < w1.size())
            res += w1[i];
        if (i < w2.size())
            res += w2[i];
    }
    return res;
}
