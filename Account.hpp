#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_

#include "Post.hpp"
#include <string>
#include <vector>

class Account
{
    public:
        //Constructors for Account class; default and parameterized.
        Account();
        Account(std::string username_, std::string password_);   

        //Accessor and mutator functions for username.
        void setUsername(const std::string &username);
        std::string getUsername() const;  

        //Accessor and mutator functions for password.
        void setPassword(const std::string &password);
        std::string getPassword() const;

        //Add post to Post vector. 
        bool addPost(std::string title, std::string body);

        //Prints all the posts of the Account from the Post vector. 
        void viewPosts();   

    private:
        std::string username_;
        std::string password_;
        std::vector<Post> posts_;
    
};

#endif