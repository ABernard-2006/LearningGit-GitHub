//First try for GitHub Push
//Testing git push second time
//3rd push
//Check to see if git push origin master --set-upstream worked


//Check how git ammend function

/*
git commit --amend -m "message" (amends commit)
git push -f (overwrites previous push)
*/

/*
    Sync changes from computer to GitHub
        1. git add .
        2. git commit (will not be pushed if not committed even if already added)
        3. git push 
*/

/*
    Sync changes from GitHub to Computer
        1. git clone url folder_name (creates a local copy from the remote)
        2.
*/

/*
    Application Scenario of Git and GitHub:
        1. Has an existing project and want to integrate it into GitHub
            a. Add git using git init to create local repository.
            b. git add then git commit
            c. git remote  add origin url (syncs the local to remote repository)
            d. Push finished codes to remote repository.

        2. Starting a new project
            a. create github repository
            b. clone it
            c. work on it, commit, then push

        3. Just joined a team who already has remote reposity
            a. clone repository
            b. contribute, git add, git commit, git push
*/