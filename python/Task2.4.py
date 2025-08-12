from PIL import Image 

image = Image.open("original.jpeg").convert("RGB")

pixels = image.load()
width,height = image.size

for x in range(int(width/2)):
    for y in range(int(height/2)):        
        pixels [x,y] = (0,0,0)

image.save("modified.jpeg")

