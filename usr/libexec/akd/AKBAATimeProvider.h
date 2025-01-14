//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKBAATimeProvider : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00400000000cb18a
- (_Bool)_useEpochTimestamp;	// IMP=0x00400000000cb728
- (void)addServerAdjustment:(id)arg1;	// IMP=0x00100000000cb531
- (double)_serverTimeAdjustment;	// IMP=0x00100000000cb4ab
- (_Bool)_useIDSDate;	// IMP=0x00100000000cb408
- (long long)clientServerTimeDiffInMS;	// IMP=0x00100000000cb39b
- (double)_timeIntervalWithAdjustment;	// IMP=0x00100000000cb303
- (id)adjustedDeviceTime;	// IMP=0x00100000000cb236
- (double)_systemEpochTime;	// IMP=0x00100000000cb1df

@end

