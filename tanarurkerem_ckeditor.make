api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7.9"

projects[features][subdir] = contrib
projects[ckeditor][subdir] = "contrib"

libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"

projects[tanarurkerem_ckeditor][type] = module
projects[tanarurkerem_ckeditor][subdir] = features
projects[tanarurkerem_ckeditor][download][type] = git
projects[tanarurkerem_ckeditor][download][url] = git@github.com/tanarurkerem/tanarurkerem_ckeditor.git

