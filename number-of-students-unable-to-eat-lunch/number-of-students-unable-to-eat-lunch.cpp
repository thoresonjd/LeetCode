class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int index;
        for (int i = 0; i < sandwiches.size() && contains(students, sandwiches[i], index); i++)
            students.erase(students.begin() + index);
        return students.size();
    }
    
    bool contains(vector<int>& students, int sandwich, int& index) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i] == sandwich) {
                index = i;
                return true;
            }
        }
        return false;
    }
};