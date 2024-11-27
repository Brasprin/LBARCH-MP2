# **LBYARCH GROUP 7 MP2**

**Authors**: Joshua Alexander R. Laxa, Andrei G. Tamse
<br><br>

### **OVERVIEW**

This project focuses on creating a program in both C and Assembly to compute the Euclidean Distance in a 2D space. The study aims to 
evaluate the efficiency of these two programming languages in performing computational tasks by analyzing their runtime performance.

The Euclidean Distance formula, a measure of the straight-line distance between two points in a 2D plane, is computed using the 
following four vectors:

>X₁, X₂: Representing the x-coordinates of two points.<br>
>Y₁, Y₂: Representing the y-coordinates of two points.

>The resulting computed distance is stored in Z, calculated using the standard formula:
>![image](https://github.com/user-attachments/assets/3e805211-58db-4067-b239-253d7386b5e3)
<br><br>

### **OBJECTIVES**

**1.) Implementation in C and Assembly:**<br>
Develop two separate versions of the program, one in C and   the other in Assembly, to calculate the Euclidean Distance.

**2.) Performance Comparison:**<br>
Conduct a detailed comparison of the two implementations by measuring and analyzing their runtime efficiencies.

**3.) Evaluation of Runtime:**<br>
Measure the runtime of each kernel (C and Assembly) over varying vector sizes to evaluate performance under different computational loads.

**4.) Averaged Runtime Analysis:**<br>
To ensure accurate and reliable results, each version is executed 30 times, and the average runtime is calculated.
<br>

To explore performance at different computational scales, the program uses three distinct vector sizes:<br>
1.) 2²⁰ (1,048,576)<br>
2.) 2²⁴ (16,777,216)<br>
3.) 2²⁷ (134,217,728)<br>

Each vector size represents the number of data points processed during computation. This strategy helps in assessing how the 
implementations scale with increasing workload.<br><br>


### **RESULTS AND PERFORMANCE ANALYSIS**
<br><br>
![image](https://github.com/user-attachments/assets/b66ede68-f0dd-493a-b3ef-60d2deba32d0)<br><br>
For a vector size of 1,048,576, the assembly version achieved an average execution time of 0.000270 seconds, significantly outperforming 
the C version, which had an average 
execution time of 0.000607 seconds.
<br><br>
![image](https://github.com/user-attachments/assets/e4cbcd28-c774-4fad-9a5d-713e6d2580e0)<br><br>
For a vector size of 16,777,216, the assembly version maintained its excellent performance with an average execution time of 0.004223 seconds, 
compared to the C version's 0.009970 seconds. 
<br><br>
![image](https://github.com/user-attachments/assets/c6ce25b9-78e0-412a-9cc7-2317168c53ca)<br><br>
For a larger vector size of 134,217,728, the assembly implementation achieved an average 
execution time of 0.058117 seconds, while the C version required 0.114223 seconds, resulting in a difference of 65.11%.

<br>

The performance analysis of the assembly and C implementations in calculating the Euclidean distance across varying vector sizes reveals 
consistent superiority of the assembly approach. Key observations include:

**1. Small Vector Size (1,048,576):**

>**Assembly:** Achieved an average execution time of 0.000270 seconds. <br>
**C:** Achieved an average execution time of 0.000607 seconds.<br>
**Difference:** Assembly was 76.85% more efficient, showcasing its optimization for smaller computations.<br>

**2. Medium Vector Size (16,777,216):**

>**Assembly:** Achieved an average execution time of 0.004223 seconds.<br>
**C:** Achieved an average execution time of 0.009970 seconds.<br>
**Difference:** Assembly was 80.98% more efficient, demonstrating scalability as vector sizes increased.<br>

**3. Large Vector Size (134,217,728):**

>**Assembly:** Achieved an average execution time of 0.058117 seconds.<br>
**C:** Achieved an average execution time of 0.114223 seconds.<br>
**Difference:** Assembly maintained a 65.11% efficiency advantage, confirming its capability to handle extensive computational loads
effectively.<br><br>

The results reveal how assembly's direct interaction with hardware makes it more efficient than C, which relies on higher-level abstractions. 
Several factors account for this difference:<br>

**a.) Direct Hardware Control in Assembly:**<br>
Assembly allows explicit control over CPU registers, instruction pipelines, and memory operations, minimizing overhead and execution time.<br><br>

**b.) Library Dependency in C:**<br>
C implementations typically depend on standard libraries (e.g., math.h) for functions such as square root and addition. While these libraries 
offer convenience and portability, they introduce additional layers of abstraction and function calls, which increase execution time. Assembly, 
on the other hand, avoids such dependencies by implementing computations directly at the instruction level.<br><br>

**c.) Compiler Optimizations in C:**<br>
While modern C compilers attempt to optimize code for performance, they cannot achieve the level of efficiency provided by assembly. Compilers 
prioritize general-purpose optimization over hardware-specific tuning, which results in slower performance compared to assembly codes.<br><br>

**d.) Scalability and Resource Management:**<br>
As vector sizes grow, assembly's efficient memory handling and direct data manipulation become more apparent. In contrast, C's reliance on library functions 
and intermediate abstractions causes a proportional increase in execution time.<br><br>

### CONCLUSION<br>
These findings highlights assembly's advantage in performance-critical applications, especially when computational speed and resource efficiency are vital. 
However, the disadvantage is the complexity of assembly programming, which requires a deeper understanding of hardware and more development effort compared to the 
higher-level, library-dependent approach of C. For projects prioritizing quick development and maintainability, C remains a good choice, but for absolute 
performance, assembly is unparalleled.
