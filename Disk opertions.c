#include <stdio.h>

#define TOTAL_BLOCKS 100
int contiguousAllocation(int position) {
  
    return 1;
}

int linkedAllocation(int position)
{  
    return position;
}

int indexedAllocation(int position) {
    
    return 2;
}

int main() {
    int position_beginning = 0;   
    int position_middle = 50;     
    int position_end = TOTAL_BLOCKS;  

    printf("Contiguous Allocation:\n");
    printf("Beginning: %d disk I/O operations\n", contiguousAllocation(position_beginning));
    printf("Middle: %d disk I/O operations\n", contiguousAllocation(position_middle));
    printf("End: %d disk I/O operations\n\n", contiguousAllocation(position_end));

    printf("Linked Allocation:\n");
    printf("Beginning: %d disk I/O operations\n", linkedAllocation(position_beginning));
    printf("Middle: %d disk I/O operations\n", linkedAllocation(position_middle));
    printf("End: %d disk I/O operations\n\n", linkedAllocation(position_end));

    printf("Indexed Allocation (Single-level):\n");
    printf("Beginning: %d disk I/O operations\n", indexedAllocation(position_beginning));
    printf("Middle: %d disk I/O operations\n", indexedAllocation(position_middle));
    printf("End: %d disk I/O operations\n\n", indexedAllocation(position_end));

    return 0;
}
