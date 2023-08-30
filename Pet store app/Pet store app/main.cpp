#include "Pet_store_app.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Repository* repo = new Repository();
    FileRepository* file_repo = new FileRepository(repo);
    Repo_accounts* repo_acc = new Repo_accounts();

    Pet_store_app w(repo, repo_acc);

    w.show();
    return a.exec();
}
