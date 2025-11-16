# C++ STL CHEATSHEET

## Vector
- push_back(), pop_back(), emplace_back()
- size(), capacity(), reserve()
- at(), [], front(), back()
- insert(), erase(), clear(), empty()
- begin(), end(), rbegin(), rend()

## Stack
- push(), pop(), top(), empty()

## Queue
- push(), pop(), front(), back()

## Priority Queue
- max-heap (default)
- min-heap: priority_queue<int, vector<int>, greater<int>>

## Deque
- push_front(), push_back()
- pop_front(), pop_back()

## List
- push_front(), push_back()
- pop_front(), pop_back()
- insert(), erase()

## Set
- stores sorted unique elements
- insert(), erase(), find()
- lower_bound(), upper_bound()

## Unordered Set
- stores unique elements (hashing)
- O(1) average for insert/find

## Map
- key-value pairs (sorted keys)
- operator[] for insertion/access
- insert(), erase(), find()

## Unordered Map
- key-value pairs (hash map)
- O(1) average for access/insert

## Algorithms (<algorithm>)
- sort(), stable_sort()
- reverse(), rotate()
- max_element(), min_element()
- next_permutation()
- binary_search(), lower_bound(), upper_bound()

## Utility
- pair, tuple
- make_pair(), tie()
