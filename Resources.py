class Resource:
    """Basic Resource class providing Add, Subtract, Maximum, and Passive Generation functionality"""
    def __init__(self, name=''):
        self.name = name
        self.amount = 0
        self.maximum = 0
        self.passive = 0
    def restrict(self, value):
        if value < 0:
            return 0
        elif value > self.maximum:
            return self.maximum
        else:
            return value
    def Add(self, value):
        self.amount = restrict(self.amount + value)
    def Multiply(self, value):
        self.amount = restrict(self.amount * value)
    def AddMax(self, value):
        self.maximum += value
    def MultiplyMax(self, value):
        self.maximum *= value
    def AddPassive(self, value):
        self.passive += value
    def MultiplyPassive(self, value):
        self.passive *= value
