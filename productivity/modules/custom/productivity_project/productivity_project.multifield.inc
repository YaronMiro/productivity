<?php
/**
 * @file
 * productivity_project.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function productivity_project_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'field_table_rate';
  $multifield->label = 'field_table_rate';
  $multifield->description = '';
  $export['field_table_rate'] = $multifield;

  return $export;
}
