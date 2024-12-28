//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSUUID;

@protocol UABestAppSuggestionManagerProtocol <NSObject>
- (void)fetchAllNearbyAppSuggestions:(void (^)(_Bool))arg1;
- (void)doLaunchFollowUp:(NSUUID *)arg1 interactionType:(unsigned long long)arg2 cancelled:(_Bool)arg3;
- (void)doQueueFetchOfPayloadForBestAppSuggestion:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doUnregisterForBestAppChangeNotification;
- (void)doRegisterForBestAppChangeNotification;
- (void)doRemoveBestAppSuggestion:(NSUUID *)arg1 options:(NSDictionary *)arg2;
- (void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)doDetermineBestAppSuggestionWithCompletionHandler:(void (^)(NSArray *, NSDate *, double))arg1;
- (void)doStartBestAppSuggestion:(double)arg1;
- (void)doConnected;
@end
