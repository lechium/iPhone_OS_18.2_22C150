//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;

@protocol _UITextCursorAnimation <NSObject>
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) __weak UIView *cursorShapeView;
- (void)cursorShapeDidChange;
- (id)initWithCursorShapeView:(UIView *)arg1;
@end
