//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMMultiStreamVectorClockConverter : NSObject
{
}

+ (id)multiStreamRangeClockVectorFromIndexClockVectors:(id)arg1;	// IMP=0x0040000000006515
+ (id)rangeTimestampClockVectorFromIndexClockVector:(id)arg1;	// IMP=0x0010000000006279
+ (id)multiStreamVectorClockToTimestampVectorClock:(id)arg1;	// IMP=0x0010000000006043
+ (id)multiStreamTimestampClockVectorToVectorClock:(id)arg1;	// IMP=0x0010000000005e0d
+ (id)timestampClockVectorToTimeStampVector:(id)arg1;	// IMP=0x0010000000005b5f
+ (id)timestampVectorToTimeStampClockVector:(id)arg1;	// IMP=0x00100000000058fc
+ (id)_reinitializeSiteIdentifier:(id)arg1;	// IMP=0x00100000000057ec
- (id)init;	// IMP=0x00400000000057bd

@end
