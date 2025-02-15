//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBScene, UIColor;

@protocol SBSystemApertureContextProviding <NSObject>

@optional
@property(readonly, nonatomic) _Bool preventsSwipeToHide;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) FBScene *scene;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"FBScene",?,R,N

@property(readonly, nonatomic) UIColor *keyColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,R,N

@property(readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) _Bool affiliatedWithSessionMonitor;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisAffiliatedWithSessionMonitor

- (double)preferredAlertingDuration:(double)arg1;
@end

