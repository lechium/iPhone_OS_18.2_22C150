//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL, PocketAPI;

@protocol PocketAPIDelegate <NSObject>

@optional
- (void)pocketAPI:(PocketAPI *)arg1 requestedOpenURL:(NSURL *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)pocketAPIDidFinishLogin:(PocketAPI *)arg1;
- (void)pocketAPIDidStartLogin:(PocketAPI *)arg1;
- (void)pocketAPI:(PocketAPI *)arg1 receivedResponse:(NSDictionary *)arg2 forAPIMethod:(NSString *)arg3 error:(NSError *)arg4;
- (void)pocketAPI:(PocketAPI *)arg1 failedToSaveURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)pocketAPI:(PocketAPI *)arg1 savedURL:(NSURL *)arg2;
- (void)pocketAPI:(PocketAPI *)arg1 hadLoginError:(NSError *)arg2;
- (void)pocketAPILoggedIn:(PocketAPI *)arg1;
- (void)pocketAPI:(PocketAPI *)arg1 receivedRequestToken:(NSString *)arg2;
@end

