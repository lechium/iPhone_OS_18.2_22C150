//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface DIOneshotTimer : NSObject
{
    MISSING_TYPE *label;	// 8 = 0x8
    MISSING_TYPE *identifier;	// 2147484680 = 0x80000408
    MISSING_TYPE *timeInterval;	// 6 = 0x6
    MISSING_TYPE *timer;	// 0 = 0x0
    MISSING_TYPE *deadline;	// 0 = 0x0
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000007cbd8
- (id)init;	// IMP=0x000000000007ccc4
- (void)cancelTimer;	// IMP=0x000000000007cc61
- (void)dealloc;	// IMP=0x000000000007cbbb
- (id)initWithInterval:(double)arg1 queue:(id)arg2 identifier:(id)arg3 label:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000007c86a
@property(nonatomic, readonly) NSString *description;

@end
