//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (NAAdditions)
- (void)_na_removeNotificationObserverProxy:(id)arg1;	// IMP=0x0090000000017e4b
- (void)_na_addNotificationObserverProxy:(id)arg1;	// IMP=0x0090000000017d81
- (id)na_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;	// IMP=0x0090000000017d74
- (void)na_setAssociatedObject:(id)arg1 associatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;	// IMP=0x0090000000017d63
- (void)na_removeNotificationBlockObserver:(id)arg1;	// IMP=0x0090000000017d51
- (id)na_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0090000000017c5e
- (id)na_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0090000000017b61
@end

