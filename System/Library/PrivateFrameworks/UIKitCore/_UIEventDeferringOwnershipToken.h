//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventDeferringTarget, NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringOwnershipToken : NSObject
{
    NSMutableSet *_environmentsPendingInvalidation;	// 8 = 0x8
    CDUnknownBlockType _endDeferringBlock;	// 16 = 0x10
    _Bool _hasInvalidated;	// 24 = 0x18
    NSString *_ownerClass;	// 32 = 0x20
    long long _owningInterfaceElementCategory;	// 40 = 0x28
    void *_ownerPointer;	// 48 = 0x30
    unsigned long long _scope;	// 56 = 0x38
    NSSet *_environments;	// 64 = 0x40
    BKSHIDEventDeferringTarget *_target;	// 72 = 0x48
    NSString *_reason;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000037bd7c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000037ba3c
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000037b9ec
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000037b99c
- (id)succinctDescriptionBuilder;	// IMP=0x000000000037b862
- (id)succinctDescription;	// IMP=0x000000000037b812
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000037b6bd
- (id)init;	// IMP=0x000000000037b522

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
