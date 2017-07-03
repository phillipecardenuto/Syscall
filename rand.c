#include <linux/unistd.h>
#include <linux/linkage.h>
#include <linux/time.h>
#include <asm/time.h>


asmlinkage long sys_rand(unsigned long begin, unsigned long end) {    
    
    
    static unsigned long next = 0;
    
    struct timeval time;
    
    /*INTERVAL ERROR*/
    if (end <= begin)
        return 0;
    
    if(next == 0) {
        do_gettimeofday(&time);
        next = time.tv_sec;
    }
    
    
    next = next * 1103515245 + 12345; 
    
    return next % end;
    
    
}