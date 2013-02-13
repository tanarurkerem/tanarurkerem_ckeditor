api = 2
core = 7.x

projects[drupal][type] = core

projects[features][subdir] = "contrib"
projects[ckeditor][subdir] = "contrib"

libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.4.tar.gz"

projects[tanarurkerem_ckeditor_feature][type] = module
projects[tanarurkerem_ckeditor_feature][subdir] = features
projects[tanarurkerem_ckeditor_feature][download][type] = git
projects[tanarurkerem_ckeditor_feature][download][url] = git://github.com/tanarurkerem/tanarurkerem_ckeditor.git
projects[tanarurkerem_ckeditor_feature][directory_name] = tanarurkerem_ckeditor