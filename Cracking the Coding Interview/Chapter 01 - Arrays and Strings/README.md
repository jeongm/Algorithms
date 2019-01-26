# CH 1 Arrays and Strings
## Hash Tables
- Map keys to values for efficient lookup.
- One implementation is using hashing function
  - compute key's hashcode (int / long): different keys __can__ have same hashcode
  - map hashcode to index in the array: again, different hashcodes __can__ have same index
  - store key and value pairs.
  - "bucket" analogy, array of linked lists
    - h -> i -> l

## Arraylist and Resizable (dynamic) lists
- some arrays are automatically resizable, some are not (size should be defined on init)
  - Java: `array` is not resizable
  - C++: `array` is not resizable 
  - Python: `list` is resizable
- Java `ArrayList`
  - resizes itself as needed (doubles when full, O(N))
  - doubling happens rarely, so amortized O(1) access time.
- Resizing factor may vary by languages
  - TODO : lookup for C++


## Stringbuilder
- A Java Class that helps easier handling string 
- String is immutable in Java (Note the difference from C-strings)
```String joinWords(String[] words){
StringBuilder sentence  = new StringBuilder();
for (String w: words){
sentence.append(w);
}
return sentence.toString();
}
```

## Summary 


|type|lookup time|etc|
|---|---|---|
|Hash table|O(N) / O(1)| |
| ArrayList|O(N) / __O(1)__| |
