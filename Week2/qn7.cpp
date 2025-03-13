void countNonALines() {
    ifstream inFile("STORY.TXT");
    string line;
    int count = 0;
    
    if(!inFile) {
        cout << "Unable to open file";
        return;
    }
    
    while(getline(inFile, line)) {
        if(!line.empty() && line[0] != 'A' && line[0] != 'a')
            count++;
    }
    
    cout << "Lines not starting with A: " << count << endl;
    inFile.close();
}