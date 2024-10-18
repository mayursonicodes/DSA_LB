//! Difference between Stack & Heap Memory
//? We can change the default memory by going In, compiler setting or OS confriguration

/*
! STACK MEMORY -->

    * By default, small memory
    * Store local variables, functions parameters

! HEAP MEMORY -->

    * By default, large memory
    * Done by Dynamic memeory allocation (using new keyword)
    * We have to manually deallocate the memory otherwise memory will full (using delete operator) (delete []arr)
    * int* number = new int;
      store in stack = store in heap
    * Generally used in run time compilation (int* a[n] = new int)

*/