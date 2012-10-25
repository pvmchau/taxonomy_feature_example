<?php
/**
 * @file
 * taxonomy_feature_example.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function taxonomy_feature_example_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Ökologischer Landbau',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '237842af-68df-4ec2-80ad-ae9d4e7819f4',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'non_ansi_',
  );
  $terms[] = array(
    'name' => 'Snacks $ Süß gehen',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '46c97278-8a85-4a58-9b5e-3e553de2f05a',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'non_ansi_',
  );
  $terms[] = array(
    'name' => 'Node - Bài viết',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '64d70ce5-ef4a-4f35-a48a-9b7cf5ae6402',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'non_ansi_',
  );
  $terms[] = array(
    'name' => 'Über uns',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '8d7a20b1-e11d-48c0-ac99-aae32a3c4513',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'non_ansi_',
  );
  $terms[] = array(
    'name' => 'Frühstück & Brunch',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'cc88c548-ea35-45b7-877c-4a38d323c302',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'non_ansi_',
  );
  $terms[] = array(
    'name' => 'String - Chuỗi',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'eb62e417-e0a8-47e3-9861-1d7449871d05',
    'language' => 'und',
    'i18n_tsid' => '0',
    'vocabulary_machine_name' => 'non_ansi_',
  );
  return $terms;
}
