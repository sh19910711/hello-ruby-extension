require "bundler/gem_tasks"
task :default => [:compile, :spec]

require "rake/extensiontask"
Rake::ExtensionTask.new("hello") do |ext|
  ext.lib_dir = "lib/hello"
end

require "rspec/core/rake_task"
RSpec::Core::RakeTask.new(:spec)
