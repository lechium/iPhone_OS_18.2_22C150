//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IMDCoreSpotlightReindexer : NSObject
{
    MISSING_TYPE *index;	// 8 = 0x8
    MISSING_TYPE *deferralTime;	// 0 = 0x0
    MISSING_TYPE *handles;	// 0 = 0x0
    MISSING_TYPE *messageAge;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000011dc30
- (id)init;	// IMP=0x000000000011dbd0
- (void)reindex;	// IMP=0x000000000011bb30
- (id)initWithHandles:(id)arg1 batchDeferralTime:(long long)arg2 messageAge:(double)arg3 index:(id)arg4;	// IMP=0x000000000011a7b0

@end

