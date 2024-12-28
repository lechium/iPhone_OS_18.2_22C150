//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSEnumerator, NSString;

@interface ABSContactsDeltaSource
{
    _Bool _reset;	// 8 = 0x8
    _Bool _keepGoing;	// 9 = 0x9
    NSEnumerator *_changeLogEnumerator;	// 16 = 0x10
    CDUnknownBlockType _addReplaceBlock;	// 24 = 0x18
    CDUnknownBlockType _deleteBlock;	// 32 = 0x20
    double _progressMultiplier;	// 40 = 0x28
    double _currentIndex;	// 48 = 0x30
    long long _deletes;	// 56 = 0x38
    long long _addMods;	// 64 = 0x40
}

+ (long long)estimatedLogCountForAnchor:(id)arg1 store:(id)arg2;	// IMP=0x0020000000019c17
- (void).cxx_destruct;	// IMP=0x002000000001b7ea
@property(nonatomic) long long addMods; // @synthesize addMods=_addMods;
@property(nonatomic) long long deletes; // @synthesize deletes=_deletes;
@property(nonatomic) double currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double progressMultiplier; // @synthesize progressMultiplier=_progressMultiplier;
@property(nonatomic) _Bool keepGoing; // @synthesize keepGoing=_keepGoing;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType addReplaceBlock; // @synthesize addReplaceBlock=_addReplaceBlock;
@property(retain, nonatomic) NSEnumerator *changeLogEnumerator; // @synthesize changeLogEnumerator=_changeLogEnumerator;
@property(nonatomic) _Bool reset; // @synthesize reset=_reset;
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x001000000001b664
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x001000000001b615
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x001000000001b5c6
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x001000000001b577
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x001000000001b528
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;	// IMP=0x001000000001b522
- (void)visitAddSubgroupToGroupEvent:(id)arg1;	// IMP=0x001000000001b51c
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;	// IMP=0x001000000001b516
- (void)visitAddMemberToGroupEvent:(id)arg1;	// IMP=0x001000000001b510
- (void)visitDeleteGroupEvent:(id)arg1;	// IMP=0x001000000001b50a
- (void)visitUpdateGroupEvent:(id)arg1;	// IMP=0x001000000001b504
- (void)visitAddGroupEvent:(id)arg1;	// IMP=0x001000000001b4fe
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x001000000001b4af
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x001000000001b39e
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x001000000001b34f
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x001000000001b338
- (void)_callAddReplace:(id)arg1;	// IMP=0x001000000001b08b
- (id)fetchJustOneContactWithThese:(id)arg1 forThisIdentifier:(id)arg2;	// IMP=0x001000000001ab9d
- (_Bool)containsInterestingChanges;	// IMP=0x001000000001aab0
- (double)_computeProgressMultiplier;	// IMP=0x001000000001a932
- (_Bool)_primeWithAnchor:(id)arg1 andKeys:(id)arg2;	// IMP=0x001000000001a2aa
- (_Bool)isReset;	// IMP=0x001000000001a298
- (double)progress;	// IMP=0x001000000001a249
- (void)enumerateContactsAdd:(CDUnknownBlockType)arg1 remove:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019e80
- (id)initWithAnchor:(id)arg1 keys:(id)arg2 store:(id)arg3;	// IMP=0x0010000000019b62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
