#!/usr/bin/env ruby
env_dirs = $:

env_dirs.each do |path|
   begin 
    file_path = path + "/rbconfig.rb"
    puts file_path if File.exists? file_path
   end unless path == "."
end
