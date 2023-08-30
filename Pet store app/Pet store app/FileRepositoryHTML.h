#pragma once
#include "FileRepository.h"

class FileRepositoryHTML :
    public FileRepository
{
public:
    FileRepositoryHTML(const std::string& filename, Repository* repo) : FileRepository{ filename, repo } {}
    void export_into_file(std::string file) override;
    void displayPetList(std::string file_name) override;

};
