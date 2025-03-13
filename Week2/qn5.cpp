void countWords() {
    ifstream inFile("OUT.TXT");
    string word;
    int count = 0;
    
    if(!inFile) {
        cout << "Unable to open file";
        return;
    }
    
    while(inFile >> word) {
        count++;
    }
    
    cout << "Number of words: " << count << endl;
    inFile.close();
}