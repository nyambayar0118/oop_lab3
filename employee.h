#ifndef employee_h
#define employee_h

// Ажилчин классыг толгой файлд загварчлав
class employee {
    public:
    // Ажилчны дугаарыг хадгална
    int emp_id;
    // Ажилчны нэрийг хадгална 
    char emp_name[20];
    // Ажилчны албан тушаалыг хадгална
    char emp_role[10];
    // Ажилчны ажилласан цагийг хадгална
    float emp_work_time;
    // Ажилчны цагт олдог орлогын дүнг хадгална
    float emp_hourly_rate;

    // Гарааны хоосон утгуудыг шинжүүдэд онооно
    void setInitial();
    // Гараас утгуудыг авч шинжүүдэд хадгална
    void getData();
    // Шинжүүдийн утгуудыг хэрэглэгчид ойлгомжтойгоор хэвлэнэ
    void printData();
    // Ажилчны цалинг тооцоолно
    float calcSalary();
    // Хэрэв захирал тушаалтай бол цалинг тооцоолно
    float calcBossSalary();
    // Тухайн өдөрт ажилласан цагийг нэмэгдүүлнэ
    bool addWorkTime(float);

};

#endif