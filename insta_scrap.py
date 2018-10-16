
# coding: utf-8

# In[2]:


from bs4 import BeautifulSoup


# In[3]:


import selenium.webdriver as webdriver


# In[4]:


import requests


# In[5]:


url='https://www.instagram.com/vaibhavvatsa/'


# In[9]:


driver=webdriver.Chrome('/home/vaibhav/Documents/chromedriver')


# In[11]:


driver.get(url)


# In[12]:


soup=BeautifulSoup(driver.page_source)


# In[13]:


print(soup.prettify())


# In[66]:


# import os
# # os.makedirs('/home/vaibhav/vaibhav_img_new')
# os.listdir()


# In[86]:


x=soup.find_all('img',class_='FFVAD')
# i=3
# len(x)
# print(x[0]['src'])
# print(x)
# for i in x:
# with open('vaibhav_img','wb') as f:
for i in range(1,24):
    with open("vaibhav_"+str(i)+".jpg",'wb') as f:
        f.write(requests.get(x[i]['src']).content)
        print(i)
# f.read()


# In[84]:



print(x)

