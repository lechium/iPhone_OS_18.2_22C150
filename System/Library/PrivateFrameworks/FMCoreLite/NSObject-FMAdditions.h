//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSObject (FMAdditions)
- (void)_fm_removeNotificationObserverProxy:(id)arg1;	// IMP=0x003000000000ed27
- (void)_fm_addNotificationObserverProxy:(id)arg1;	// IMP=0x003000000000ec5d
- (id)fm_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;	// IMP=0x003000000000ec50
- (void)fm_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;	// IMP=0x003000000000ec3f
- (void)fm_removeNotificationBlockObserver:(id)arg1;	// IMP=0x003000000000ec2d
- (id)fm_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x003000000000eb3a
- (id)fm_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x003000000000ea3d
@property(readonly, retain, nonatomic) NSString *logID;
- (id)nullToNil;	// IMP=0x003000000000f8ef
@property(readonly, retain, nonatomic) NSString *fm_logID;
- (id)fm_nullToNil;	// IMP=0x003000000000f866
@end

