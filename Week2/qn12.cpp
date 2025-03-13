void readfile() {
    ifstream inFile("SHIP.DAT", ios::binary);
    computer comp;
    int count = 0;
    
    while(inFile.read((char*)&comp, sizeof(computer))) {
        comp.showdetails();
        count++;
    }
    
    cout << "Number of records: " << count << endl;
    inFile.close();
}