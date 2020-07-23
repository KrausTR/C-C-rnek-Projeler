#include <Windows.h>
#include <iostream>
#include <vector>
void get_files_recursive(std::vector<std::string> &names, std::string folder);

int main()
{
	std::vector<std::string> array;
	char input[MAX_PATH];
	std::cout << "Type a path: ";
	std::cin.getline(input, MAX_PATH);
	for (int i = 0; i < strlen(input); i++) if (input[i] == '\\') input[i] = '/';
	get_files_recursive(array, input);
	for (auto i : array)
		std::cout << i.c_str() << std::endl;
	system("pause");
	return 0;
}

void get_files_recursive(std::vector<std::string> &names, std::string folder)
{
	char full_dir[MAX_PATH];
	std::string search_path = folder + "/*.*";
	WIN32_FIND_DATAA fd;
	HANDLE hFind = ::FindFirstFileA(search_path.c_str(), &fd);
	if (hFind != INVALID_HANDLE_VALUE) {
		do {
			if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
				sprintf_s(full_dir, MAX_PATH, "%s/%s", folder.c_str(), fd.cFileName);
				names.push_back(full_dir);
			}
			else if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				if (strcmp(fd.cFileName, "..") == 0 || strcmp(fd.cFileName, ".") == 0) continue;
				sprintf_s(full_dir, MAX_PATH, "%s/%s", folder.c_str(), fd.cFileName);
				get_files_recursive(names, full_dir);
			}
		} while (::FindNextFileA(hFind, &fd));
		::FindClose(hFind);
	}
}