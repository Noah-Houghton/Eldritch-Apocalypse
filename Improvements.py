import csv
from functools import partial

class Effect:
    """An effect defines a one-time action taken when an Improvement
    is created."""
    # func is a function which takes in a target object and an attribute and does something to them
    def __init__(self, category, attr, func):
        self.attr = attr
        self.category = category
        self.func = func
    def DoEffect(self, target):
        self.func(target, self.category, self.attr)

# core manipulation functions
def Multiply(self, target, category, attr, factor):
    eval("{}.{}[\"{}\"]".format(target, category, attr).Multiply(factor))

def Add(self, target, category, attr, amount):
    eval("{}.{}[\"{}\"]".format(target, category, attr).Add(amount))

def AddMax(self, target, attr, amount):
    eval("{}.{}[\"{}\"]".format(target, category, attr).AddMax(amount))

# Building blocks with partial application
multiplytwo = partial(Multiply, factor=2)
subtractten = partial(Add, amount=-10)
addten = partial(Add, amount=10)
addten_storage = partial(AddMax, amount=10)

# Defined effects
LoseTenWater = Effect('resources', 'Water', subtractten)
GainTenWaterStorage = Effect('resources', 'Water', addten_storage)
IncreaseViewRange = Effect('attributes', 'ViewRange', addten)

class Improvement:
    def __init__(self, name, description, cost, production, effects):
        self.name = name
        self.description = description
        self.cost = cost
        self.production = production
        self.effects = effects
    def DoEffects(self, host):
        for e in self.effects:
            e.DoEffect(host)

Watchtower = Improvement("Watchtower", "A tower which watches", {"Building Materials" : 3}, 15, [IncreaseViewRange])
