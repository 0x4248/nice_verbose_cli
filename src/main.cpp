/* Nice verbose cli (main.cpp)
 * A cli version of the nice verbose c++ library
 * Github: https://www.github.com/lewisevans2007/nice_verbose_cli
 *
 * Main entry point for the cli
 */

#include <iostream>

#include "nice_verbose.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "Usage: nice_verbose_cli [command] [message]" << std::endl;
        std::cout << "\t-debug [message] - Prints a debug verbose message"
                  << std::endl;
        std::cout << "\t-log [message] - Prints an log verbose message"
                  << std::endl;
        std::cout << "\t-info [message] - Prints an info verbose message"
                  << std::endl;
        std::cout << "\t-warn [message] - Prints a warning verbose message"
                  << std::endl;
        std::cout << "\t-question [message] - Prints a question verbose message"
                  << std::endl;
        std::cout << "\t-error [message] - Prints an error verbose message"
                  << std::endl;
        std::cout
            << "\t-critical_error [message] - Prints a critical verbose message"
            << std::endl;
        std::cout << "\t-major_critical_error [message] - Prints a major "
                     "critical verbose message"
                  << std::endl;
        std::cout << "\t-success [message] - Prints a success verbose message"
                  << std::endl;
        std::cout
            << "\t-important [message] - Prints an important verbose message"
            << std::endl;
        std::cout << "\t-t_ok [message] - Prints a ok verbose message"
                  << std::endl;
        std::cout << "\t-t_info [message] - Prints an info verbose message"
                  << std::endl;
        std::cout << "\t-t_warn [message] - Prints a warning verbose message"
                  << std::endl;
        std::cout << "\t-t_error [message] - Prints an error verbose message"
                  << std::endl;
        std::cout << "\t-t_critical_error [message] - Prints a critical "
                     "verbose message"
                  << std::endl;
        std::cout << "\t-t_major_critical_error [message] - Prints a major "
                     "critical verbose message"
                  << std::endl;
        std::cout << "\t-t_failed [message] - Prints a failed verbose message"
                  << std::endl;
        return 0;
    }
    std::string message;
    for (int i = 2; i < argc; i++) {
        message += argv[i];
        message += " ";
    }
    if (std::string(argv[1]) == "-debug") {
        nice_verbose::debug(message);
    }
    if (std::string(argv[1]) == "-log") {
        nice_verbose::log(message);
    }
    if (std::string(argv[1]) == "-info") {
        nice_verbose::info(message);
    }
    if (std::string(argv[1]) == "-warn") {
        nice_verbose::warn(message);
    }
    if (std::string(argv[1]) == "-question") {
        nice_verbose::question(message);
    }
    if (std::string(argv[1]) == "-error") {
        nice_verbose::error(message);
    }
    if (std::string(argv[1]) == "-critical_error") {
        nice_verbose::critical_error(message);
    }
    if (std::string(argv[1]) == "-major_critical_error") {
        nice_verbose::major_critical_error(message);
    }
    if (std::string(argv[1]) == "-success") {
        nice_verbose::success(message);
    }
    if (std::string(argv[1]) == "-important") {
        nice_verbose::important(message);
    }
    if (std::string(argv[1]) == "-t_ok") {
        nice_verbose_text::ok(message);
    }
    if (std::string(argv[1]) == "-t_info") {
        nice_verbose_text::info(message);
    }
    if (std::string(argv[1]) == "-t_warn") {
        nice_verbose_text::warn(message);
    }
    if (std::string(argv[1]) == "-t_error") {
        nice_verbose_text::error(message);
    }
    if (std::string(argv[1]) == "-t_critical_error") {
        nice_verbose_text::critical_error(message);
    }
    if (std::string(argv[1]) == "-t_major_critical_error") {
        nice_verbose_text::major_critical_error(message);
    }
    if (std::string(argv[1]) == "-t_failed") {
        nice_verbose_text::failed(message);
    }
    return 0;
}
