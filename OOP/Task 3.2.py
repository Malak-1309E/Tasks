class VotingSystem:
    def __init__(self):
        self.__candidates = {}

    def add_candidate(self, name):
        if name in self.__candidates:
            print("Candidate already exists.")
        else:
            self.__candidates[name] = 0

    def remove_candidate(self, name):
        if name in self.__candidates:
            del self.__candidates[name]
        else:
            print("Candidate does not exist.")

    def vote_to_candidate(self, name):
        if name in self.__candidates:
            self.__candidates[name] += 1
        else:
            print("Candidate not found.")

    def display_winner(self):
        if not self.__candidates:
            print("No candidates in the system.")
            return

        max_votes = max(self.__candidates.values())
        
        winners = []
        for name, votes in self.__candidates.items():
            if votes == max_votes:
                winners.append(name)
                
        if len(winners) == 1:
            print(f"The winner is {winners[0]} with {max_votes} votes.")
        else:
            print("It's a tie between:")
            for winner in winners:
                print(f"- {winner} ({max_votes} votes)")
