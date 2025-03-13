void vowelwords() {
    ifstream inFile("FIRST.TXT");
    ofstream outFile("SECOND.TXT");
    string word;
    
    if(!inFile || !outFile) {
        cout << "Unable to open file";
        return;
    }
    
    while(inFile >> word) {
        char first = tolower(word[0]);
        if(first == 'a' || first == 'e' || first == 'i' || 
           first == 'o' || first == 'u')
            outFile << word << " ";
    }
    
    inFile.close();
    outFile.close();
}