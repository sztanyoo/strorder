#!/usr/bin/perl

@words = ( "alma", "banan", "cseresznye", "dio" );

$rowCnt = 100000;
$maxWords = 3000;
$outfile = "input.txt";

for( $r = 0; $r < $rowCnt; $r++ )
{
  $wordCnt = rand( $maxWords );
  for( $w = 0; $w < $wordCnt; $w++ )
  {
    print $words[ rand(@words) ] . " ";
  }
  print "\n";
}
