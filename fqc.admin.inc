<?php 
/**
 * @file fqc.admin.inc
 */
/**
 * @see system_settings_form
 */
function fqc_admin_structure($form, &$form_state) {
  $form['fqc_endpoints'] = array(
    '#type' => 'textarea',
    '#title' => t('Enter URLs for SPARQL endpoints'),
    '#description' => t('One endpoint per line'),
    '#default_value' => variable_get('fqc_endpoints', NULL),
  );
  $form['fqc_refresh_data'] = array(
    '#type' => 'submit',
    '#value' => t('Refresh Data'),
    '#submit' => array('fqc_get_data'),
  );

  return system_settings_form($form);
}
