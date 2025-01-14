//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (NSTimer)
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;	// IMP=0x008000000085a321
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x008000000085a292
+ (id)timerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x008000000085a224
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x008000000085a184
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x008000000085a105
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x008000000085a058
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;	// IMP=0x0080000000859fcc
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000859f9f
- (double)_cffireTime;	// IMP=0x001000000085a680
- (CDStruct_e097db04)context;	// IMP=0x001000000085a665
- (void)setFireTime:(double)arg1;	// IMP=0x001000000085a62d
- (double)fireTime;	// IMP=0x001000000085a602
- (double)interval;	// IMP=0x001000000085a5f0
- (long long)order;	// IMP=0x001000000085a5e8
- (struct __CFString *)copyDebugDescription;	// IMP=0x001000000085a5cd
- (id)userInfo;	// IMP=0x001000000085a5c5
- (void)setFireDate:(id)arg1;	// IMP=0x001000000085a59a
- (id)fireDate;	// IMP=0x001000000085a56c
- (void)fire;	// IMP=0x001000000085a541
- (void)setTolerance:(double)arg1;	// IMP=0x001000000085a516
- (double)tolerance;	// IMP=0x001000000085a4e7
- (double)timeInterval;	// IMP=0x001000000085a4b8
- (_Bool)isValid;	// IMP=0x001000000085a48a
- (void)invalidate;	// IMP=0x001000000085a45f
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;	// IMP=0x001000000085a452
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x001000000085a37b
@end

