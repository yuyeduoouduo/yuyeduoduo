#include <iostream>
#include <string>
using namespace std;

// 1. 先定义一个Student类（蓝图）
class Student {
public:
    // 成员变量（属性）
    string name;
    int age;

    // 成员函数（方法）
    void introduce() {
        cout << "我叫" << name << "，今年" << age << "岁" << endl;
    }
};

int main() {
    // 2. 栈上实例化：直接创建对象
    Student stu1; 
    stu1.name = "张三";  // 给成员变量赋值
    stu1.age = 20;
    stu1.introduce();    // 调用成员函数

    // 3. 堆上实例化：用new创建，返回指针
    Student* stu2 = new Student();
    stu2->name = "李四";  // 指针用->访问成员
    stu2->age = 21;
    stu2->introduce();
    delete stu2;          // 手动释放堆内存，避免泄漏

    return 0;
}
