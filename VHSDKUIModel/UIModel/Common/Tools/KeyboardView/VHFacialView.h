/************************************************************
 *  * EaseMob CONFIDENTIAL
 * __________________
 * Copyright (C) 2013-2014 EaseMob Technologies. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of EaseMob Technologies.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from EaseMob Technologies.
 */

#import <UIKit/UIKit.h>

@protocol VHFacialViewDelegate

@optional
-(void)selectedFacialView:(NSString*)str;
-(void)deleteSelected:(NSString *)str;
-(void)sendFace;

@end


@interface VHFacialView : UIView<UIScrollViewDelegate>
{
    NSArray *_faces;
}

@property(nonatomic ,weak) id<VHFacialViewDelegate> delegate;

@property(strong, nonatomic, readonly) NSArray *faces;

@property(strong, nonatomic, readonly) NSDictionary *faceDic;

//@property(strong, nonatomic) UIScrollView *faceScrollView;
//
//@property(strong, nonatomic) UIPageControl *facePageControl;

-(void)loadFacialView:(int)page size:(CGSize)size;

-(void)loadFaceDic;

-(void)loadFaceWithPageIndex:(NSInteger)index;

@end
