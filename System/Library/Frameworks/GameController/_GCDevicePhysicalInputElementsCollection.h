//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCPhysicalInputElementCollection.h"

@class _GCDevicePhysicalInputBase;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection
{
    _GCDevicePhysicalInputBase *_implementation;	// 8 = 0x8
}

- (id)elementForAlias:(id)arg1;	// IMP=0x000000000001b079
- (id)elementAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001b058
- (unsigned long long)count;	// IMP=0x000000000001b032
- (_Bool)allowsWeakReference;	// IMP=0x000000000001b02a
- (unsigned long long)retainCount;	// IMP=0x000000000001b004
- (oneway void)release;	// IMP=0x000000000001afe5
- (id)retain;	// IMP=0x000000000001afb8

@end
