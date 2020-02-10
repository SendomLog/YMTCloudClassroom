#
# Be sure to run `pod lib lint YMTCloudClassroom.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YMTCloudClassroom'
  s.version          = '1.2.1.10'
  s.summary          = 'CloudClassroom 2.0 SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = '溢米辅导 云教师 2.0 SDK'

  s.homepage         = 'https://github.com/yimifudaoTech/YMTCloudClassroom.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'kfb' => 'kfb@yimifudao.com' }
  s.source           = { :git => 'https://github.com/yimifudaoTech/YMTCloudClassroom.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  
  s.resources = 'YMTCloudClassroom/Framework/YMTCloudClassroom.framework/Versions/A/Resources/**'
  s.vendored_frameworks = 'YMTCloudClassroom/Framework/*.framework'
  s.public_header_files = 'YMTCloudClassroom/YMTCloudClassroom.framework/Headers/*.h', 'YMTCloudClassroom/YMQOSLib.framework/Headers/*.h'

  s.static_framework = true
  # s.resource_bundles = {
  #   'YMTCloudClassroom' => ['YMTCloudClassroom/Assets/*.png']
  # }

  s.library = 'c++'
  s.frameworks = 'WebKit', 'AdSupport'

  s.dependency 'YMFlow'
  s.dependency 'AFNetworking'
  s.dependency 'MJExtension'
  s.dependency 'Masonry'
  s.dependency 'AgoraRtcEngine_iOS','~> 2.3.0'
  s.dependency 'TXLiteAVSDK_TRTC', '6.3.7088'
  s.dependency 'CocoaAsyncSocket'
  s.dependency 'Protobuf', '~> 3.7.0'#Protobuf无法更新到3.7.1(3.6.1可以更新)，使用指定资源路径更新
  
  s.user_target_xcconfig = { 
    'ARCHS[sdk=iphonesimulator*]' => '$(ARCHS_STANDARD_64_BIT)',
    'HEADER_SEARCH_PATHS' => '${PODS_ROOT}/YMTCloudClassroom/YMTCloudClassroom/YMTCloudClassroom.framework/Headers/',
    'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES'
  }

end
