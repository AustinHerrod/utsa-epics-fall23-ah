import os
import shutil

def rename_images(folder_path, new_name):
    """
    Renames all image files in the specified folder with the new name and a number.
    :param folder_path: str, path to the folder containing the images
    :param new_name: str, new name for the images
    """
    # Get a list of all image files in the folder
    image_files = [f for f in os.listdir(folder_path) if f.endswith(('.png', '.jpg', '.jpeg'))]

    # Rename each image file
    for i, image_file in enumerate(image_files):
        # Construct the new file name
        file_ext = os.path.splitext(image_file)[1]
        new_file_name = f"{new_name}_{i+1}{file_ext}"

        # Rename the file
        old_file_path = os.path.join(folder_path, image_file)
        new_file_path = os.path.join(folder_path, new_file_name)
        os.rename(old_file_path, new_file_path)

# Example usage
folder_path = "C:\\Users\\austi\\OneDrive\\Desktop\\Python"  # Replace this with the path to your folder
new_name = "Ism"
rename_images(folder_path, new_name)




# Set the source directory where the images are located
src_dir = 'C:\\Users\\austi\\OneDrive\\Desktop\\Python'

# Set the destination directory where the folders will be created
dst_dir = 'C:\\Users\\austi\\OneDrive\\Desktop\\Python1'

# Get a list of all image files in the source directory
image_files = [f for f in os.listdir(src_dir) if f.endswith('.jpg') or f.endswith('.png')]

# Sort the image files numerically
image_files.sort(key=lambda x: int(x.split('.')[0]))

# Divide the images into 5 equal parts
n = 5
image_groups = [image_files[i:i + n] for i in range(0, len(image_files), n)]

# Create the destination folders and move the images
for i, group in enumerate(image_groups):
    folder_name = f'folder_{i+1}'
    folder_path = os.path.join(dst_dir, folder_name)
    os.makedirs(folder_path, exist_ok=True)
    for image in group:
        src_path = os.path.join(src_dir, image)
        dst_path = os.path.join(folder_path, image)
        shutil.move(src_path, dst_path)




