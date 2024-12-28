//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface ICDNetworkAvailabilityService : NSObject
{
}

- (void)_isCellularDataRestrictedDidChangeNotification:(id)arg1;	// IMP=0x002000000004474a
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;	// IMP=0x0010000000044724
- (void)_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;	// IMP=0x00100000000446fe
- (void)_setupNotifications;	// IMP=0x0010000000044600
- (MISSING_TYPE *)canShowCloudVideoWithCompletion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000044582
- (void)canShowCloudMusicWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044504
- (void)canShowCloudDownloadButtonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044486
- (void)shouldProhibitStoreAppsActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044408
- (void)isCellularDataRestrictedForStoreAppsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004438a
- (void)shouldProhibitVideosActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004430c
- (void)isCellularDataRestrictedForVideosWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004428e
- (void)shouldProhibitMusicActionForCurrentNetworkConditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044210
- (void)isCellularDataRestrictedForMusicWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044192
- (void)hasProperNetworkConditionsToShowCloudMediaWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044114
- (void)hasProperNetworkConditionsToPlayMediaWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044096
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000043edc
- (void)dealloc;	// IMP=0x0010000000043e9b
- (id)init;	// IMP=0x0010000000043e4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
