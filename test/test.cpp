#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = __FILE__;
    cout << s << endl;   // 输出当前源文件路径和文件名
    cout << __LINE__ << endl;   // 输出当前行号
}
