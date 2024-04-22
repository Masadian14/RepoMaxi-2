#include <iostream>

class Student
{
    public:
    int16_t num_of_exams = 0;
    int32_t id_number;
    std::string name;


    Student(std::string par_name, int32_t par_id, int32_t par_b_acc_number);
    void print() const;
    void update_bank_account(int32_t par_b_acc_number);

    private: 

    int32_t b_acc_number;
};


Student::Student(std::string par_name, int32_t par_id, int32_t par_b_acc_number) : name{par_name}
{
    id_number = par_id;
   
}

void Student::print() const
{
    std::cout << "Student" << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "id: " << id_number << std::endl;
    std::cout << "num of exams: " << num_of_exams << std::endl;
    std::cout << "bank account number: " << b_acc_number << std::endl;

}
void Student::update_bank_account(int32_t par_b_acc_number)
{
    b_acc_number = par_b_acc_number;
}

auto main() -> int
{
     {
        Student ich(std::string("Maxi"), 12381, 12312371);
        ich.update_bank_account(55555555);
        ich.print();
    }
}