void countThe() {
    ifstream inFile("STORY.TXT");
    string word;
    int count = 0;
    
    if(!inFile) {
        cout << "Unable to open file";
        return;
    }
    
    while(inFile >> word) {
        if(word == "the" || word == "The")
            count++;
    }
    
    cout << "Count of 'the': " << count << endl;
    inFile.close();
}