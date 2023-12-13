#include <vector>
#include <string>
using namespace std;
class DataAccess {
private:
    vector<std::string> data;

public:
    void saveData(const string& newData) {
        data.push_back(newData);
    }

    vector<string> fetchData() const {
        return data;
    }
};