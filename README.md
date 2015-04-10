CKEditor Drupal Feature
=======================

This is a simple feature wich contains correct CKEditor installation.

HOWTO USE
---------

### Make a new Drupal installation with CKEditor feature:

* `drush make https://raw.github.com/tanarurkerem/tanarurkerem_ckeditor/master/build.make [WEBDIR]`
* Install Drupal (`drush si [YOUR OPTIONS]`)
* Enable Features module (`drush en -y features`)
* Enable Tanarurkerem CKEditor feature at admin/structure/features (`drush en -y tanarurkerem_ckeditor`)

### Install Tanarurkerem CKEditor feature to an existing site

* `drush make --no-core --tar https://github.com/tanarurkerem/tanarurkerem_ckeditor/raw/master/build.make tanarurkerem_ckeditor`
* Mac OSX - bsdtar 2.8.3 - libarchive 2.8.3

 `tar -x -s /tanarurkerem_ckeditor// -C [YOUR DRUPAL WEB DIR] < tanarurkerem_ckeditor.tar.gz`

* Ubuntu - (GNU tar) 1.25

 `tar -x -z --xform s/tanarurkerem_ckeditor// -C [YOUR DRUPAL WEB DIR] < ./tanarurkerem_ckeditor.tar.gz`

### Use it in a .make file

* add a following lines to your make file:

```
projects[tanarurkerem_ckeditor][type] = module
projects[tanarurkerem_ckeditor][subdir] = features
projects[tanarurkerem_ckeditor][download][type] = git
projects[tanarurkerem_ckeditor][download][url] = git://github.com/tanarurkerem/tanarurkerem_ckeditor.git
```
