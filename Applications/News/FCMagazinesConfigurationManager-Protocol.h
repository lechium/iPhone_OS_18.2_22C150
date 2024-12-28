//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FCMagazinesConfigurationManager <NSObject>
@property(readonly, nonatomic) NSData *magazinesConfigurationData;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 formatVersion:(NSString *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
@end
