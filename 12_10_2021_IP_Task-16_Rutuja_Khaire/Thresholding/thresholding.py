#Thresholding : useful in image segmentation, performed on grayscale images

import cv2
img=cv2.imread(r"C:\Users\varad\Desktop\TRF\robospark-2021-prog-atharva-deore\12_10_Image Processing_task 16_varad_ingale\Thresholding\Input Image\thresholding.jpeg",cv2.IMREAD_GRAYSCALE)
img=cv2.resize(img,(400,400))


# Simple thresholding: In thresholding, each pixel value is compared with the threshold value.
# If the pixel value is smaller than the threshold, it is set to 0, otherwise, it is set to a maximum value

#cv2.threshold :returns a tuple of two values. the value that was used for the thresholding.
# The second value is our actual thresholded image.
ret,simple_thresh= cv2.threshold(img,150,255,cv2.THRESH_BINARY)
ret,simple_thresh1= cv2.threshold(img,150,255,cv2.THRESH_BINARY_INV)
cv2.imshow("Original grayscale",img)
cv2.imshow("simple_thresh",simple_thresh)
cv2.imshow("simple_thresh_inv",simple_thresh1)
cv2.imwrite("Original grayscale.jpg",img)
cv2.imwrite("Simple_thresh.jpg",simple_thresh)
cv2.imwrite("simple_thresh_inv.jpg",simple_thresh1)
cv2.waitKey(0)

#a constant threshold value won’t help in the case of variable lighting conditions in different areas.
#adaptive thresholding:method where the threshold value is calculated for smaller regions.
#This leads to different threshold values for different regions with respect to the change in lighting.

#Threshold Value = (Mean of the neighbourhood area values – constant value)
adaptive_thresh= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh0= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_mean",adaptive_thresh)
cv2.imshow("adapt_mean_inv",adaptive_thresh0)
cv2.imwrite("Original grayscale.jpg",img)
cv2.imwrite("adapt_mean.jpg",adaptive_thresh)
cv2.imwrite("adapt_mean_inv.jpg",adaptive_thresh0)
cv2.waitKey(0)

#Threshold Value = (Gaussian-weighted sum of the neighbourhood values – constant value)
adaptive_thresh1= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh2= cv2.adaptiveThreshold(img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY_INV,5,2)
cv2.imshow("Original grayscale",img)
cv2.imshow("adapt_guass",adaptive_thresh1)
cv2.imshow("adapt_guass_inv",adaptive_thresh2)
cv2.imwrite("Original grayscale.jpg",img)
cv2.imwrite("adapt_guass.jpg",adaptive_thresh1)
cv2.imwrite("adapt_guass_inv.jpg",adaptive_thresh2)


cv2.waitKey(0)
cv2.destroyAllWindows()
