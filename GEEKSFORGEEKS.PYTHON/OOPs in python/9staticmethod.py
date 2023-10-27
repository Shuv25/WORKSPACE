class bank:
    rate_of_interest = 12.25

    @staticmethod
    def simple_interest(prn, time):  # static method
        si = (prn*time*bank.rate_of_interest)/100
        print(si)


prn = float(input("Enter principle:"))
time = int(input("Enter time:"))

bank.simple_interest(prn, time)
