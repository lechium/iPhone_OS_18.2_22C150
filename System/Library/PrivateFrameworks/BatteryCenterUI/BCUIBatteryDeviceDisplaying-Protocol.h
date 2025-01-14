//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BatteryCenterUI/NSObject-Protocol.h>

@class NSString, UIImage;
@protocol UIViewControllerTransitionCoordinator;

@protocol BCUIBatteryDeviceDisplaying <NSObject>
@property(nonatomic) double scaleFactor;
@property(retain, nonatomic) UIImage *glyph;
@property(nonatomic, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled;
@property(nonatomic, getter=isLowCharge) _Bool lowCharge;
@property(nonatomic, getter=isCharging) _Bool charging;
@property(nonatomic) long long percentCharge;

@optional
@property(nonatomic) __weak id <UIViewControllerTransitionCoordinator> transitionCoordinator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<UIViewControllerTransitionCoordinator>",?,W,N

@property(nonatomic, getter=isEmpty) _Bool empty;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisEmpty

@property(copy, nonatomic) NSString *name;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@end

