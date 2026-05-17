#include<bits/stdc++.h>
using namespace std;

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}


void diagnose() {
    cin.ignore();

    cout << "\nDescribe your symptoms (e.g., 'I have fever, cough, and feel tired'):\n";

    string input;

    getline(cin, input);
    
    input = toLowerCase(input);


    bool fever = input.find("fever") != string::npos;
    bool cough = input.find("cough") != string::npos;
    bool headache = input.find("headache") != string::npos || input.find("head pain") != string::npos;
    bool bodyPain = input.find("bodypain") != string::npos || input.find("body pain") != string::npos;
    bool fatigue = input.find("fatigue") != string::npos || input.find("weakness") != string::npos || input.find("tired") != string::npos;
    bool vomiting = input.find("vomiting") != string::npos;
    bool looseMotion = input.find("loosemotion") != string::npos || input.find("loose motion") != string::npos || input.find("loose motions") != string::npos || input.find("diarrhea") != string::npos;
    bool sneezing = input.find("sneezing") != string::npos || input.find("sneeze") != string::npos;
    bool rash = input.find("rash") != string::npos || input.find("rashes") != string::npos;

    cout << "\n================ DIAGNOSIS REPORT ================\n";

    if(fever && cough && fatigue && headache) { // fcfh
        cout << "Disease: COVID-19 SYMPTOMS\n";
        cout << "Medicine: Paracetomol, Vitamin C, Zinc\n";
        cout << "Advice: Stay isolated and continuously monitor oxygen levels.\n";
    }
    else if(fever && cough && fatigue) { // fcf
        cout << "Disease: INFLUENZA (FLU)\n";
        cout << "Medicine: Paracetomol, Cough Syrup\n";
        cout << "Advice: Take bed rest immediately and try to drink warm fluids.\n";
    }   
    else if(fever && bodyPain && headache) {
        cout << "Disease: VIRAL FEVER\n";
        cout << "Medicine: Paracetomol, Ibuprofen\n";
        cout << "Advice: Check temperature at regular intervals and stay hydrated.\n";
    }
    else if(fever && bodyPain && fatigue) {
        cout << "Disease: DENGUE (POSSIBLE)\n";
        cout << "Medicine: Paracetomol, Avoid taking Ibuprofen or Aspirin\n";
        cout << "Advice: Get a blood test done as soon as possible and monitor platelet counts\n";
    }
    else if(vomiting && looseMotion) {
        cout << "Disease: FOOD POISONING / GASTROENTERITIS\n";
        cout << "Medicine: ORS(Oral Rehydration Salts), Electrolytes\n";
        cout << "Advice: Avoid eating solid food for few hours and stay hydrated.\n";
    }
    else if(!fever && cough) {
        cout << "Disease: COMMON COLD\n";
        cout << "Medicine: Antihistamines, Lozenges\n";
        cout << "Advice: Avoid drinking cold drink and allergens.\n";
    } 
    else if(!fever && headache) {
        cout << "Disease: MIGRAINE / TENSION HEADACHE\n";
        cout << "Medicine: Pain Relievers\n";
        cout << "Advice: Rest in a dark quiet room away from screens.\n";
    }
    else if(sneezing && !fever && !cough) {
        cout << "Disease: ALLERGIC RHINITIS\n";
        cout << "Medicine: Cetirizine (Antihistamines)\n";
        cout << "Advice: Identify and avoid dust, pollution, or pollen.\n";
    }
    else if(rash) {
        cout << "Disease: SKIN ALLERGY / DERMATITIS\n";
        cout << "Medicine: Antihistamines, Calamine Lotion\n";
        cout << "Advice: Avoid rubbing and scratching affected part; wash with cool water.\n";
    }
    else {
        cout << "Disease: UNKNOWN CONTEXT\n";
        cout << "Medicine: No Medication Prescribed Dynamically\n";
        cout << "Advice: Symptoms do not match the current rule base\n";
        cout << "Please Consult a qualified practitioner.\n";
    }

    cout << "================================================================\n";
}



void routeDepartments() {
    cin.ignore();
    

    cout << "Describe the core medical issue or area of pain (e.g. 'chest pain', 'child has fever'): \n";

    string input;

    getline(cin, input);

    input = toLowerCase(input);


    bool cardiac = input.find("cardiac") != string::npos || input.find("heart") != string::npos || input.find("chest") != string::npos || input.find("chest pain") != string::npos || input.find("stroke") != string::npos;
    bool bone = input.find("bone") != string::npos || input.find("fracture") != string::npos || input.find("accident") != string::npos || input.find("joint") != string::npos;
    bool child = input.find("child") != string::npos || input.find("infant") != string::npos || input.find("baby") != string::npos;
    bool skin = input.find("skin") != string::npos || input.find("allergy") != string::npos || input.find("rash") != string::npos || input.find("itching") != string::npos;
    bool neuro = input.find("paralysis") != string::npos || input.find("fainting") != string::npos;

    cout << "\n================ TRIAGE & ROUTING SELECTION ================\n";

    if(cardiac || neuro) {
        cout << "Emergency Level: CRITICAL / RED ALERT\n";
        cout << "Recommended Unit: EMERGENCY ER / CARDIAC ICU\n";
        cout << "Action Required: Bypass standard registration process, move patient to trauma bay immediately.\n";
    }
    else if(bone) {
        cout << "Emergency Level: URGENT\n";
        cout << "Recommended Unit: ORTHOPEDICS DEPARTMENT (OPD ROOM 202)\n";
        cout << "Action Required: Move patient for X-ray imaging unit prior to specialist evaluation.\n";
    }
    else if(child) {   
        cout << "Emergency Level: STANDARD\n";
        cout << "Recommended Unit: PEDIATRICS WING (OPD ROOM NO 302)\n";
        cout << "Action Required: Check child's vital parameters at the desk.\n";
    }
    else if(skin) {
        cout << "Emergency Level: STANDARD\n";
        cout << "Recommended Unit: DERMATOLOGY CLINIC (OPD ROOM NO 506)\n";
        cout << "Action Required: Standard OPD Token queue generation\n";
    }
    else {
        cout << "Emergency Level: GENERAL ENQUIRY\n";
        cout << "Recommended Unit: GENERAL MEDICINE OUTPATIENT\n";
        cout << "Action Required: Collect physical token from the reception and wait in the queue.\n";
    }

}

void showHealthTips() {
        cout << "\n================= GENERAL HEALTH TIPS =================\n";
        cout << " 1. Hydration: Drink at least 8 glasses (2 liters) of water daily.\n";
        cout << " 2. Nutrition: Eat a balanced diet rich in fruits and vegetables.\n";
        cout << " 3. Exercise : Get at least 30 minutes of moderate activity daily.\n";
        cout << " 4. Sleep    : Aim for 7-9 hours of quality sleep every night.\n";
        cout << " 5. Hygiene  : Wash your hands frequently with soap and water.\n";
        cout << " 6. Mind     : Manage stress through relaxation techniques.\n";
        cout << "=======================================================\n";
    }

    
int main() {

    int choice;
    do {
        cout << "\n===== HOSPITALS AND MEDICAL FACILITIES EXPERT SYSTEM =====\n";
        cout << "1. Diagnose Symptoms (Diagnostic Engine)\n";
        cout << "2. Department Routing and Triage (Operational Engine)\n";
        cout << "3. Display Health tips.\n";
        cout << "4. Exit\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                diagnose();
                break;
            case 2:
                routeDepartments();
                break;
            case 3:
                showHealthTips();
                break;
            case 4:
                cout << "Exiting System\n";
                break;
            default:
                cout << "Invalid choice, Please try again\n\n";
        }
    } while(choice != 4);
}