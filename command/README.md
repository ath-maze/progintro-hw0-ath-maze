Before every command type "ls" to see the files and directories in current directory

bandit0: Connect as bandit0 at bandit.labs.overthewire.org -p 2220 and type the password, logout and connect to bandit1
bandit1: as bandit0 write "cat readme" to get the new password and after logging out write it in solution.txt
bandit2: as bandit1 write "cat ./-" to get the new password and after logging out write it in solution.txt
bandit3: as bandit2 write "cat spaces\ in\ this\ directory" to get new password and after logging out write it in solution.txt
bandit4: as bandit3 write "ls -la" to see the hidden directory, "cd inhere" to open said directory, "ls -la" to see the hidden file, "cat .hidden" to get the new password and after logging out write it in solution.txt
