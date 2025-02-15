//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelSocialPerson, NSArray, NSDictionary, NSString;
@protocol MPMutableIdentifierListSection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPModelLibraryPlaylistEditDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MPModelSocialPerson *_authorProfile;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSArray *_playlistEntries;	// 32 = 0x20
    NSDictionary *_playlistEntriesByIdentifier;	// 40 = 0x28
    id <MPMutableIdentifierListSection> _dataSourceSection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001f2679
@property(readonly, nonatomic) __weak id <MPMutableIdentifierListSection> dataSourceSection; // @synthesize dataSourceSection=_dataSourceSection;
@property(readonly, copy, nonatomic) NSDictionary *playlistEntriesByIdentifier; // @synthesize playlistEntriesByIdentifier=_playlistEntriesByIdentifier;
@property(readonly, copy, nonatomic) NSArray *playlistEntries; // @synthesize playlistEntries=_playlistEntries;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) MPModelSocialPerson *authorProfile; // @synthesize authorProfile=_authorProfile;
- (void)_reloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f2552
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f24ae
- (void)_handleMPMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1;	// IMP=0x00000000001f249c
- (void)reload;	// IMP=0x00000000001f2483
- (void)loadEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f236b
- (id)newPlaylistEntryForTrack:(id)arg1;	// IMP=0x00000000001f2258
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001f217b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

