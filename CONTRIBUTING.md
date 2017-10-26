# Hacktoberfest - Allen Computer Science
Welcome, learn more about making contributions here.
#### Table of Contents
[Styleguides](#styeguides)

[Pull Requests](#pull-requests)
## Styleguides

* Try to keep things as modular as possible, the new file/directory structure should be:
```
/topic/sub_topic/specific/language/file(s)
```
I would prefer different languages in different files, under same topic.

## Pull Requests
If you would like to submit changes for review and merging with the original
repository via a pull request:
1. Fork this repository using button on top right corner of repository page.
2. Navigate to forked repository (under your profile) and clone to local
  machine.
```bash
$ git clone <repository link>
```
3. Make changes to code, test, repeat.
4. Stage and commit your changes:
```bash
$ git add <file or directory>
$ git commit -m "<your message>"
```
5. Push your commit to your repository:
```bash
$ git push origin master
```
6. Navigate to the parent repository (one you forked from)
7. Press "New pull request" button and select "compare across forks".
8. Choose the parent as the base fork and your repository as the head fork.
9. Add a comment and submit!
