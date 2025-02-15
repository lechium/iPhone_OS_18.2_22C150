//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHBagContract;

__attribute__((visibility("hidden")))
@interface SHInsightsConfiguration : NSObject
{
    SHBagContract *_bagContract;	// 8 = 0x8
}

+ (id)bagContract;	// IMP=0x0060000000008af4
+ (void)fetchSharedInstanceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00600000000088dc
- (void).cxx_destruct;	// IMP=0x0000000000009a0e
@property(readonly, nonatomic) SHBagContract *bagContract; // @synthesize bagContract=_bagContract;
- (void)tokenizedURLForBagPathKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000974e
- (void)geoHashLengthsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009581
- (id)fillInTokenizedURL:(id)arg1 date:(id)arg2 geoHash:(id)arg3;	// IMP=0x00000000000093d7
- (void)geoChartsEndpointForDate:(id)arg1 geoHash:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009287
- (void)artistsClusterEndpointWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000918c
- (void)artistsEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000090bb
- (void)artistsCachedDataMaxAgeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008fea
- (void)tracksClusterEndpointForStorefront:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008ea0
- (void)tracksEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008dcf
- (void)tracksCachedDataMaxAgeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008cfe
- (id)initWithBagContract:(id)arg1;	// IMP=0x0000000000008c93
- (id)init;	// IMP=0x0000000000008c29

@end

