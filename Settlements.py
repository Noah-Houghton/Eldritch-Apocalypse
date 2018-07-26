import csv
import Resources

resourcesPath = 'C:\\Users\\Noah Houghton\\Dropbox\\Creative\\Eldritch Apocalypse\\resources.csv'
attributesPath = 'C:\\Users\\Noah Houghton\\Dropbox\\Creative\\Eldritch Apocalypse\\attributes.csv'

class Settlement:
    def __init__(self):
        self.resources = {}
        with open(resourcesPath, 'r') as csvfile:
            resources = csv.reader(csvfile, delimiter=',')
            # initialize a resource object and place it in the resource dict
            for row in resources:
                for r in row:
                    i = Resources.Resource(r)
                    self.resources[i.name] = i
        self.improvements = []
        self.attributes = {}
        with open(attributesPath, 'r') as csvfile:
            resources = csv.reader(csvfile, delimiter=',')
            # init attribute key-value pairs
            for row in resources:
                for r in row:
                    self.attributes[r] = 0
        self.corrupted = False
        self.enemy = False


    # def InitImprovements(self, csv):
    #     # open csv file
    #
    #     # read csv file
    #     for i in file:
    #         self.improvements.append(i)
    #         i.DoEffects(this)
