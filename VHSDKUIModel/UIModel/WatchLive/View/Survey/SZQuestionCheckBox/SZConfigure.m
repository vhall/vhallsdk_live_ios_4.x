//
//  SZConfigure.m
//  SZQuestionCheckBox_demo
//
//  Created by 吴三忠 on 16/5/26.
//  Copyright © 2016年 吴三忠. All rights reserved.
//

#import "SZConfigure.h"

@implementation SZConfigure

- (CGFloat)titleFont {
    
    return _titleFont ? _titleFont : 17.0;
}

- (CGFloat)optionFont {
    
    return _optionFont ? _optionFont : 16.0;
}

- (CGFloat)oneLineHeight {
    
    return _oneLineHeight ? _oneLineHeight : OPEN_OPTION_CELL_H;
}

- (CGFloat)topDistance {
    
    return _topDistance ? _topDistance : 5.0;
}

- (CGFloat)buttonSize {
    
    return _buttonSize ? _buttonSize : BUTTON_WIDTH;
}

- (UIColor *)backColor {
    
    return _backColor ? _backColor : [UIColor whiteColor];
}

- (CGFloat)titleSideMargin {
    
    return _titleSideMargin ? _titleSideMargin : HEADER_MARGIN;
}

- (CGFloat)optionSideMargin {
    
    return _optionSideMargin  ? _optionSideMargin : OPTION_MARGIN;
}

- (NSString *)checkedImage {
    
    return _checkedImage ? _checkedImage : @"单选";
}

- (NSString *)unCheckedImage {
    
    return _unCheckedImage ? _unCheckedImage : @"单选空";
}

- (NSString *)multipleUncheckedImage {
    
    return _multipleUncheckedImage ? _multipleUncheckedImage : @"多选空";
}

- (NSString *)multipleCheckedImage {
    
    return _multipleCheckedImage ? _multipleCheckedImage : @"多选";
}

- (UIColor *)titleTextColor {
    
    return _titleTextColor ? _titleTextColor : [UIColor blackColor];
}

- (UIColor *)optionTextColor {
    
    return _optionTextColor ? _optionTextColor : [UIColor blackColor];
}

@end
