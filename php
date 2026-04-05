<?php
$village_info = [
    "name" => "Moti Marad",
    "taluka" => "Dhoraji",
    "district" => "Rajkot",
    "pincode" => 360410,
    "major_crops" => ["Cotton", "Groundnut", "Wheat"]
];

echo "<h2>Details for " . $village_info['name'] . "</h2>";
echo "<ul>";
echo "<li><strong>Taluka:</strong> " . $village_info['taluka'] . "</li>";
echo "<li><strong>Postal Code:</strong> " . $village_info['pincode'] . "</li>";
echo "<li><strong>Primary Crops:</strong> " . implode(", ", $village_info['major_crops']) . "</li>";
echo "</ul>";
?>
