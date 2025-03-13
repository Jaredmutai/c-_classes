void addStudent() {
    ofstream outFile("STUDENT.DAT", ios::binary | ios::app);
    STUD s;
    
    s.Enter();
    outFile.write((char*)&s, sizeof(STUD));
    
    outFile.close();
}