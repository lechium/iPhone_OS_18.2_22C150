//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@class FigCaptureFlatPlist;

__attribute__((visibility("hidden")))
@interface FigCaptureFlatPlistSet : NSSet
{
    FigCaptureFlatPlist *_flatPlist;	// 8 = 0x8
    const CDStruct_80d302cf *_bplist;	// 16 = 0x10
    unsigned long long _offset;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
}

- (id)objectEnumerator;	// IMP=0x00000000000063de
- (id)member:(id)arg1;	// IMP=0x00000000000062e7
- (unsigned long long)count;	// IMP=0x00000000000062d6
- (void)dealloc;	// IMP=0x0000000000006294
- (id)initWithFlatPlist:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x00000000000061fa

@end

