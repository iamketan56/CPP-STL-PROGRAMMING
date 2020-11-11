# CPP STL 
 <br>
 The <b>Standard Template Library (STL)</b> is a software library for the C++ programming language that influenced many parts of the C++ Standard Library. It provides four components called <b>algorithms, containers, functions, and iterators.</b><br>
 <br>
 The STL provides a set of common classes for C++, such as containers and associative arrays, that can be used with any built-in type and with any user-defined type that supports some elementary operations (such as copying and assignment). STL algorithms are independent of containers, which significantly reduces the complexity of the library.<br><br>
 
<b>1.Containers</b><br>
The STL contains sequence containers and associative containers. The containers are objects that store data. The standard sequence containers include vector, deque, and list. The standard associative containers are set, multiset, map, multimap, hash_set, hash_map, hash_multiset and hash_multimap. There are also container adaptors queue, priority_queue, and stack, that are containers with specific interface, using other containers as implementation.

<b>STD::array</b><br>
<br>
The array is a container for constant size arrays. This container wraps around fixed size arrays and also doesn’t loose the information of its length when decayed to a pointer.
In order to utilize array, we need to include the array header:<br>
 <b>#include <array> </b>
<br>
 <br>
 For Better Understanding refer to STD_ARRAy.CPP<br><br>

