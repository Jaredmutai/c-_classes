void countAlphabets() {
    ifstream inFile("OUT.TXT");
    char ch;
    int count = 0;
    
    if(!inFile) {
        cout << "Unable to open file";
        return;
    }
    
    while(inFile.get(ch)) {
        if(isalpha(ch))
            count++;
    }
    
    cout << "Number of alphabets: " << count << endl;
    inFile.close();
}