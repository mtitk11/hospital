#include "patient.hpp"

patient::patient(const unsigned int & ent_time, const unsigned int & hosp_time, const unsigned int & left_time)
{
    entry_time = ent_time;
    hospitalization_time = hosp_time;
    time_left_to_death = left_time;
}
const unsigned int & patient::get_patient_no()
{
    return patient_number;
}
const unsigned int & patient::get_entry_time()
{
    return entry_time;
}
const unsigned int & patient::get_hosp_time()
{
    return hospitalization_time;
}
const unsigned int & patient::get_time_left()
{
    return time_left_to_death;
}
void patient::set_patient_number(const unsigned int & patient_no)
{
    patient_number = patient_no;
}
void patient::set_entry_time(const unsigned int & ent_time)
{
    entry_time = ent_time;
}
void patient::set_hosp_tim(const unsigned int & hosp_time)
{
    hospitalization_time = hosp_time;
}
void patient::set_time_left(const unsigned int & left_time)
{
    time_left_to_death = left_time;
}