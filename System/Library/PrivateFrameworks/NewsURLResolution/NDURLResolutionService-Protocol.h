//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsURLResolution/NSObject-Protocol.h>

@class NSURL;

@protocol NDURLResolutionService <NSObject>
- (void)fetchWebURLBloomFilterInfoWithCompletion:(void (^)(NTPBBloomFilterInfo *, NSError *))arg1;
- (void)resolveWebURL:(NSURL *)arg1 withCompletion:(void (^)(NSURL *, NSError *))arg2;
- (void)resolveNewsURL:(NSURL *)arg1 withCompletion:(void (^)(NSURL *, NSError *))arg2;
@end

