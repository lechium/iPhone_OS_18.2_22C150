//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUBacktrace : NSObject
{
    void **_callstack;	// 8 = 0x8
    int _frames;	// 16 = 0x10
    int _initAdjustment;	// 20 = 0x14
}

+ (id)callee;	// IMP=0x006000000029bc7b
+ (id)caller;	// IMP=0x006000000029bc4b
+ (id)new;	// IMP=0x006000000029bc2c
+ (id)backtrace;	// IMP=0x006000000029bc05
- (unsigned long long)hash;	// IMP=0x000000000029be6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029bdf7
- (id)callee;	// IMP=0x000000000029bde3
- (id)caller;	// IMP=0x000000000029bdcc
- (id)callerAtIndex:(long long)arg1;	// IMP=0x000000000029bd49
- (id)backtraceString;	// IMP=0x000000000029bcab
- (void)dealloc;	// IMP=0x000000000029bbcb
- (id)init;	// IMP=0x000000000029bbb4
- (id)initWithAdjustment:(int)arg1;	// IMP=0x000000000029bae9

@end

