/*
composer.h, created by @pytholic on 2023.10.17
Description: The class for a Composer record.
*/
const int default_ranking = 10;

class Composer
{
private:
    std::string first_name_;
    std::string last_name_;
    int composer_yob_;           // year of birth
    std::string composer_genre_; // baroque, classical, romantic, etc.
    std::string fact_;
    int ranking_;

public:
    // Constructor
    Composer();
    // Destructor
    ~Composer();

    // Accessors (getters) and Mutators (setters)
    void set_first_name(std::string in_first_name);
    std::string first_name();
    void set_last_name(std::string in_last_name);
    std::string last_name();
    void set_composer_yob(int in_composer_yob);
    int composer_yob();
    void set_composer_genre(std::string in_composer_genre);
    std::string composer_genre();
    void set_ranking(int in_ranking);
    int ranking() const;
    void set_fact(std::string in_fact);
    std::string fact();

    // Methods
    void promote(int increment); // This method increases a composer's rank by increment.
    void demote(int decrement);  // This method decreases a composer's rank by deccrement.
    void display();
};