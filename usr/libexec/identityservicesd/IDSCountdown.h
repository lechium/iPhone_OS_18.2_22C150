//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface IDSCountdown : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _startDateMutex;	// 16 = 0x10
    double _timeInterval;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000339182
- (_Bool)_criticalIsCountingDown;	// IMP=0x00100000003390cb
@property(readonly, nonatomic) _Bool isCountingDown;
- (_Bool)startCountingDown;	// IMP=0x0010000000339030
- (id)initWithTimeInterval:(double)arg1;	// IMP=0x0010000000338fd7
- (void)dealloc;	// IMP=0x0010000000338f9d

@end

