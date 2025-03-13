void countBlanks() {
    ifstream inFile("OUT.TXT");
    char ch;
    int count = 0;
    
    if(!inFile) {
        cout << "Unable to open file";
        return;
    }
    
    while(inFile.get(ch)) {
        if(ch == ' ')
            count++;
    }
    
    cout << "Number of blanks: " << count << endl;
    inFile.close();
}