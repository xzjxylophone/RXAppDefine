
Pod::Spec.new do |s|
  s.name     = "RXAppDefine"
  s.version  = "0.7"
  s.license  = "MIT"
  s.summary  = "RXAppDefine is a base define for app"
  s.homepage = "https://github.com/xzjxylophone/RXAppDefine"
  s.author   = { 'Rush.D.Xzj' => 'xzjxylophoe@gmail.com' }
  s.social_media_url = "http://weibo.com/xzjxylophone"
  s.source   = { :git => 'https://github.com/xzjxylophone/RXAppDefine.git', :tag => "v#{s.version}" }
  s.description = %{
        RXAppDefine is a base define for app.
  }
  s.source_files = 'RXAppDefine/*.{h,m}'
  s.frameworks = 'Foundation', 'UIKit'
  s.requires_arc = true
  s.platform = :ios, '6.0'

end



