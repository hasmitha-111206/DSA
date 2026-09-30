#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int MaxWords(vector<string> &Sentences)
    {
        int maxwords = 0;
        for (int i = 0; i < Sentences.size(); i++)
        {
            int words = 0;
            for (int j = 0; j < Sentences[i].size(); j++)
            {
                if (Sentences[i][j] == ' ')
                {
                    words++;
                }
            }
            maxwords = max(words, maxwords);
        }
        return maxwords;
    }
};