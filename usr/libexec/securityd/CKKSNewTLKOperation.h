//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, NSDictionary, NSString;
@protocol OctagonStateString;

@interface CKKSNewTLKOperation
{
    _Bool _rollTLKIfPresent;	// 10 = 0xa
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    NSDictionary *_keysets;	// 40 = 0x28
    NSDictionary *_previousPendingKeySets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001a1e9d
@property(retain) NSDictionary *previousPendingKeySets; // @synthesize previousPendingKeySets=_previousPendingKeySets;
@property _Bool rollTLKIfPresent; // @synthesize rollTLKIfPresent=_rollTLKIfPresent;
@property(retain) NSDictionary *keysets; // @synthesize keysets=_keysets;
@property(readonly) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)cancel;	// IMP=0x00100000001a1dab
- (void)groupStart;	// IMP=0x00100000001a1836
- (id)initWithDependencies:(id)arg1 rollTLKIfPresent:(_Bool)arg2 preexistingPendingKeySets:(id)arg3 intendedState:(id)arg4 errorState:(id)arg5;	// IMP=0x00100000001a1504
- (id)init;	// IMP=0x00100000001a14f6

@end

