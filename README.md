# Nice verbose cli
A cli version of the [Nice verbose c++ library](https://www.github.com/lewisevans2007/nice_verbose)

![Example](https://raw.githubusercontent.com/lewisevans2007/nice_verbose_cli/master/doc/example.png)

## What is nice verbose?
Nice verbose is a c++ library that allows you to print verbose messages to the console in a nice format. The cli version of this library allows you to use the same verbose messages in your bash scripts.

## Usage
```bash
nverbose [options] [message]
```

## Options
### Icon mode
```bash
-debug [message] - Prints a debug verbose message
-log [message] - Prints an log verbose message
-info [message] - Prints an info verbose message
-warn [message] - Prints a warning verbose message
-question [message] - Prints a question verbose message
-error [message] - Prints an error verbose message
-critical_error [message] - Prints a critical verbose message
-major_critical_error [message] - Prints a major critical verbose message
-success [message] - Prints a success verbose message
-important [message] - Prints an important verbose message
```
### Text mode
```bash
-t_ok [message] - Prints a ok verbose message
-t_info [message] - Prints an info verbose message
-t_warn [message] - Prints a warning verbose message
-t_error [message] - Prints an error verbose message
-t_critical_error [message] - Prints a critical verbose message
-t_major_critical_error [message] - Prints a major critical verbose message
-t_failed [message] - Prints a failed verbose message
```