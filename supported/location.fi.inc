<?php

/**
 * @file
 * Finland.
 */

/**
 * Returns an associative array of states/territories.
 */
function location_province_list_fi() {
  return array(
  'FI-01' => "Ahvenanmaan maakunta",
  'FI-02' => "Etelä-Karjala",
  'FI-03' => "Etelä-Pohjanmaa",
  'FI-04' => "Etelä-Savo",
  'FI-05' => "Kainuu",
  'FI-06' => "Kanta-Häme",
  'FI-07' => "Keski-Pohjanmaa",
  'FI-08' => "Keski-Suomi",
  'FI-09' => "Kymenlaakso",
  'FI-10' => "Lappi",
  'FI-11' => "Pirkanmaa",
  'FI-12' => "Pohjanmaa",
  'FI-13' => "Pohjois-Karjala",
  'FI-14' => "Pohjois-Pohjanmaa",
  'FI-15' => "Pohjois-Savo",
  'FI-16' => "Päijät-Häme",
  'FI-17' => "Satakunta",
  'FI-18' => "Uusimaa",
  'FI-19' => "Varsinais-Suomi"
  );
}

/**
 * Returns minimum and maximum latitude and longitude needed to create a bounding box.
 */
function location_bounds_fi() {
  return array(
    'minlng' => 19.45165,
    'minlat' => 59.806267,
    'maxlng' => 31.42675,
    'maxlat' => 70.137467,
  );
}
