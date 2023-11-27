# CIS6614-Term_Project
Term Project Dataset
Abstract
The imperative need for software testing while building complex and intensive software program for ensuring integrity and security led to the bespoke tool like KLEE. KLEE is a symbolic execution tool that caters for generating test cases to identify vulnerabilities. KLEE built on the LLVM framework ensures high code coverage and branch exploration. The report discusses the usage and validation of KLEE and theoretical differences between different techniques used for solving buffer overflow and format string errors. The report also explores symbolic execution tool like Symcc with fuzzing techniques and talks about challenges in replicating the results shown in the Symcc paper while comparing the tool with KLEE.

KLEEInstallation:
To be able to use KLEE tool we need a container. We have used docker to create a container. For creating docker we need to install the docker through terminal. We need to include sudo to provide admin previlege to install the libraries. We could directly go to the normal directory and follow the below steps:
1.	$ sudo apt install gnome-terminal
2.	$ sudo apt remove docker-desktop
3.	rm -r $HOME/.docker/desktop
4.	sudo rm /usr/local/bin/com.docker.cli
5.	sudo apt purge docker-desktop
6.	$ sudo apt-get update
7.	$ sudo apt-get install ./docker-desktop-<version>-<arch>.deb
After the above steps, follow steps from report.

To Analyze output use below commands: 
-	clang -emit-llvm -g -c <.c file>: This command converts the c code to bit code for klee to be able to test.
-	klee --libc=uclibc <.bc bit code file>: to implement klee on bit code file.
-	klee-stats . : This command gives results as shown below. It lists out all the parameters for the program results obtained.
-	Ktest-tool <.ktest file>: this command helps open and read the test cases created by KLEE.

