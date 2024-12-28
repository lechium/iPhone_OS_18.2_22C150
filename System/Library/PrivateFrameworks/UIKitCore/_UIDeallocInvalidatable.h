//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAtomicSignal, NSString;

__attribute__((visibility("hidden")))
@interface _UIDeallocInvalidatable : NSObject
{
    _Bool _faultForDeallocInvalidation;	// 8 = 0x8
    BSAtomicSignal *_invalidationSignal;	// 16 = 0x10
    CDUnknownBlockType _invalidationBlock;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001422051
@property(readonly, copy) NSString *description;
- (void)appendDescriptionToStream:(id)arg1;	// IMP=0x0000000001421f21
- (void)dealloc;	// IMP=0x0000000001421dc4
- (void)_invalidate;	// IMP=0x0000000001421cfd
- (id)init;	// IMP=0x0000000001421a7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
