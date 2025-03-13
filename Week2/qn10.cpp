(i) void writeEmployee() {
    ofstream outFile("EMP.DAT", ios::binary);
    EMPLOYEE emp;
    char ch;
    do {
        emp.GETIT();
        outFile.write((char*)&emp, sizeof(EMPLOYEE));
        cout << "More records? (y/n): ";
        cin >> ch;
    } while(ch == 'y' || ch == 'Y');
    outFile.close();
}

(ii) void readEmployee() {
    ifstream inFile("EMP.DAT", ios::binary);
    EMPLOYEE emp;
    
    while(inFile.read((char*)&emp, sizeof(EMPLOYEE))) {
        emp.SHOWIT();
    }
    inFile.close();
}