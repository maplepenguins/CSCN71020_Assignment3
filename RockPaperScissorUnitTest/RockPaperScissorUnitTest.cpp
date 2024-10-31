#include "pch.h"
#include "CppUnitTest.h"

extern "C" {char* RockPaperScissor(char player1[], char player2[]); }

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorUnitTest
{
	TEST_CLASS(RockPaperScissorUnitTest)
	{
	public:
		
		TEST_METHOD(DrawTest)
		{	// draw conditions
			char player1[] = "Rock";
			char player2[] = "Rock";
			char ExpectedOutcome[] = "Draw";

			char* result = RockPaperScissor(player1, player2);
			Assert::AreEqual(ExpectedOutcome, result);
		}


		TEST_METHOD(RockBeatsScissorTest)
		{	//rock beats scissor
			char player1[] = "Rock";
			char player2[] = "Scissor";
			char ExpectedOutcome[] = "Player1";

			char* result = RockPaperScissor(player1, player2);
			Assert::AreEqual(ExpectedOutcome, result);
		}


		TEST_METHOD(PaperBeatsRockTest)
		{//paper beats rock
			char player1[] = "Paper";
			char player2[] = "Rock";
			char ExpectedOutcome[] = "Player1";

			char* result = RockPaperScissor(player1, player2);
			Assert::AreEqual(ExpectedOutcome, result);

		}

		TEST_METHOD(ScissorBeatsPaperTest)
		{ //Scissor beats paper
			char player1[] = "Scissor";
			char player2[] = "Paper";
			char ExpectedOutcome[] = "Player1";

			char* result = RockPaperScissor(player1, player2);
			Assert::AreEqual(ExpectedOutcome, result);

		}


		TEST_METHOD(SingleInvalidInputTest)
		{ //invalid input
			char player1[] = "Rock";
			char player2[] = "Dinosaur";
			char ExpectedOutcome[] = "Invalid";

			char* result = RockPaperScissor(player1, player2);
			Assert::AreEqual(ExpectedOutcome, result);
		}

		TEST_METHOD(CaseSensitiveTest)
		{//invalid input
			char player1[] = "rock";
			char player2[] = "Paper";
			char ExpectedOutcome[] = "Invalid";

			char* result = RockPaperScissor(player1, player2);
			Assert::AreEqual(ExpectedOutcome, result);

		}


		TEST_METHOD(EmptyInputTest)
		{ // empty string input
			char player1[] = "";
			char player2[] = "";
			char ExpectedOutcome[] = "Invalid";

			char* result = RockPaperScissor(player1, player2);
			Assert::AreEqual(ExpectedOutcome, result);

		}


	};
}
