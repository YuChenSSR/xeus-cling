#ifndef ___Class_IdNo
#define ___Class_IdNo

class IdNo{
    static int counter;
    int id_no;
public:
    IdNo();
    int id() const;
};


#endif