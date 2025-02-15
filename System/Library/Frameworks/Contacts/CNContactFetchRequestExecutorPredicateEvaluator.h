//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNObservable, NSString;
@protocol CNDataMapper;

__attribute__((visibility("hidden")))
@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject
{
    CNContactFetchRequest *_fetchRequest;	// 8 = 0x8
    id <CNDataMapper> _dataMapper;	// 16 = 0x10
    CNObservable *_observable;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e2545
- (id)copyFetchRequestWithPredicate:(id)arg1;	// IMP=0x00000000000e24eb
- (id)evaluateSubpredicate:(id)arg1;	// IMP=0x00000000000e23d1
- (void)visitFalsePredicate:(id)arg1;	// IMP=0x00000000000e2398
- (void)visitTruePredicate:(id)arg1;	// IMP=0x00000000000e2384
- (void)visitNSPredicate:(id)arg1;	// IMP=0x00000000000e1ff2
- (void)visitNotPredicate:(id)arg1;	// IMP=0x00000000000e1a85
- (void)visitAndPredicate:(id)arg1;	// IMP=0x00000000000e143f
- (void)visitOrPredicate:(id)arg1;	// IMP=0x00000000000e0f36
- (void)visitNSCompoundPredicate:(id)arg1;	// IMP=0x00000000000e0ee3
- (void)visitCNPredicate:(id)arg1;	// IMP=0x00000000000e0e86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

