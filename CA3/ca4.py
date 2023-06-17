import time


with open('C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\no_flush.txt', 'w') as f:
    for i in range(5):
        f.write(f'Line {i}\n')
        time.sleep(1)

with open('C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\with_flush.txt', 'w') as f:
    for i in range(5):
        f.write(f'Line {i}\n')
        f.flush()
        time.sleep(1)
