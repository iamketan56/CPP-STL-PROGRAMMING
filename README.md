# CPP STL 
 <br>
 The <b>Standard Template Library (STL)</b> is a software library for the C++ programming language that influenced many parts of the C++ Standard Library. It provides four components called <b>algorithms, containers, functions, and iterators.</b><br>
 <br>
 The STL provides a set of common classes for C++, such as containers and associative arrays, that can be used with any built-in type and with any user-defined type that supports some elementary operations (such as copying and assignment). STL algorithms are independent of containers, which significantly reduces the complexity of the library.<br><br>
 
<b>1.Containers</b><br>
The STL contains sequence containers and associative containers. The containers are objects that store data. The standard sequence containers include vector, deque, and list. The standard associative containers are set, multiset, map, multimap, hash_set, hash_map, hash_multiset and hash_multimap. There are also container adaptors queue, priority_queue, and stack, that are containers with specific interface, using other containers as implementation.

<b>2.STD::array</b><br>
<br>
The array is a container for constant size arrays. This container wraps around fixed size arrays and also doesn’t loose the information of its length when decayed to a pointer.
In order to utilize array, we need to include the array header:<br>
 <br>
 For Better Understanding refer to STD_ARRAy.CPP<br><br>

<b>3.Vector C++ STL</b><br>
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.<br><br>

For Better Understanding refer to Vector1.CPP and Vector2.CPP<br><br>
 
<b>4.Set</b><br>
Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element. <br><br>
For Better Understanding refer to Set.CPP and Set2.CPP<br><br>
