//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SKGEventsProfiler : NSObject
{
    _Bool _enabled;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0040000000089fb4
+ (id)sharedInstance;	// IMP=0x0010000000089e69
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)logResultWithType:(id)arg1 outcome:(id)arg2 elapsedTime:(unsigned long long)arg3 kind:(int)arg4;	// IMP=0x001000000008a593
- (unsigned long long)convertMachTimeToMilliseconds:(unsigned long long)arg1;	// IMP=0x001000000008a538
- (void)endProfilingWithType:(id)arg1 outcome:(id)arg2;	// IMP=0x001000000008a34f
- (void)startProfilingWithType:(id)arg1 kind:(int)arg2;	// IMP=0x001000000008a1c8
- (_Bool)profileCodeWithType:(id)arg1 kind:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000008a077
- (id)initWithEnabled:(_Bool)arg1;	// IMP=0x001000000008a01c
- (void)setupTimebaseInfo;	// IMP=0x0010000000089fa3

@end
