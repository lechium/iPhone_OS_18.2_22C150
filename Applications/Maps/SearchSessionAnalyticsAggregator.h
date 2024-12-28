//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSessionUserActionMetadata;

@interface SearchSessionAnalyticsAggregator : NSObject
{
    GEOSessionUserActionMetadata *_sessionUserActionMetadata;	// 8 = 0x8
    unsigned long long _maxCount;	// 16 = 0x10
}

+ (id)sharedAggregator;	// IMP=0x0040000000cd84fc
- (void).cxx_destruct;	// IMP=0x0020000000cd8948
- (_Bool)isAllowedSessionAnalytic:(id)arg1;	// IMP=0x0010000000cd883f
- (void)collectSearchSessionAnalytics:(id)arg1;	// IMP=0x0010000000cd8685
- (id)collectedAnalytics;	// IMP=0x0010000000cd8551

@end
