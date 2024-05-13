import os

# 获取当前文件夹路径
folder_path = './'

# 遍历当前文件夹下的所有文件
for filename in os.listdir(folder_path):
    if filename.endswith('.png'):
        # 构建新的文件名
        new_filename = 'img_' + filename
        
        # 重命名文件
        os.rename(os.path.join(folder_path, filename), os.path.join(folder_path, new_filename))