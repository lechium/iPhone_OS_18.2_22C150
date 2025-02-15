//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APNSPackMetrics : NSObject
{
    const struct Metrics *_metrics;	// 8 = 0x8
}

@property(nonatomic) const struct Metrics *metrics; // @synthesize metrics=_metrics;
- (unsigned long long)totalPackedSize;	// IMP=0x001000000007748d
- (unsigned long long)totalUnpackedSize;	// IMP=0x001000000007747f
- (unsigned long long)messageCount;	// IMP=0x0010000000077472
- (void)dealloc;	// IMP=0x0010000000077429
- (id)initWithDecoder:(id)arg1;	// IMP=0x0010000000077389
- (id)initWithEncoder:(id)arg1;	// IMP=0x00100000000772e9

@end

