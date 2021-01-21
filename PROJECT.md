# Erdbeerhügel
----------------
Erdbeerhügel is a DayZ Standalone terrain map and mod pack. We have built this project as a unifying tutorial for creating a playable map from publicly available images of Block Island, Rhode Island, USA. 








## How To:
------------------
This will be an ongoing attempt to document the setup and workflow for developing a DayZ Standalone map from real-world Geographical Information System satellites.  


### Order of Operations:
1. Select a location.
2. Acquire available image data.
3. Resize and compile satellite images and height field images.
4. Pin, rotate, and crop the images.
  * generate surface image mask?
5. Load images into L3DT and create 3d map with basic layers, re-export as validated layer images.
6. Setup the map and assets in terrain builder.
7. Get to work developing on a new map!


#### 1. Select a location
----------

Hopefully if you're following this tutorial, you already have some sort of location in mind.  The only criterion is that there has to be satellite images of the terrain and a height map.  It is totally possible to use satellite images of other planets for this process, but it will be easier to keep the scale consistent (especially for the first attempt) if we choose a location on Earth.



#### 2. Acquire available images Using EarthExplorer
---------------------------
[EarthExplorer](https://earthexplorer.usgs.gov/) is a free (if slow) database of GIS satellite data hosted by the US Geological survey.  Navigate to the desired landmass and highlight it using the map pins.








##### Acknowledgments
-------------------
I would like to thank Chooch and Paunae for their wisdom and guidance. 
