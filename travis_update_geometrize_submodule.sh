#!/bin/bash

# This script gets the latest changes from the submodule(s), commits the changes, and pushes to the remote (only if there are any changes, to avoid an infinite build loop)

git submodule update --remote --merge

if [[ `git status --porcelain` ]]; then
  # Push the latest version of the Geometrize submodule to the repository
  git config --global user.email "travis@travis-ci.org"
  git config --global user.name "Travis CI Bot"
  git checkout master
  git add lib/geometrize
  git commit --message "Travis bot updating submodule"
  git remote rm origin
  git remote add origin https://${GITHUB_API_KEY}@github.com/Tw1ddle/geometrize-lib-example.git > /dev/null 2>&1
  git push origin master
fi
