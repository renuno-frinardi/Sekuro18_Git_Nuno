#include <iostream>
using namespace std;

class RobotPemadam{
    private:
        int jarak;
        string status;
    public:
        void inputSensor(int nilai){
            jarak = nilai;
        }
        
        void prosesLogika(){
            if (jarak > 20) status = "Maju Mencari Api";
            else if (jarak > 5 && jarak <= 20) status = "UDAH DEKET NIH BRAY";
            else if (jarak <= 5) status = "Posisi Tepat! gas semprot kali ya!";
        }

        void cetakStatus(){
            cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
        }
};

int main(){
    int input = 0;
    RobotPemadam robot;
    cin >> input;
    while (input != 67){
        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus();
        cin >> input;
    };

    return 0;
}