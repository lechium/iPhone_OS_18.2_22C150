//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriAudioInternal/NSObject-Protocol.h>

@class INSearchForMediaIntent;

@protocol INSearchForMediaIntentHandling <NSObject>
- (void)handleSearchForMedia:(INSearchForMediaIntent *)arg1 completion:(void (^)(INSearchForMediaIntentResponse *))arg2;

@optional
- (void)resolveMediaItemsForSearchForMedia:(INSearchForMediaIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmSearchForMedia:(INSearchForMediaIntent *)arg1 completion:(void (^)(INSearchForMediaIntentResponse *))arg2;
@end
