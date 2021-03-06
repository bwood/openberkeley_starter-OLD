<?php
/**
 * @file
 * openberkeley_starter.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openberkeley_starter_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Boilerplate links for the bottom of the page.',
  );
  // Exported menu: menu-secondary-menu.
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Boilerplate links for the bottom of the page.');
  t('Footer menu');
  t('Secondary Menu');


  return $menus;
}
