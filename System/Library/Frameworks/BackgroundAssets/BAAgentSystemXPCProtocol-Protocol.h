//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackgroundAssets/NSObject-Protocol.h>

@class BAAppStoreEventDescriptor, BAAppStorePrepareDescriptor, BAAppStoreProgressConfiguration, NSDictionary, NSString, NSURL;

@protocol BAAgentSystemXPCProtocol <NSObject>
- (void)updateAppStoreProgressObservationWithConfiguration:(BAAppStoreProgressConfiguration *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)runDebugCommand:(NSDictionary *)arg1 reply:(void (^)(void))arg2;
- (void)applicationShouldTriggerPeriodicWithIdentifier:(NSString *)arg1 bundleURLPath:(NSURL *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)applicationEventPerformedWithDescriptor:(BAAppStoreEventDescriptor *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)applicationPrepareWithDescriptor:(BAAppStorePrepareDescriptor *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

