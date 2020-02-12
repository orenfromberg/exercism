#include "bob.h"

string bob::hey(string str)
{
	regex stating_something("^[A-Z].*\\.$");
	regex shouting("^[A-Z\\s]+!$");
	regex forceful_questions("^[A-Z\\s]+\\?$");
	regex asking_a_question("^[A-Z].*\\?$");
	regex talking_forcefully("^[A-Z].*!$");
	regex using_acronyms_in_regular_speech("[A-Z]{2,3}");
	regex shouting_numbers("^[A-Z\\d\\s,]+!$");
	regex only_numbers("^[\\d\\s,]+$");
	regex question_with_only_numbers("^\\d+\\?$");
	regex shouting_with_special_characters("[A-Z%^*@#$()!\\d\\s]+");
	regex shouting_with_no_exclamation_mark("[A-Z\\s]+");
	regex statement_containing_question_mark("^.*\\?.*$");
	regex prattling_on("^.*!.*\\..*\\?$");
	regex question_with_trailing_whitespace("^.*\\?\\s+$");
	regex silence("^$");
	regex prolonged_silence("^\\s+$");
	regex not_all_silence("^\\s.*\\s$");

	if (regex_match(str, silence) ||
		regex_match(str, prolonged_silence))
		return "Fine. Be that way!";
	else if (regex_match(str, shouting_numbers) ||
		regex_match(str, shouting) ||
		regex_match(str, forceful_questions) ||
		regex_match(str, shouting_with_special_characters) ||
		regex_match(str, shouting_with_no_exclamation_mark))
		return "Whoa, chill out!";
	else if (regex_match(str, question_with_only_numbers) ||
		regex_match(str, prattling_on) ||
		regex_match(str, asking_a_question) ||
		regex_match(str, question_with_trailing_whitespace))
		return "Sure.";
	else if (regex_match(str, stating_something) ||
		regex_match(str, using_acronyms_in_regular_speech) ||
		regex_match(str, talking_forcefully) ||
		regex_match(str, only_numbers) ||
		regex_match(str, statement_containing_question_mark) ||
		regex_match(str, not_all_silence))
		return "Whatever.";
	else
		return nullptr;
}
