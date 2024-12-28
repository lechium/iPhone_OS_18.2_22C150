//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVideoIntents/NSObject-Protocol.h>

@class RemoveFromWatchListIntent;

@protocol RemoveFromWatchListIntentHandling <NSObject>
- (void)resolveContentForRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 withCompletion:(void (^)(RemoveFromWatchListContentResolutionResult *))arg2;
- (void)handleRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 completion:(void (^)(RemoveFromWatchListIntentResponse *))arg2;

@optional
- (void)confirmRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 completion:(void (^)(RemoveFromWatchListIntentResponse *))arg2;
@end
