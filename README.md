# Process Handling with Fork
![GitHub repo size](https://img.shields.io/github/repo-size/zitske/Process-Handling-with-Fork?style=for-the-badge)
![GitHub language count](https://img.shields.io/github/languages/count/zitske/Process-Handling-with-Fork?style=for-the-badge)
![GitHub forks](https://img.shields.io/github/forks/zitske/Process-Handling-with-Fork?style=for-the-badge)
![Bitbucket open issues](https://img.shields.io/bitbucket/issues/zitske/Process-Handling-with-Fork?style=for-the-badge)
![Bitbucket open pull requests](https://img.shields.io/bitbucket/pr-raw/zitske/Process-Handling-with-Fork?style=for-the-badge)

### Requirements

The following requirements was mandatory:

The Fibonacci series is formally expressed as: 
fib0 = 0
fib1 = 1
fibn = fibn-1 + fibn-2
- [x] Assume a variation of the series created from 2 values provided by the user and the other terms generated in the same way as the Fibonacci series.
- [x] Implement a C program that reads an integer value N, which represents the number of elements to be printed in the output.
- [x] With the help of the fork() system call, the program must create a child process, which must generate the next N terms of the variation of the Fibonacci series, explained earlier. The generated series, along with the first 2 user-supplied terms, should be printed on the output.
- [x] The parent process must generate and print the first N prime numbers. Have the parent process invoke the wait() system call to wait for the child process to finish, then print its output (the N prime numbers) and terminate.
- [x] Each process must show its PID and PPID (process id and parent id). 
- [x] Each process must inform when finished, through a message.

### Expected output

![alt text](https://github.com/zitske/Process-Handling-with-Fork/blob/main/output.png?raw=true)

## 📝 License

This project is under license. See the [LICENSE](LICENSE.md) file for more details.

[⬆ Back to the top](#Process-Handling-with-Fork)<br>
