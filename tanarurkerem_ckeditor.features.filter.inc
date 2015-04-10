<?php
/**
 * @file
 * tanarurkerem_ckeditor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function tanarurkerem_ckeditor_filter_default_formats() {
  $formats = array();

  // Exported format: Tanarurkerem CKEditor.
  $formats['tanarurkerem_ckeditor'] = array(
    'format' => 'tanarurkerem_ckeditor',
    'name' => 'Tanarurkerem CKEditor',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <ul> <ol> <li> <img>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
