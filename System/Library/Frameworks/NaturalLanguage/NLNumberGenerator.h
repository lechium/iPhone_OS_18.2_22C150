//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NLNumberGenerator : NSObject
{
    unsigned long long state[2];	// 8 = 0x8
}

- (unsigned long long)numberInRange:(struct _NSRange)arg1;	// IMP=0x00000000000036af
- (void)resetWithSeed:(unsigned long long)arg1;	// IMP=0x00000000000036a1
- (void)reset;	// IMP=0x000000000000368a
- (id)init;	// IMP=0x000000000000363e

@end

