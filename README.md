# C_Programming_Language

PROGRAMMING and C

What is Software?

Software is a collection of instructions and data that tell the computer how to work. This is in contrast to physical hardware, from which the system is built and actually performs the work. In computer science and software engineering, computer software is all information processed by computer systems, including programs and data. Computer software includes computer programs, libraries and related non-executable data, such as online documentation or digital media. Computer hardware and software require each other and neither can be realistically used on its own.At the lowest programming level,executable code consists of machine language instructions supported by an individual processor typically a central processing unit (CPU) or a graphics processing unit (GPU). A machine language consists of groups of binary values signifying processor instructions that change the state of the computer from its preceding state. For example, an instruction may change the value stored in a particular storage location in the computer—an effect that is not directly observable to the user. An instruction may also invoke one of many input or output operations, for example displaying some text on a computer screen; causing state changes which should be visible to the user. The processor executes the instructions in the order they are provided, unless it is instructed to "jump" to a different instruction, or is interrupted by the operating system. As of 2015, most personal computers, smartphone devices and servers have processors with multiple execution units or multiple processors performing computation together, and computing has become a much more concurrent activity than in the past.

The majority of software is written in high-level programming languages. They are easier and more efficient for programmers because they are closer to natural languages than machine languages. High-level languages are translated into machine language using a compiler or an interpreter or a combination of the two. Software may also be written in a low-level assembly language, which has strong correspondence to the computer's machine language instructions and is translated into machine language using an assembler.

What is Hardware?

Computer hardware includes the physical parts of a computer, such as the case, central processing unit (CPU), monitor, mouse, keyboard, computer data storage, graphics card, sound card, speakers and motherboard.

By contrast, software is the set of instructions that can be stored and run by hardware. Hardware is so-termed because it is "hard" or rigid with respect to changes, whereas software is "soft" because it is easy to change.

Hardware is typically directed by the software to execute any command or instruction. A combination of hardware and software forms a usable computing system, although other systems exist with only hardware.

Software Classification
The software can be divided into various groups according to their application areas:

1. Scientific software and engineering software
It is the software used in solving problems in scientific subjects and engineering applications. The amount of data in this type of software is relatively low, but
mathematical and statistical algorithms are used extensively.Such programs mainly involve computational processes and make heavy use of the computer's central processing unit (CPU).Programs that solve electronic circuits, statistical analysis packages, can be given as examples of such programs.

2. Application software
It is software related to database. It is generally about the creation, processing and storage of data in files.Stock control programs, customer monitoring programs, accounting programs can be given as examples of such programs.

3. Artificial intelligence software
They are software that imitate the intellectual or learning-oriented behaviors of people.For example, robot software, programs that play chess or bridge, etc. can be given.

4. Visual software
They are programs in which visual processes and algorithms are used extensively.As an example, game and animation software can be given. These softwares mainly use the computer's graphical interface.

5. Simulation software
They are software used to simulate a system in a computer environment. For example Matlab, Proteus etc.

6. System software
It is the software that manages the electronic structure of the computer. Compilers, communication programs, operating systems are system software.For example, a text processing program is also a system software. They perform lower level processing than application programs.

Evaluation Criteria of Programming Languages

The sources mention the existence of approximately 1000 - 1500 programming languages currently in use.
Why are there so many programming languages?
Why are new programming languages still being designed although there are so many programming languages?
What are the features that make one programming language different from another or others?
What qualifiers can be used if it is necessary to define a programming language?
In order to answer these questions, there should be criteria that allow for evaluation. These criteria are briefly analyzed below:

Programming Language Level

The level of a programming language is the measure of the proximity of that programming language to human perception or a machine. The closer a programming language is to human perception, the higher(higer level) it means. Again, the closer a programming language is to the electronic structure and operating style of the computer, the lower level it means.There is an "instruction set" recognized by the computer's processor. The processor can only run commands within its instruction set. The text written in the programming language is converted into commands in the instruction set of the computer's processor at the end of some processes.Working with high-level languages is easy for the programmer, it does not require a good knowledge of algorithms. Only what to do in these languages is notified to the program, but how will not be notified. In general, the higher the level of the programming language, the easier it is to learn the language and write programs in the language. Machine language is the natural language of the computer, it depends on the hardware design of the computer. With the development of computers, machine languages were the first languages used to make them work. That is why machine languages are also called first generation languages.There are two main problems encountered in using machine language in programs. Codes written in machine language are commands given directly to the machine's processor and hardware parts. When a different CPU is used or the memory arrangement is made differently, the program will no longer work, the program must be rewritten. Because the machine language can only be applied to a specific CPU or CPU series. Machine language is not portable. Another important problem is that writing code in machine language is very troublesome. Writing is time consuming and challenging. In addition, it is very difficult to understand and perceive the written program. Especially when the size of the program increases, it becomes more complicated to develop and enlarge the programs written in machine language. In the beginning there was only machine language. That is why machine languages are also named as 1st generation languages. In the historical development of software and hardware, there is a process ranging from machine language to high-level languages (4th generation languages) very close to human perception.

In the early 1950s, efforts to eliminate the problems caused by the use of machine language had increased. In these years, programs written in machine languages were loaded into the very limited memory of the computer and operated like this. First, a step was taken that partially eliminated the difficulty of perceiving and understanding machine language. Symbolic machine languages have been developed. Symbolic machine languages (Assembly Languages) consisted of some abbreviations, commands, that package a few of the machine commands. The use of symbolic machine languages has become widespread in a short time. However, symbolic machine languages had a major disadvantage compared to machine languages. Programs written in these languages are loaded into the computer's memory like the programs written in machine language, but the commands of the symbolic language were translated into the command by command machine language by the computer with the help of an interpreter program during the execution of the program and the resulting machine code was executed. In other words, the computer interpreted the program in the working phase and translated it into machine language and then executed the commands translated into machine language. When the programs were run this way, they slowed down almost 30 times. Two interpretative programs in particular stood out during this period: the interpreter written by John Mauchly for UNIVAC 1 (1950) and the "Speedcoding" interpretation system written by John Backus for the IBM 701 in 1953. Even though such interpreters were slower than machine code, they were increasing the productivity of programmers. But especially the old machine language programmers said that interpreters were very slow, that only programs written in machine language could be called real programs. This problem has also been overcome. The very bright idea at the time was: Instead of translating the code written into machine language each time the code is run, another program to be developed translates the code written in symbolic language into machine language once, and now, whenever the program is wanted to run, the computer only runs the machine code without interpretation. Grace Hopper developed this idea. Grace Hopper's invention was named "compiler". (Grace Hopper is also one of the team that developed the Cobol language, the word bug was first used by Grace Hopper). Now, programmers were using Assembly programming languages made up of symbolic words, their programs were converted into machine code by the compiler, and the machine code was running at full speed without losing its former speed. Assembly languages took their place in history as 2nd generation languages.

Computer use has increased rapidly with the use of assembly languages. However, the need for many commands to make even the simplest operations to the computer started the search to speed up and facilitate the programming process, as a result, higher-level programming languages began to be developed. In the historical process, languages that were developed later than Assembly languages and higher level languages are considered as 3rd generation languages. These languages are all algorithmic languages. Few of the hundreds of high-level programming languages that have been developed to date have survived to this day. Almost all 3rd generation languages are derived from three main languages. These three languages, which are the first of the 3rd generation languages, still exist: FORTRAN language (FORmula TRANslator) was developed by John Backus for IBM company between 1954 and 1957 for use in engineering and scientific applications requiring complex mathematical calculations. The FORTRAN language is still used in scientific applications where intensive mathematical calculations are required. There are two major versions of the FORTRAN language, FORTRAN IV and FORTRAN 77. In the early nineties ISO and ANSI standards were adopted for a version called FORTRAN 90. FORTRAN language is considered the oldest of the 3rd generation languages. COBOL (COmmon Business Oriented Language) was developed in 1959 by a group of computer manufacturers, private and public sector computer users in the United States. The purpose of COBOL's development was to use a portable programming language to be used in commercial applications where data management is required. The COBOL language is still widely used. ALGOL (The ALGOrithmic Language) was developed in 1958 by a consortium in Europe. Since IBM company adopted the FORTRAN language as the common programming language to be used in its hardware, the Europeans wanted to develop an alternative language. Many design features developed in ALGOL language are used in all modern programming languages. Studies on programming languages in the early 60's brought the concept of structured programming to the agenda. The PASCAL language was developed in 1971 by Professor Niclaus Wirth to introduce the concept of structured programming to academic circles. The creator of the language named language after the mathematician and philosopher Blaise Pascal. This language became the programming language used in universities in a short time. The Pascal language lacks some of the features it should have to support commercial and industrial applications, which has restricted its use. Modula and Modula-2 languages are developed based on Pascal language. BASIC language was developed in the mid-1960s by John Kemeney and Thomas Kurtz. It is said that the name BASIC is derived from the initials of the words "Beginner's All Purpose Symbolic Instruction Code". It is one of the oldest and simplest of the high-level languages. For all its simplicity, it has been used in many commercial applications. BASIC language is also standardized by ANSI. However, there are versions of the BASIC language with additional features. For example, many features related to object oriented programming have been added to the Visual Basic language released by Microsoft.Later this language was named Visual Basic dot Net. In addition, some versions of the BASIC language have been generally accepted as the programming language used in application programs, such as MS Excel and MS Word programs, to write macros that the user will write for customization and automation. The ADA language, on the other hand, was developed starting in the 70's with the support of the American Defense Department. DoD is one of the largest computer users in the world. This institution used many different programming languages to meet different software requirements. The institution was looking for a language that would meet all of its needs. It organized an international competition to design the language. The winning company (CII-Honeywell Bull of France) developed the Ada language as a result of the work it started based on Pascal language. Documents of the ADA language were published in 1983. ADA refers to the name of Lady Ada Lovelace, the daughter of the philosopher Lord Byron. ADA was an assistant to Charles Babbage, who was the first to use Lovelace punch cards in calculators. Charles Babbage worked on the construction of machines named "Difference Machine" and "Analytical Machine" throughout her life, but died before she could realize these projects. Nevertheless, the designs she developed are considered the ancestors of modern computers. Ada Lovelace was preparing punch cards and algorithms for Charles Babbage's machine. It is considered that Lovelace wrote the first computer program in the early 1800s. Ada is a general purpose language, it is used in many different areas, from commercial applications to routing rockets. One of the important features of the language is that it supports real-time applications and embedded systems. Another feature was that it facilitated the writing of large programs due to its highly modular structure. However, the need for large, complex compilers made it difficult to compete against C, Modula-2 and C ++ languages. Languages in which very high-level programs and programs that do not generally contain algorithmic structures are written in a visual environment are called 4th generation languages. They are the closest to human perception. RPG language can be considered as the first of the 4th generation languages. It was developed by IBM company, especially when companies that are users of small IBM machines requested an easy language for report generation. 

Very high-level languages or visual languages or environments (visual languages): Access, Foxpro, Paradox, Xbase, Visual Basic, Oracle Forms.

High level languages. Fortran, Pascal, Basic, Cobol.

Intermediate programming languages: Ada, C (Intermediate languages run faster as they can be translated into machine language with less loss).

Low-level programming languages: Symbolic machine language (Assembly language).

Machine language: The lowest level programming language. Pure machine language consists entirely of 1s and 0s.

Legibility

Readability is a term that means the source code can be perceived quickly and well. When it comes to the readability of the source code, the responsibility lies largely on the programmer who wrote the program. However, as in productivity, some of the languages have structures and tools that improve readability, so this feature depends on the design of the programming language to some extent. The best program code is not "the most cleverly written code that nobody can understand", as it might seem.In many cases, good programmers don't want to sacrifice readability for anything. Because a readable program allows for updating even after years due to its easy perception feature. Readability becomes even more important in large-scale projects where many programmers work on common codes. Readability in C is one of the most emphasized concepts. 

Portability

Portability means that the source code written for one system can be compiled correctly and executed correctly when taken to another system. Portability also means standardization. They are standardized by programming languages (ISO International Standard Organization) and ANSI (American National Standard Institute). C Language, whose standards were first created in 1989, is a more portable programming language than other programming languages. 

Productivity

Efficiency is the ability of a program to run fast and use less memory. The speed at which the program runs and the amount of memory it uses depends on many factors. Undoubtedly, the algorithm used also has an effect on the speed and memory used. The computer on which the program is run naturally has an effect on speed. Efficiency can be regarded as a criterion of the memory space and working speed of a program written in a programming language. It can be said that the design of the programming language used is also effective on efficiency, leaving other factors that may play a role in productivity.From this point of view, C is a productive language.

Usage Area

Some languages are designed for a specific application area. There are programming languages designed and used for system programming, artificial intelligence applications, simulation applications, database inquiries, and game programs. Some languages have a wider usage area. For example, a language designed for use in database queries can also be used in engineering applications. Although C language was born as a system programming language, it became a general purpose language in a short time due to its strong structure. Whereas PASCAL, BASIC are much more general purpose languages. C is a language whose main application is "system programming". However, programs were written in C language for almost all application areas.

Classification According to Application Areas

We can also group programming languages according to their application areas:

1. Scientific and engineering application languages:
Pascal, C, FORTRAN.
C Programming language is used extensively in academic studies at universities.

2. Database languages:
XBASE, (Foxpro, Dbase, CA-Clipper), Oracle Forms, Visual Foxpro.

3. General purpose programming languages:
Pascal, C, Basic.

4. Artificial intelligence languages:
Prolog, Lisp.

5. Simulation languages:
GPSS, Simula 67

6. Macro Languages: (Scripting languages)
awk, Perl, Python, Tcl, JavaScript.

7. System programming languages:
Symbolic machine languages, BCPL, C, C ++, occam.

Today, we can say that almost all system software is written in C language.










