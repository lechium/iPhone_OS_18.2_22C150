//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol LANotificationObserverXPC;

__attribute__((visibility("hidden")))
@interface LANotificationProxy : NSObject
{
    id <LANotificationObserverXPC> _target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000034617
@property(readonly, nonatomic) __weak id <LANotificationObserverXPC> target; // @synthesize target=_target;
- (void)newValue:(id)arg1 oldValue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034564
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000034500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
