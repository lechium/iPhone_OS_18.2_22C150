//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRE/NSObject-Protocol.h>

@class NSString, REResourceRequestOptions;

@protocol REResourceSharingService <NSObject>
- (void)reportLoadState:(unsigned char)arg1 forAssetId:(unsigned long long)arg2 assetSize:(unsigned long long)arg3 errorCode:(unsigned short)arg4;
- (void)unsubscribeFromResourceAtAssetPath:(NSString *)arg1;
- (void)setSubscriptionOptions:(REResourceRequestOptions *)arg1 forResourceAtAssetPath:(NSString *)arg2;
- (void)fetchResourceAtAssetPath:(NSString *)arg1 withReply:(void (^)(RESharedResourcePayload *, NSError *))arg2;
@end

