#!/usr/bin/python3
from uuid import uuid4
from datetime import datetime
import models

""" The Base class for the model """

class BaseModel:

    #date_format = "%Y-%m-%dT%H:%M:%S.%f"

    def __init__(self, *args, **kwargs):
        """
        initializing the instance attribute
        """
        date_format = "%Y-%m-%dT%H:%M:%S.%f"
        if not kwargs:
            self.id = str(uuid4())
            self.created_at = datetime.utcnow()
            self.updated_at = datetime.utcnow()
        else:
            self.id = kwargs["id"]
            self.created_at = datetime.strftime(kwargs["created_at"], date_format)
            self.updated_at = datetime.strftime(kwargs["updated_at"], date_format)

    def __str__(self):
        """
        return the string representation of the object
        """
        return "[{}] ({}) {}".format(self.__class__.__name__,self.id,\
                self.__dict__)

    def save(self):
        """
        Updates the public attributes 
            - Updated_at
        with the current date
        """
        self.updated_at = datetime.now()
        models.storage.new(self)
        models.storage.save()


    def to_dict(self):
        """
        returns a dictionary containing all keys/values
        of __dict__ of the instance
        """
        date_format = "%Y-%m-%dT%H:%M:%S.%f"
        obj_dict = self.__dict__.copy()
        obj_dict["created_at"] = self.created_at.strftime(date_format)
        obj_dict["updated_at"] = self.updated_at.strftime(date_format)
        obj_dict.update({"__class__":self.__class__.__name__})
        return (obj_dict)

