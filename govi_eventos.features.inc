<?php
/**
 * @file
 * govi_eventos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_eventos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function govi_eventos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_eventos_node_info() {
  $items = array(
    'eventos' => array(
      'name' => t('Eventos'),
      'base' => 'node_content',
      'description' => t('Eventos CMS Distrital'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
