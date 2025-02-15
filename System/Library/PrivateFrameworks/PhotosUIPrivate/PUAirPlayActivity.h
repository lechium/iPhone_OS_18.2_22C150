//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUAirPlayActivity : PXActivity
{
}

- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;	// IMP=0x00000000001d0e80
- (void)_unregisterForAirPlayNotifications;	// IMP=0x00000000001d0e2d
- (void)_registerForAirPlayNotifications;	// IMP=0x00000000001d0dda
- (void)tearDownForCompletion;	// IMP=0x00000000001d0dc8
- (void)performActivity;	// IMP=0x00000000001d0d44
@property(readonly, nonatomic) NSString *localizedRouteUnavailabilityMessage;
@property(readonly, nonatomic, getter=isRouteAvailable) _Bool routeAvailable;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000001d0c43
- (id)_systemImageName;	// IMP=0x00000000001d0c36
- (id)activityTitle;	// IMP=0x00000000001d0c25
- (id)activityType;	// IMP=0x00000000001d0c11
- (void)dealloc;	// IMP=0x00000000001d0bd3
- (id)init;	// IMP=0x00000000001d0b87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

