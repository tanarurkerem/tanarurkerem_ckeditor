<?php
/**
 * @file
 * tanarurkerem_ckeditor.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function tanarurkerem_ckeditor_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor' => array(
      'name' => 'CKEditor',
      'settings' => array(
        'ss' => '2',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Bold\',\'Italic\'],
    [\'NumberedList\',\'BulletedList\',\'Blockquote\'],
    [\'Format\',\'Styles\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\',\'RemoveFormat\'],
    [\'Link\',\'Unlink\',\'Anchor\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'h2;h3;h4;h5;h6;p;pre',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => '0',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.entities = false;
config.entities_latin = false;
config.stylesCombo_stylesSet = [
  { name : \'Img-left\', element : \'img\', attributes : {class: \'img-left\'}},
  { name : \'Img-right\', element : \'img\', attributes : {class: \'img-right\'}},
  { name : \'Img-mid\', element : \'img\', attributes : {class: \'img-mid\'}}
];',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(
        'ckeditor' => 'CKEditor',
      ),
    ),
  );
  return $data;
}
