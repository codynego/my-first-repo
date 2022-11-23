#!/usr/bin/python3

from models.base_model import BaseModel
import json

""" A file storage class """

class FileStorage:
    __file_path = "file.json"
    __objects = {}

    def all(self):
        """
        return the dictionary __objects
        """
        return self.__objects

    def new(self, obj):
        """
        sets in __objects the obj with key <obj class name>.id
        """
        obj_dict = obj.to_dict()
        key = '{}.{}'.format(obj.__class__.__name__, obj.id)
        self.__objects[key] = obj_dict

    def save(self):
        """
        serializes __objects to the JSON file (path: __file_path
        """
        try:
            with open(self.__file_path, "w") as json_file:
                json.dump(self.__objects, json_file, indent=4)
        except Exception:
            print()

    def reload(self):
        """
        deserializes the JSON file to __objects (only if the JSON file (__file_path) exists

        """
        try:
            with open(self.__file_path, "r") as json_file:
                dict_file = json.load(json_file)
                return dict_file
        except Exception:
            print()
