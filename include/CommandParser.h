#pragma once
#include <string>

/**
 * @class CommandParser
 * @brief Converts raw player input into structured command data.
 *
 * Responsibilities:
 *   - Normalize and tokenize player input
 *   - Extract the command verb and optional argument
 *   - Provide a simple interface for GameEngine to interpret commands
 *
 * Design Notes:
 *   - Parsing is intentionally lightweight; complex logic belongs in GameEngine.
 *   - Commands are returned as a simple struct for clarity and flexibility.
 */
class CommandParser {
public:

    /**
     * @brief Represents a parsed player command.
     *
     * The verb is the action (e.g., "go", "take", "use").
     * The argument is the target (e.g., "north", "key", "door").
     */
    struct Command {
        std::string verb;
        std::string argument;
    };

    /**
     * @brief Parses a raw input string into a Command.
     * @param input The player's raw text input.
     * @return A Command containing the verb and optional argument.
     *
     * Input is normalized to lowercase and split on whitespace.
     * If no argument is provided, the argument field is empty.
     */
    Command parse(const std::string& input) const;
};
