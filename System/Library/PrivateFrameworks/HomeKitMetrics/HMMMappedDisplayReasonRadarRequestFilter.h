//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface HMMMappedDisplayReasonRadarRequestFilter : NSObject
{
    MISSING_TYPE *filtersByDisplayReason;	// 8 = 0x8
    MISSING_TYPE *defaultRequestFilter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000020c0
- (id)init;	// IMP=0x0000000000002060
- (void)radarRequestedForDisplayReason:(id)arg1;	// IMP=0x0000000000001f80
- (_Bool)shouldRequestRadarForDisplayReason:(id)arg1;	// IMP=0x0000000000001df0

@end

