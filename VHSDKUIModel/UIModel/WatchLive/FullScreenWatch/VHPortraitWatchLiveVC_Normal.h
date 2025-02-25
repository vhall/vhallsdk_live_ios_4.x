//
//  VHPortraitWatchLiveVC_Normal.h
//  UIModel
//
//  Created by xiongchao on 2020/9/22.
//  Copyright © 2020 www.vhall.com. All rights reserved.
//
//竖屏观看直播
#import "VHBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface VHPortraitWatchLiveVC_Normal : VHBaseViewController
@property(nonatomic,copy)NSString * roomId; //活动id
@property(nonatomic,copy)NSString * kValue; //活动观看密码

@property (nonatomic, assign) BOOL interactBeautifyEnable; //互动美颜开关
@end

NS_ASSUME_NONNULL_END
