Pod::Spec.new do |s|
  s.name         = "VHallSDK_Interactive"
  s.version      = "4.0.0"
  s.summary      = "VHallSDK for IOS"
  s.homepage     = "https://github.com/vhall/vhallsdk_live_ios_v4.0"
  s.license      = "MIT"
  s.author       = { 'vhall' => 'xiaoxiang.wang@vhall.com' }
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/vhall/vhallsdk_live_ios_v4.0.git", :tag => s.version }
  s.source_files  = "VHallSDK/*" ,"VHallSDK/VHallInteractive/*"
  s.frameworks = "AVFoundation", "VideoToolbox","OpenAL","CoreMedia","CoreTelephony" ,"OpenGLES" ,"MediaPlayer" ,"AssetsLibrary","QuartzCore" ,"JavaScriptCore","Security"
  s.libraries = 'xml2.2'
  #s.vendored_libraries = "VHallSDK/libVHallSDK.a","VHallSDK/VHallInteractive/libVHallInteractive.a"
  s.vendored_frameworks = "VHallSDK/VhallLiveBaseApi.framework","VHallSDK/VHLiveSDK.framework","VHallSDK/VHallInteractive/WebRTC.framework","VHallSDK/VHallInteractive/VHInteractive.framework"
  s.requires_arc = true
end

