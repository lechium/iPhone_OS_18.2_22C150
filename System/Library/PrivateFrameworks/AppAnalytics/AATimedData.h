//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate;

@interface AATimedData : NSObject
{
    MISSING_TYPE *startDate;	// 0 = 0x0
    MISSING_TYPE *endDate;	// 917504 = 0xe0000
    MISSING_TYPE *duration;	// 5 = 0x5
}

+ (id)dataName;	// IMP=0x001000000005c120
- (void).cxx_destruct;	// IMP=0x000000000005c2f0
- (id)init;	// IMP=0x000000000005c260
- (id)toDict;	// IMP=0x000000000005c1c0
@property(nonatomic, readonly) double duration; // @synthesize duration;
@property(nonatomic, readonly) NSDate *endDate;
@property(nonatomic, readonly) NSDate *startDate;

@end

