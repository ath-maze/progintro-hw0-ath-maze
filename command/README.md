Before every command type "ls" to see the files and directories in current directory

bandit0: Connect as bandit0 at bandit.labs.overthewire.org -p 2220 and type the password, logout and connect to bandit1
bandit1: as bandit0 write "cat readme" to get the new password and after logging out write it in solution.txt
bandit2: as bandit1 write "cat ./-" to get the new password and after logging out write it in solution.txt
bandit3: as bandit2 write "cat spaces\ in\ this\ directory" to get new password and after logging out write it in solution.txt
bandit4: as bandit3 write "ls -la" to see the hidden directory, "cd inhere" to open said directory, "ls -la" to see the hidden file, "cat .hidden" to get the new password and after logging out write it in solution.txt
bandit5: as bandit4 write "find . type - f | xargs file" to see which files are human-readable (the ones with ASCII text), "cat -- -file07" to get the new password and after logging out write it in solution.txt
bandit6: as bandit5 write "cd inhere" to open the directory, "find . -type f -size 1033c" to see the only file with those requirements, "cd maybehere07" to open the directory, "cat .file2" to get new password and after logging out write it in solution.txt
bandit7: as bandit6 write "file / -type f -user bandit7 -group bandit6 -size 33c" to find the filepath of the one file that does not have permission denied, copy the filepath, write "cat /var/lib/dpkg/info/bandit7.password" to get the new password and after logging out write it in solution.txt
bandit8: as bandit7 write "grep millionth data.txt" to get the new password and after logging out write it in solution.txt
bandit9: as bandit8 write "sort data. txt | uniq -c" to get a list of sorted passwords with the number of their duplicates in the file, the one with the number 1 is the new password, copy it and after logging out write it in solution.txt
