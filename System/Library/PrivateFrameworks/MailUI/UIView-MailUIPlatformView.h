//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor;

@interface UIView (MailUIPlatformView)
- (double)mui_currentScreenScale;	// IMP=0x0030000000051530
- (void)mui_setAccessibilityIdentifier:(id)arg1;	// IMP=0x003000000005151e
- (void)mui_setFlexibleWidthAndHeightResizingMask;	// IMP=0x0030000000051507
@property(copy, nonatomic) UIColor *mui_backgroundColor;
- (void)mui_layoutIfNeeded;	// IMP=0x00300000000514d1
- (void)mui_setNeedsLayout;	// IMP=0x00300000000514bf
@property(nonatomic) _Bool mui_clipsToBounds;
- (void)mui_setAsTargetedSourceOnSceneConfiguration:(id)arg1;	// IMP=0x0030000000064337
- (void)mui_setAsSourceWithExtendedRectForPopoverPresentationController:(id)arg1;	// IMP=0x003000000006428b
- (void)mui_setAsSourceForPopoverPresentationController:(id)arg1;	// IMP=0x003000000006416a
@end
