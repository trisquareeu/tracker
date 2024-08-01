#include <zephyr/kernel.h>

#include <vector>

int main(void) {
  std::vector<int> v;

  while (true) {
    v.push_back(1);
    k_sleep(K_MSEC(1000));

    printk("Vector size: %d\n", v.size());

    v.pop_back();
  }
}