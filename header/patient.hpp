#ifndef _PATIENT
#define _PATIENT

class patient
{
    public:
        patient(const unsigned int &, const unsigned int &, const unsigned int &);
        const unsigned int & get_patient_no();
        const unsigned int & get_entry_time();
        const unsigned int & get_hosp_time();
        const unsigned int & get_time_left();
        void set_patient_number(const unsigned int &);
        void set_entry_time(const unsigned int &);
        void set_hosp_tim(const unsigned int &);
        void set_time_left(const unsigned int &);
    private:
        unsigned int patient_number;
        unsigned int entry_time;
        unsigned int hospitalization_time;
        unsigned int time_left_to_death;
};


#endif // _PATIENT