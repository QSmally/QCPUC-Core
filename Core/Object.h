
#import <Core/Void.h>

@protocol Object

    // Allocation of an object in virtual memory.
    + (Object*)allocHeap;

    // Allocation on stack memory and it will automatically be deallocated whenever
    // the local scope of the object exits the context.
    + (Object*)allocStack;

    // Disposes of the allocated block of memory.
    - (Void)drop;
@end
