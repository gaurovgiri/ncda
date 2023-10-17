# NCDA - NCurses Disk Analyzer

## Overview
NCDA (NCurses Disk Analyzer) is a command-line tool designed to help you analyze and visualize disk usage on your system using the NCurses library. With NCDA, you can quickly gain insights into how your storage space is being utilized, identify large or unnecessary files and directories, and make informed decisions about managing your disk space.

## Features
- Intuitive NCurses-based user interface.
- Scan and analyze disk usage on a specific directory or the entire system.
- Display disk usage statistics for files and directories.
- Sort and filter files and directories by size, date, or other attributes.
- Interactive navigation and exploration of disk space.
- Color-coded visualization to highlight different file types.
- Quickly identify the largest files and directories consuming the most space.
- Provides a helpful tool for disk cleanup and optimization.

## Installation
NCDA is written in C and requires the NCurses library. You can compile and install it as follows:

```bash
git clone https://github.com/yourusername/ncda.git
cd ncda
make
sudo make install
```

## Usage
After installing NCDA, you can run it from the command line:

```bash
ncda /path/to/directory
```

For more information on usage and available commands, you can check the help:

```bash
ncda --help
```

## Support and Issues

If you encounter any problems or have suggestions for improvements, please report them on the [Github Issue Tracker](https://github.com/gaurovgiri/ncda/issues).
