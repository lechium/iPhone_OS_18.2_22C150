//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIEvent, UIKBKeyplaneView, UIKBRenderConfig, UIKBTree, UIKeyboardLayoutStar, UIView;

@protocol UIKeyboardLayoutStarDelegate <NSObject>

@optional
- (void)handleKeyUIEvent:(UIEvent *)arg1 dismiss:(_Bool)arg2;
- (UIKBRenderConfig *)keyboardLayout:(UIKeyboardLayoutStar *)arg1 willChangeRenderConfig:(UIKBRenderConfig *)arg2;
- (UIView *)keyboardLayout:(UIKeyboardLayoutStar *)arg1 containingViewForActiveKey:(UIKBTree *)arg2 inKeyplaneView:(UIKBKeyplaneView *)arg3;
- (void)keyboardLayout:(UIKeyboardLayoutStar *)arg1 didSwitchToKeyplane:(UIKBTree *)arg2;
@end
