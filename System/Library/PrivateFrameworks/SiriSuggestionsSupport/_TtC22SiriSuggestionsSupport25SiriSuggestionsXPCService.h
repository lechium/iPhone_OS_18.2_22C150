//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC22SiriSuggestionsSupport25SiriSuggestionsXPCService : _TtCs12_SwiftObject
{
    MISSING_TYPE *client;	// 16 = 0x10
    MISSING_TYPE *eventDrivenClient;	// 24 = 0x18
    MISSING_TYPE *connectedAppId;	// 64 = 0x40
    MISSING_TYPE *accessList;	// 80 = 0x50
}

- (void)logWithSuggestions:(id)arg1 deliveryVehicle:(id)arg2 generationId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003f4f1
- (void)warmupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e3f4
- (void)submitFor:(id)arg1 propertyKey:(id)arg2 propertyValue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003e213
- (void)submitFor:(id)arg1 stateStoreProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d676
- (void)refreshServiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c620
- (void)disconnectForAppWithAppBundleId:(id)arg1 placementId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c1af
- (void)getSuggestionsForAppWithAppBundleId:(id)arg1 placementId:(id)arg2 entities:(id)arg3 intentToSuggest:(id)arg4 bridge:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000003bcf7
- (void)logIntentFor:(id)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000396c6
- (void)suggestNextWithRequestId:(id)arg1 extraStateStoreProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038bd6

@end
