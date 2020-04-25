require 'launchy'

exit if ARGV.length != 1
number = ARGV[0]

cmd = "mkdir ABC-#{number}"
begin
  system(cmd, exception: true)
rescue => e
  puts e.class
  puts e.message
end

Launchy.open "https://atcoder.jp/contests/abc#{number}"
