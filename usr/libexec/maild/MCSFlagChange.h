//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface MCSFlagChange
{
    NSMutableDictionary *_flagChanges;	// 16 = 0x10
    unsigned int _isDeletion:1;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004617f
- (void)setIsDeletion:(_Bool)arg1;	// IMP=0x0010000000046167
- (id)localizedShortOperationDescription;	// IMP=0x00100000000460e7
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x00100000000460df
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x00100000000460d7
- (_Bool)willFlag;	// IMP=0x00100000000460b0
- (_Bool)willUnflag;	// IMP=0x0010000000046041
- (_Bool)willMarkUnread;	// IMP=0x0010000000045fd2
- (_Bool)willMarkRead;	// IMP=0x0010000000045fab
- (id)description;	// IMP=0x0010000000045f8e
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000045b8d
- (void)_sortMessages:(id)arg1 intoLibraryMesages:(id)arg2 nonLibraryMessages:(id)arg3;	// IMP=0x001000000004598d
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x001000000004595d
- (id)_applyFlagChange:(id)arg1 toObjects:(id)arg2;	// IMP=0x0010000000045489
- (id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 reason:(long long)arg3;	// IMP=0x0010000000044f2c

@end
