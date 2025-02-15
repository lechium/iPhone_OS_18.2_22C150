//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TMLBinding : NSObject
{
    id _target;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    NSMutableArray *_binders;	// 24 = 0x18
    int _bindCount;	// 32 = 0x20
    int _flags;	// 36 = 0x24
    id _value;	// 40 = 0x28
    unsigned long long _valueType;	// 48 = 0x30
    _Bool _didAttachToTargetViaTMLObservable;	// 56 = 0x38
}

+ (id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2 valueType:(unsigned long long)arg3;	// IMP=0x001000000004084e
+ (id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0010000000040839
- (void).cxx_destruct;	// IMP=0x0000000000040d6e
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (unsigned long long)valueType;	// IMP=0x0000000000040d5a
- (id)value;	// IMP=0x0000000000040cfe
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000040cec
- (void)tmlObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000409dc
- (void)unobserveTarget;	// IMP=0x00000000000407ee
- (void)observeTarget;	// IMP=0x000000000004059c
- (void)unbind:(id)arg1;	// IMP=0x0000000000040531
- (void)bind:(id)arg1;	// IMP=0x000000000004038e
- (void)dealloc;	// IMP=0x00000000000402e6
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2 valueType:(unsigned long long)arg3;	// IMP=0x00000000000401bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

