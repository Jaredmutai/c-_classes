void displayAbove75() {
    ifstream inFile("STUDENT.DAT", ios::binary);
    Student s;
    
    while(inFile.read((char*)&s, sizeof(Student))) {
        if(s.ReturnPercentage() > 75)
            s.DisplayData();
    }
    inFile.close();
}