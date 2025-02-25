//
//  VHStystemSetting.h
//
//
//  Created by vhall on 16/5/11.
//  Copyright (c) 2016年 www.vhall.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#define DEMO_Setting [VHStystemSetting sharedSetting]

@interface VHStystemSetting : NSObject

+ (VHStystemSetting *)sharedSetting;

//活动设置
@property(nonatomic, strong)NSString* activityID;   //发直播活动ID     必填
@property(nonatomic, strong)NSString* watchActivityID;   //观看活动ID

//观看设置
@property(nonatomic, assign)NSInteger bufferTimes;      //RTMP观看缓冲时间
@property(nonatomic, strong)NSString* email;        //标示该游客用户唯一id 可填写用户邮箱  为空默认使用设备UUID做为唯一ID
@property(nonatomic, strong)NSString* codeWord;     //嘉宾互动口令
@property(nonatomic, strong)NSString* inva_avatar;     //嘉宾互动头像
@property(nonatomic, strong)NSString* kValue;     //K值或直播间密码，可以为空
@property(nonatomic, assign)NSInteger timeOut;      //超时时间 默认10s

//直播设置
@property(nonatomic, strong)NSString* videoResolution;  //发起直播分辨率 VideoResolution [0,3] 默认1
@property(nonatomic, strong)NSString* liveToken;        //直播令牌 只在发起直播时使用 暂时一天申请一次
@property(nonatomic, assign)NSInteger videoBitRate;     //发直播视频码率
@property(nonatomic, assign)NSInteger audioBitRate;     //发直播视频码率

@property(nonatomic, assign)NSInteger videoCaptureFPS;  //发直播视频帧率 ［1～30］ 默认10
@property(nonatomic, assign)BOOL      isOpenNoiseSuppresion;//开启降噪 默认YES
@property(nonatomic, assign)BOOL      beautifyFilterEnable;//美颜开关
@property (nonatomic, copy) NSString *live_nick_name;     ///<发直播昵称


@property(nonatomic, assign)BOOL      inavBeautifyFilterEnable;//互动美颜开关


@property(nonatomic, strong)NSString* account;      //账号
@property(nonatomic, strong)NSString* password;     //密码


@property(nonatomic, strong)NSString *third_Id;      //三方登录账号
@property(nonatomic, strong)NSString *third_nickName;  //三方登录密码
@property(nonatomic, strong)NSString *third_avatar;  //三方登录头像
@end
