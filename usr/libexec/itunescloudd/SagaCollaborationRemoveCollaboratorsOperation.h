//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SagaCollaborationRemoveCollaboratorsOperation
{
    long long _persistentID;	// 8 = 0x8
    NSArray *_socialProfileIDs;	// 16 = 0x10
    _Bool _libraryUpdateRequired;	// 24 = 0x18
    unsigned long long _playlistCloudLibraryID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000d6d92
- (void).cxx_destruct;	// IMP=0x00200000000d6b60
@property(readonly, nonatomic) _Bool libraryUpdateRequired; // @synthesize libraryUpdateRequired=_libraryUpdateRequired;
@property(readonly, nonatomic) unsigned long long playlistCloudLibraryID; // @synthesize playlistCloudLibraryID=_playlistCloudLibraryID;
- (void)start;	// IMP=0x00100000000d67b8
- (_Bool)isPersistent;	// IMP=0x00100000000d67b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000d6710
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000d665d
- (id)description;	// IMP=0x00100000000d65bb
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 persistentID:(long long)arg3 socialProfileIDs:(id)arg4;	// IMP=0x00100000000d6526

@end
