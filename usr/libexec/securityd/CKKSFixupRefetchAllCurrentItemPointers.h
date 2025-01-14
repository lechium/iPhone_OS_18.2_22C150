//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, CKOperationGroup, NSString;
@protocol OctagonStateString;

@interface CKKSFixupRefetchAllCurrentItemPointers
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    CKOperationGroup *_group;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000191e84
- (void);	// IMP=0x0010000000191e73
@property(retain) CKOperationGroup *group; // @synthesize group=_group;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x0010000000191bf6
- (id)description;	// IMP=0x0010000000191b69
- (id)initWithOperationDependencies:(id)arg1 ckoperationGroup:(id)arg2;	// IMP=0x0010000000191a9b

@end

