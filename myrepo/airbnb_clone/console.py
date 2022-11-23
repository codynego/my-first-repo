from cmd import Cmd

""" A class for my console program """

class Console(Cmd):
    """ simple python console """

    def do_create(self, args):
        """ create an object """
        arg = args.split(" ")
        print(f"Am {arg[0]} and {arg[1]}")

    def do_update(self, args):
        """ update the user object using the id """
        pass

    def do_show(self, args):
        """ show the user object using the id """
        pass

    def do_destroy(self, args):
        """ destroy the data """
        pass

    def do_all(self, args):
        """ show all objects """
        pass

    def do_count(self, args):
        """ count all object """
        pass
    
    def do_User(self, args):
        """ User """
        pass
    def do_Amenities(self, args):
        """ Amenities """
        pass

    def do_Place(self, args):
        """ Place """
        pass
    
    def do_quit(self, line):
        """quit the console"""
        return True

    def do_EOF(self, line):
        """ End of file """
        print()
        return True


if __name__ == "__main__":
    print("+---------------------------+")
    print("|    Welcome to hbnb cli!   |")
    print("|    for help, type 'help'  |")
    print("|    for quit, type 'quit'  |")
    print("+---------------------------+")
    hbnb = Console()
    hbnb.cmdloop()
