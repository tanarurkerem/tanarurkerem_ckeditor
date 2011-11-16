api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7.9"

projects[features][subdir] = contrib
projects[ckeditor][subdir] = "contrib"

libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"

projects[help_ckeditor_feature][type] = module
projects[help_ckeditor_feature][subdir] = features
projects[help_ckeditor_feature][download][type] = git
projects[help_ckeditor_feature][download][url] = git://github.com/tanarurkerem/tanarurkerem_ckeditor.git

