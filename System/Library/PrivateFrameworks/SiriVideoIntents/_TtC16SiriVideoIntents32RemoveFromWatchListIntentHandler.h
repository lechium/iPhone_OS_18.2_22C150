//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, RemoveFromWatchListIntent;

__attribute__((visibility("hidden")))
@interface _TtC16SiriVideoIntents32RemoveFromWatchListIntentHandler : NSObject
{
    MISSING_TYPE *contentResolver;	// 8 = 0x8
    MISSING_TYPE *watchListService;	// 48 = 0x30
    MISSING_TYPE *analyticsService;	// 88 = 0x58
    MISSING_TYPE *featureFlagService;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000e0c12
- (void)handleRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 completion:(void (^)(RemoveFromWatchListIntentResponse *))arg2;	// IMP=0x00000000000e052c
- (void)confirmRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 completion:(void (^)(RemoveFromWatchListIntentResponse *))arg2;	// IMP=0x00000000000dff06
- (void)resolveContentForRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 withCompletion:(void (^)(RemoveFromWatchListContentResolutionResult *))arg2;	// IMP=0x00000000000dfb9c
- (id)init;	// IMP=0x00000000000de847

@end
