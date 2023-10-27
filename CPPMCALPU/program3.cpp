#include <iostream>

using namespace std;

class ElectricityDept
{
private:
    int domesticperunit = 5;
    int comercialperunit = 10;
    int rentofdomesticmeter = 100;
    int rentofcomercialmeter = 500;
    int domesticfreeunit = 100;
    int comercialfreeunit = 250;
    int domesticlimit = 5000;
    int comerciallimit = 50000;

public:
    int domesticbill(int use)
    {
        int totalbill = 0;
        if (use > domesticfreeunit)
        {
            totalbill = ((use - domesticfreeunit) * domesticperunit) + rentofdomesticmeter;
            if (totalbill > domesticlimit)
            {
                totalbill += (0.05 * totalbill);
            }
        }
        else
        {
            totalbill = rentofdomesticmeter;
        }

        return totalbill;
    }

    int comercialbill(int use)
    {
        int ctotalbill = 0;
        if (use > comercialfreeunit)
        {
            ctotalbill = ((use - comercialfreeunit) * comercialperunit) + rentofcomercialmeter;
            if (ctotalbill > comerciallimit)
            {
                ctotalbill += (0.1 * ctotalbill);
            }
        }
        else
        {
            ctotalbill = rentofcomercialmeter;
        }

        return ctotalbill;
    }
};

int main()
{
    ElectricityDept e1;

    int n = 0;
    while (true)
    {
        cout << "If you are a domestic user, enter 1. If you are a commercial user, enter 2. To exit, enter any other number: ";
        cin >> n;

        if (n == 1 || n == 2)
        {
            int usee;
            cout << "Enter your bill usage: ";
            cin >> usee;

            if (n == 1)
            {
                cout << "Your bill is: " << e1.domesticbill(usee) << endl;
            }
            else if (n == 2)
            {
                cout << "Your bill is: " << e1.comercialbill(usee) << endl;
            }
        }
        else
        {
            cout << "Thank You" << endl;
            break;
        }
    }

    return 0;
}
