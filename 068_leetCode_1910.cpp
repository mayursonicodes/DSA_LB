// ! Remove All Occurrences of a Substring -->

string removeOccurrences(string s, string part){

    int position = s.find(part);

    while(position != string::npos){ //todo -1 can also be used
        s.erase(position, part.length());
        position = s.find(part);
    }

    return s;
}