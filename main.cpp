struct TrieNode
{
//yea
    struct TrieNode *children[26];

    bool isEnd;
};

struct TrieNode *getNode()
{

    struct TrieNode *pNode = new TrieNode;
    pNode->isEnd = false;
    for (int i = 0; i < 26; i++)
    {

        pNode->children[i] = NULL;
    }

    return pNode;
}

 bool search(string word)
    {
        struct TrieNode *pcrawl = root;
        for (int i = 0; i < word.length(); i++)
        {

            if (!pcrawl->children[word[i] - 'a'])
                return false;
