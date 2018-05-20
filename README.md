# Introduction 
TODO: Give a short introduction of your project. Let this section explain the objectives or the motivation behind this project. 

# Getting Started
TODO: Guide users through getting your code up and running on their own system. In this section you can talk about:
1.	Installation process
2.	Software dependencies
3.	Latest releases
4.	API references

## Tools and Extensions

- UVa Online Judge Chrome web extension (https://chrome.google.com/webstore/detail/uva-quick-access-tool/ohmmnbcombfdichbnnlhkijfdmkgllhe)

### VS Code Extensions

- https://github.com/lucastan/uva-node

#### uva-node

Useful commands:

- view 123
- send 123
- stat
- tpl show

Command to add UVA account:

- `add uva barnsoc4 <password>`

Command to set user account to default:

- `use uva barnsoc4` or `use`

Command to show user accounts

- `show`

If you need to install:

- clone repo `git clone https://github.com/lucastan/uva-node.git`
- install globally with `npm install -g uva-node`

To update:

- do `git pull` in the uva-node directory

# Build and Test

Each UVa problem is contained by a single *.cc/*.cpp file, where the file name is the problem ID. Typical compiler used in competition is GCC, and a typical compile operation would look like the following:

```
g++ -std=c++11 123.cc -Wall -o 123
``` 

# Resources
TODO: add links and resources.