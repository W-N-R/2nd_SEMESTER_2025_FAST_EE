//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class employee {
//protected:
//    string employee_id;
//    double base_salary;
//public:
//    employee(string id, double salary) : employee_id(id), base_salary(salary) {}
//    virtual double  compute_salary() = 0;
//    virtual ~employee(){}
//};
//
//class commission_worker : public employee {
//private:
//    double monthly_sales;
//    double commission_rate;
//public :
//    commission_worker(string, double, double, double);
//    double compute_salary() {
//        return base_salary + (monthly_sales * commission_rate / 100);
//    }
//};
//
//commission_worker::commission_worker(string idd, double salary, double sales, double rate) : employee(employee_id = idd, base_salary = salary), monthly_sales(sales), commission_rate(rate) {}
//
//class hourly_worker : public employee {
//    double hours;
//    double per_hour;
//public:
//    hourly_worker(string, double, double, double);
//    double compute_salary() {
//        return base_salary + (hours + per_hour);
//    }
//};
//hourly_worker::hourly_worker(string id, double salary, double hours, double perhour ):
//    employee (id , salary ), hours(hours), per_hour(perhour){ }
//
//class salaried_worker : public employee {
//    double bonus;
//public :
//    salaried_worker(string, double, double);
//    double compute_salary() {
//        return base_salary + bonus;
//    }
//};
//
//salaried_worker::salaried_worker(string id, double base, double bonu) :employee(id, base), bonus(bonu){}
//
//
//
//int main() {
//    commission_worker john("waleed9119", 6000, 2000, 15);
//    commission_worker* john_ptr = &john;
//    cout << "John's Salary (Direct): $" << john_ptr->compute_salary() << endl;
//
//    employee* base_ptr = &john;
//    cout << "John's Salary (Via Base Pointer): $" << base_ptr->compute_salary() << endl;
//
//    commission_worker alice("iwiw", 6000, 3000, 12);
//    commission_worker bob("103", 6000, 4000, 10);
//    hourly_worker clara("104", 6000, 20, 120);
//    hourly_worker dan("105", 6000, 15, 110);
//    salaried_worker emma("106", 6000, 1500);
//    salaried_worker frank("107", 6000, 2500);
//
//    employee* all_employees[6] = { &alice, &bob, &clara, &dan, &emma, &frank };
//
//    cout << "\n--- Monthly Payroll Summary ---\n";
//    for (int i = 0; i < 6; ++i) {
//        cout << "Employee #" << (i + 1) << " Total Pay: $" << all_employees[i]->compute_salary() << endl;
//    }
//
//    return 0;
//}
