import pandas as pd
import numpy as np

a=pd.DataFrame(np.arange(9).reshape(3,3),columns=['a','b','c'])

grouped=a.groupby('a').agg('sum')
print(grouped)

