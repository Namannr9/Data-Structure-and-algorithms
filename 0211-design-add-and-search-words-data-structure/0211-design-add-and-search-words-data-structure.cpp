class TrieNode   
{
    public :
    bool isComplete;
    TrieNode *children[26];
    
    TrieNode()
    {
        isComplete=false;
        memset(children,0,sizeof(children));
    }
};
class WordDictionary {
public:
    TrieNode *root;
    WordDictionary() 
    {
        root=new TrieNode();
    }
    
    void addWord(string word) 
    {
        TrieNode *node=root;
        for(char ch : word)
        {
            int index=ch-'a';
            if(node->children[index]==NULL) node->children[index]=new TrieNode();
            node=node->children[index];
        }
        node->isComplete=true;
    }
    
    bool search(string word) 
    {
        return help(0,word,root);
    }
    
    bool help(int index,string word,TrieNode *node)
    {
        if(node==NULL) return false;
        if(index==word.size()) return node->isComplete;
        char ch=word[index];
        if(ch=='.')
        {
            for(int i=0;i<26;i++)
            {
                TrieNode *tmp=node->children[i];
                if(help(index+1,word,tmp)) return true;
            }
            return false;
        }
        else
        {
            if(node->children[ch-'a']==NULL) return false;
        }
        TrieNode *child=node->children[ch-'a'];
        return help(index+1,word,child);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */