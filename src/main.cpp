
#include <thread>
 
void ram_kill() {
    for(;;) {
        int num = 66666666;
        double *p_darr = new double[num];
        for (int i = 0; i < num; i++) {
            p_darr[i] = i;
        }
    }
}

int main() {
    std::thread t1(ram_kill);
    std::thread t2(ram_kill);
    std::thread t3(ram_kill);
    std::thread t4(ram_kill);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}