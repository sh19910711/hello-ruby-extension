require 'hello/hello'

describe Hello::Hello do
  it { expect(subject.say).to eq "hello rubyext" }
end
