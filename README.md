# Writing Pseudocode: A Beginner's Guide

![Writing Pseudocode Article Cover](https://res.cloudinary.com/bizstak/image/upload/v1685295673/GitHub_Cover_qwkpme.png)

**Pseudocode** is a valuable tool for expressing algorithms in a high-level and abstract manner. It serves as a bridge between human understanding and actual programming languages. In this blog post, we will explore what pseudocode is, and its purpose, and provide examples of its usage in real-life scenarios.

## What is Pseudocode?

Pseudocode is not an actual programming language but a representation of code that resembles a programming language without adhering to its strict syntax rules. The term _pseudo_ refers to something false or fake, indicating that pseudocode is a simulated version of code. It allows programmers to focus on the logic and functionality of an algorithm rather than the specific language syntax.

## The Purpose of Pseudocode

The primary purpose of pseudocode is to provide a high-level and abstract representation of an algorithm, independent of any particular programming language. By using pseudocode, programmers can simplify complex problems, avoid language-specific limitations, and facilitate understanding and implementation across different languages.

Pseudocode acts as a communication tool between programmers, enabling them to discuss and share algorithms without being constrained by specific programming languages. It allows for flexibility, as the same algorithm can be implemented in different languages based on the pseudocode's logic and structure.

## Exam Board Pseudocode

In academic settings, exam boards often use standardized pseudocode in their questions and marking schemes. While these standardized versions of pseudocode may differ slightly between exam boards, they serve the purpose of ensuring consistency and ease of evaluation. However, it's important to note that these specific syntax rules are often only applicable within the context of exams and may not reflect real-world pseudocode usage.

## Real-Life Examples

To understand how pseudocode is used in practice, let's examine some real-life examples. One such example can be found in university textbooks, where complex algorithms are explained using pseudocode. These textbooks often present machine learning algorithms, such as decision trees, and provide pseudocode representations to illustrate their functionality.

While the pseudocode in textbooks may appear different from what you encounter in exams, the core concepts remain the same. Pseudocode still utilizes familiar programming constructs like _functions_, _parameters_, _conditionals_ (_if-else statements_), _loops_, and _variables_. The notation used in these examples simplifies the algorithm's implementation while excluding language-specific details.

Using pseudocode instead of actual programming languages has several advantages. Pseudocode condenses complex algorithms into concise representations, making them easier to understand. It also allows for algorithm portability, enabling programmers to implement the same logic across different programming languages. Additionally, pseudocode serves as a future-proof solution since it remains relevant even as programming languages evolve.

## Understanding Pseudocode

Pseudocode is a simulated version of code that resembles a programming language but does not adhere to its strict syntax rules. It aims to focus on the logic and functionality of an algorithm, making it independent of any specific programming language. Pseudocode facilitates communication among programmers and enables the implementation of algorithms across different languages.

## Writing Pseudocode

When writing pseudocode, remember that there is no one correct syntax. It's more important to focus on the algorithm's logic and functionality rather than adhering to specific formatting rules. Pseudocode should be clear and easily understandable by competent programmers familiar with the problem domain.

To illustrate the process of writing pseudocode, let's consider an example.

```txt
Example pseudocode for finding the average of two numbers.

Main program
input1 = get user input for number1
input2 = get user input for number2
result = calculateAverage(input1, input2)
display result
```

If I was to implement the logic in code using JavaScript, it would look like the example below:

```js
function calculateAverage(number1, number2) {
    sum = number1 + number2
    average = sum / 2
    return average
}

calculateAverage(2, 8)
```

In this example, we define a function `calculateAverage` that takes two numbers as input, calculates their sum, computes the average, and returns it. The main program obtains user inputs, calls the `calculateAverage` function, and displays the result.

Here is another example:

```txt
The Problem:
Write a program that prints the number from 1 to 20:

For multiples of three print `"FIZZ"` instead of the number
For the multiple of five print `"Buzz"` instead of the number
For numbers which are multiples of both three and five print `"FizzBuzz"`
For numbers not divisible by 3, 5, or both print the number as 15.
```

The pseudocode would look like this:

```txt
FOR LOOP:
SET counter to 1
Break when counter reaches 20
Increment counter by 1
    IF number MOD 15 === 0
        print 'FizzBuzz'
    ELSE IF number MOD 3 === 0
        print 'Fizz'
    ELSE iF number MOD 5 === 0
        print 'Buzz'
    ELSE
        print number
```

Someone else could write the code as shown below and they will mean the same:

```txt
FOR i = 1 to 20 DO
    IF i is divisible by 3 and 5 THEN
        PRINT "FizzBuzz"
    ELSE IF i is divisible by 3 THEN
        PRINT "Fizz"
    ELSE IF i is divisible by 5 THEN
        PRINT "Buzz"
    ELSE
        PRINT i
    END IF
END FOR
```

The code snippets show that writing pseudocode is based on your pattern.

Note that using this keyword like `FOR`, `IF`, `ELSE IF` `ELSE`, `END`, etc. are not mandatory because Pseudocode is flexible and allows for the use of alternative keywords or descriptive phrases as long as they effectively convey the intended logic and structure of the algorithm.

For example, instead of using `FOR`, you could use `REPEAT` or `LOOP`. Similarly, instead of `END`, you could use `STOP` or `FINISH`. The key is to maintain consistency within your pseudocode and ensure that the chosen keywords or phrases accurately represent the intended flow of the algorithm. The example below is the same as the pseudocode above but with a different approach.

```txt
Set i as 1
Repeat until i reaches 20:
    If i is divisible by both 3 and 5:
        Output "FizzBuzz"
    Otherwise, if i is divisible by 3:
        Output "Fizz"
    Otherwise, if i is divisible by 5:
        Output "Buzz"
    Otherwise:
        Output i
    Increment i by 1
End repeat
```

The code in JavaScript would look like this:

```js
for (let i = 1; i <= 20; i++) {
    if (i % 15 === 0) {
        console.log('FizzBuzz')
    } else if (i % 3 === 0) {
        console.log('Fizz')
    } else if (i % 5 === 0) {
        console.log('Buzz')
    } else {
        console.log(i)
    }
}
```

As you can see, the pseudocode resembles a programming language but avoids specific syntax requirements.

### Tips for Writing Pseudocode

#### Familiarize Yourself with Real Code

To effectively write and understand pseudocode, it is crucial to have a foundation in a real programming language. Learning a programming language such as Python or Java will provide you with the necessary knowledge and concepts to express algorithms in pseudocode.

#### Simplify and Generalize

When writing pseudocode, aim to simplify the code by excluding language-specific details and unnecessary complexities. Make it as general as possible while retaining clarity and readability. Remember, pseudocode is a high-level representation, so focus on expressing the algorithm's logic rather than the specific syntax.

#### Be Consistent

Maintain consistency in your pseudocode by using a uniform style and notation throughout. Choose a convention for variable assignment, function calls, and control structures (such as braces or indentation) and stick to it. Inconsistencies can lead to confusion and may result in lower marks in examinations.

#### Practice Problem Solving

To improve your pseudocode writing skills, engage in problem-solving exercises that require expressing solutions using pseudocode. Work through algorithmic questions and practice implementing the logic in pseudocode. This practice will enhance your ability to translate real-world problems into pseudocode representations.

#### Learn from Examples and Resources

Study examples of pseudocode from textbooks, online resources, and tutorial videos. Analyze how experts express complex algorithms in pseudocode and learn from their approach. Additionally, seek out resources specific to your academic curriculum or exam board for standardized pseudocode guidelines.

#### Remember, Pseudocode Is Not Executable Code

Always keep in mind that pseudocode is a simplified representation and is not meant to be executed as actual code. It is a tool for communicating algorithmic ideas, not a programming language itself. Therefore, don't stress over small syntax details or worry about the code's executability.

---

## References

- [Hashnode](https://blog.techstackmedia.com/writing-pseudocode-a-beginners-guide)
- [Dev.to](https://dev.to/bello/writing-pseudocode-a-beginners-guide-1b73)

---

Click on the button dropdown to see my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)
