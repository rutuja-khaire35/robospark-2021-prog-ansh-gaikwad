import cv2
import numpy as np
img = cv2.imread(r"C:\Users\Asus\Desktop\Rutuja Khaire\TRF\Tasks\12_10_2021_IP_Task-16_Rutuja_Khaire\Morphology\Images\morphology.JPG")
kernel = np.ones((5,5), np.uint8)
img_erosion= cv2.erode(img,kernel,iterations=1)
img_dilation=cv2.dilate(img_erosion,kernel,iterations=1)

cv2.imshow('Input', img)
cv2.imshow('Erosion', img_erosion)
cv2.imshow('Dilation', img_dilation)

filename = 'inputimage.jpg'
filename1= 'erosion image.jpg'
filename2= 'dilation image.jpg'
cv2.imwrite(filename,img)
cv2.imwrite(filename1,img_erosion)
cv2.imwrite(filename2,img_dilation)
cv2.waitKey(0)
cv2.destroyAllWindows()