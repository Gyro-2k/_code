//find idientical input and query strings

//  B)  B:|
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> findQueries;
    for(int z=0;z<queries.size();z++){
        string toFind=queries[z];
        int store=0;
        for(int y=0;y<strings.size();y++){
            if(strings[y]==toFind)
                store+=1;
        }
        findQueries.push_back(store);
    }
    return findQueries;
}
