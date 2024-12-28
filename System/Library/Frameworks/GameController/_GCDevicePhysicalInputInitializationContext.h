//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _GCDevicePhysicalInputBase;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputInitializationContext : NSObject
{
    _GCDevicePhysicalInputBase *_implementation;	// 8 = 0x8
    struct __CFArray *_views;	// 16 = 0x10
    id _viewConfiguration;	// 24 = 0x18
    id _viewProperties;	// 32 = 0x20
    id _viewState;	// 40 = 0x28
}

@property(readonly) _GCDevicePhysicalInputBase *implementation; // @synthesize implementation=_implementation;
- (unsigned long long)view:(id)arg1 allocateObjectSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;	// IMP=0x00000000000196b5
- (unsigned long long)view:(id)arg1 allocatePrimitiveSlot:(unsigned char)arg2 withCopyOfValueFromView:(id)arg3 slot:(unsigned long long)arg4;	// IMP=0x000000000001956c
- (unsigned long long)view:(id)arg1 makeReferenceToView:(id)arg2;	// IMP=0x0000000000019508
- (id)viewDataSource:(id)arg1;	// IMP=0x00000000000194fe
- (void)dealloc;	// IMP=0x00000000000193df
- (id)init;	// IMP=0x00000000000193cf

@end
