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
<b>5.Multiset</b><br>
Multisets are containers that store elements following a specific order, and where multiple elements can have equivalent values.
<br>
In a multiset, the value of an element also identifies it (the value is itself the key, of type T). The value of the elements in a multiset cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.
<br>
Internally, the elements in a multiset are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
multiset containers are generally slower than unordered_multiset containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.
Multisets are typically implemented as <b>binary search trees</b>.<br><br>
For Better Understanding refer to multiset.cpp and multiset2.cpp<br><br>

<b>6.Map</b><br>
Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
<br>
In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. The types of key and mapped value may differ, and are grouped together in member type value_type, which is a pair type combining both:
<br><br>
typedef pair<const Key, T> value_type;
<br><br>
Internally, the elements in a map are always sorted by its key following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).
map containers are generally slower than unordered_map containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.The mapped values in a map can be accessed directly by their corresponding key using the bracket operator ((operator[]).
Maps are typically implemented as <b>binary search trees</b>.<br><br>
For Better Understanding refer to Map.cpp and Map2.cpp<br><br>
<b>7.MultiMap</b><br>
Multimaps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order, and where multiple elements can have equivalent keys.
In a multimap, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. The types of key and mapped value may differ, and are grouped together in member type value_type, which is a pair type combining both:
<br><br>
typedef pair<const Key, T> value_type;
<br><br>
Internally, the elements in a multimap are always sorted by its key following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).<br>
<br>
For Better Understanding refer to multimap.cpp<br><br>
<b>8.Emplace</b><br>
 Takes advantage of the rvalue reference to use the actual objects that you have already created. This means that no copy or move constructor is called, good for LARGE objects! O(log(N)) time.<br><br>
 For Better Understanding refer to emplace.cpp<br><br>
<b>9.Forward List</b><br>
Forward list in STL implements singly linked list. Introduced from C++11, forward list are useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements.
<br>
Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of graph, etc.
<br><br>
 For Better Understanding refer to ForwardList.cpp<br><br>

