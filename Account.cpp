#include "Account.hpp"
#include <iostream>

/**
 * Default constructor.
 * 
 * Sets the username and password of the Account to an empty string.
 * Sets the vector of posts to an empty vector.
 */
Account::Account() 
{
    this->username_ = "";
    this->password_ = "";
    std::vector<Post>();
}

/**
 * Post constructor:
 * @param username  : The username of the Account
 * @param password  : The password of the Account
 * 
 * Sets username and password of the Account to what was passed by user.
 * Sets the vector of posts to an empty vector.
 */
Account::Account(std::string username, std::string password)
{
    this->username_ = username;
    this->password_ = password;
    std::vector<Post>();
}

/** 
 * @param username  : reference to username of the Account
 * 
 * Sets username of the Account to new username passed by user.
 */
void Account::setUsername(const std::string &username)
{
    this->username_ = username;
}

/** 
 * @return  : returns the username of the Account
 */
std::string Account::getUsername() const
{
    return this->username_;
}

/** 
 * @param password  : reference to password of the Account
 * 
 * Sets password of the Account to new password passed by user.
 */
void Account::setPassword(const std::string &password)
{
    this->password_ = password;
}

/** 
 * @return  : returns the password of the Account
 */
std::string Account::getPassword() const
{
    return this->password_;
}

/** 
 * @param title  : reference to title of the Post
 * @param body  : reference to body of the Post
 * @return  : returns true if the Post does not have an empty string as its title or body.
 * 
 * Generates and adds a new Post to given the title and body to the vector of posts.
 */
bool Account::addPost(std::string title, std::string body)
{
    if(title != "" && body != "") 
    {
        posts_.push_back(Post(title, body));
        return true;
    }
    return false;
}

//Prints the vector of Posts using the display function for each post. 
void Account::viewPosts()
{
    for(Post p : posts_)
    {
        p.displayPost();
    }
}