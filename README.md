# Maker

Maker is an open source Makefile config tool that allows for speedy Makefile creation.

### TODO:
- [X] Implement basic arguments and handling
- [X] Create function to check for existing file
- [X] Create directory creation tool
- [X] Create file creation
- [X] Create tool to convert files into strings
- [X] Run Makefile in current dir when no args are provided
- [X] Create a 'good enough' looking help menu
- [ ] Implement invalid arg check
- [ ] Test in MacOS enviroment
- [ ] Implement Makefile customizeation (-c)
- [ ] Implement Makefile build & execution (-e)
- [ ] Finished! (For now)

### Additions
06/28/2022 12:48 AM - Added different make files for single or double compiler support
06/28/2022 12:48 AM - Fixed converter to correctly print " as \"

I have decided that inorder to best support windows, I should remove cross compatibility between this project and the windows version. Until I have the motivation to port this code to windows, please use this code with WSL

More info about wsl2: https://docs.microsoft.com/en-us/windows/wsl/install

