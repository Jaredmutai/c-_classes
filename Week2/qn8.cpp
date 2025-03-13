void copyupper() {
    ifstream inFile("FIRST.TXT");
    ofstream outFile("SECOND.TXT");
    string word;
    
    if(!inFile || !outFile) {
        cout << "Unable to open file";
        return;
    }
    
    while(inFile >> word) {
        for(char &c : word)
            c = toupper(c);
        outFile << word << " ";
    }
    
    inFile.close();
    outFile.close();
}