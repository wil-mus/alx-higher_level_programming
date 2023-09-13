JavaScript - Objects, Scopes and Closures

An object is a collection of related data and/or functionality. These usually consist of several variables and functions (which are called properties and methods when they are inside objects). Let's work through an example to understand what they look like.

Classes in JavaScript

Classes and constructors
You can declare a class using the class keyword. Here's a class declaration for our Person from the previous article:

JS
Copy to Clipboard

class Person {
  name;

  constructor(name) {
    this.name = name;
  }

  introduceSelf() {
    console.log(`Hi! I'm ${this.name}`);
  }
}
This declares a class called Person, with:

a name property.
a constructor that takes a name parameter that is used to initialize the new object's name property
an introduceSelf() method that can refer to the object's properties using this.
The name; declaration is optional: you could omit it, and the line this.name = name; in the constructor will create the name property before initializing it. However, listing properties explicitly in the class declaration might make it easier for people reading your code to see which properties are part of this class.

You could also initialize the property to a default value when you declare it, with a line like name = '';.

The constructor is defined using the constructor keyword. Just like a constructor outside a class definition, it will:

create a new object
bind this to the new object, so you can refer to this in your constructor code
run the code in the constructor
return the new object.
Given the class declaration code above, you can create and use a new Person instance like this:

JS
Copy to Clipboard

const giles = new Person("Giles");

giles.introduceSelf(); // Hi! I'm Giles
Note that we call the constructor using the name of the class, Person in this example.

Omitting constructors
If you don't need to do any special initialization, you can omit the constructor, and a default constructor will be generated for you:

JS
Copy to Clipboard

class Animal {
  sleep() {
    console.log("zzzzzzz");
  }
}

const spot = new Animal();

spot.sleep(); // 'zzzzzzz'

