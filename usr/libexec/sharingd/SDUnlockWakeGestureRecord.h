//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SDUnlockWakeGestureRecord : NSObject
{
    _Bool _onWrist;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002108fc
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool onWrist; // @synthesize onWrist=_onWrist;
- (id)description;	// IMP=0x0010000000210808

@end

