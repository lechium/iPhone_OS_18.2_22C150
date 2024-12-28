//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class NSArray, SBDeviceApplicationSceneHandle, TRAParticipant;

@protocol SBApplicationHosting <NSObject>
- (NSArray *)hostedAppSceneHandles;
- (SBDeviceApplicationSceneHandle *)hostedAppSceneHandle;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (void)conformsToSBApplicationHosting;

@optional
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (void)setHostedAppReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (TRAParticipant *)traitsParticipantForSceneHandle:(SBDeviceApplicationSceneHandle *)arg1;
- (void)setInvalidationHandler:(void (^)(void))arg1;
@end
