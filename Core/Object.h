
#import <Core/Void.h>

@interface Object: Void

    // Allocation on stack memory and it will automatically be deallocated whenever
    // the local scope of the object exits the context.
    + (InstanceType)alloc;

    // Allocation of an object in virtual memory.
    + (InstanceType*)alloc;

    // Drops the allocated block of memory.
    - (Void)release;
@end
