//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSString;

@protocol BCSItemRemoteFetching <NSObject>
- (void)fetchItemsWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 forClientBundleID:(NSString *)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
@end

