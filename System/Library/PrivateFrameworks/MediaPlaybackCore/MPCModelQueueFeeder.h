//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPQueueFeeder.h>

@class MPCModelGenericAVItemUserIdentityPropertySet, MPCModelPlaybackContext, MPCPlaybackRequestEnvironment, MPIdentifierSet, MPModelGenericObject, MPModelRequest, MPModelResponse, MPPropertySet, MPRequestResponseController, NSDictionary, NSHashTable, NSLock, NSObject, NSString;
@protocol MPCModelPlaybackRequest, MPCModelPlaybackResponse, MPMutableIdentifierListSection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCModelQueueFeeder : MPQueueFeeder
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_diffQueue;	// 16 = 0x10
    NSLock *_diffLock;	// 24 = 0x18
    NSHashTable *_activeModelGenericAVItems;	// 32 = 0x20
    NSDictionary *_endTimeModifications;	// 40 = 0x28
    CDUnknownBlockType _loadingCompletionHandler;	// 48 = 0x30
    MPRequestResponseController *_requestController;	// 56 = 0x38
    MPModelRequest<MPCModelPlaybackRequest> *_request;	// 64 = 0x40
    NSString *_rtcReportingPlayQueueSourceIdentifier;	// 72 = 0x48
    _Bool _isSiriInitiated;	// 80 = 0x50
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;	// 88 = 0x58
    MPIdentifierSet *_startItemIdentifiers;	// 96 = 0x60
    NSDictionary *_startTimeModifications;	// 104 = 0x68
    id <MPMutableIdentifierListSection> _section;	// 112 = 0x70
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;	// 120 = 0x78
    MPCModelPlaybackContext *_playbackContext;	// 128 = 0x80
    MPPropertySet *_representativeMetadataPropertySet;	// 136 = 0x88
    unsigned long long _backgroundTaskIdentifier;	// 144 = 0x90
    unsigned long long _backgroundTasks;	// 152 = 0x98
    MPModelGenericObject *_fallbackSectionRepresentation;	// 160 = 0xa0
    MPModelResponse<MPCModelPlaybackResponse> *_response;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000226aa5
@property(readonly, nonatomic) MPModelResponse<MPCModelPlaybackResponse> *response; // @synthesize response=_response;
@property(copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation; // @synthesize fallbackSectionRepresentation=_fallbackSectionRepresentation;
- (id)_staticRegistryRequest;	// IMP=0x0000000000226a59
- (id)_supplementalLibraryRequestWithError:(id *)arg1;	// IMP=0x0000000000225a5c
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)arg1;	// IMP=0x000000000022598a
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;	// IMP=0x0000000000225862
- (void)_endBackgroundTaskAssertion;	// IMP=0x00000000002257d0
- (void)_beginBackgroundTaskAssertion;	// IMP=0x0000000000225581
- (_Bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;	// IMP=0x00000000002254c5
- (_Bool)section:(id)arg1 supportsShuffleType:(long long)arg2;	// IMP=0x00000000002254b8
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000225318
- (_Bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000022525c
- (id)itemForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000224a5e
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000002249bc
- (void)loadPlaybackContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000223486
- (id)firstItemIntersectingIdentifierSet:(id)arg1;	// IMP=0x0000000000223353
- (id)accountIDForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000223208
- (_Bool)isExportableMediaTypeForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000222f21
- (_Bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000222c25
- (_Bool)containsTransportableContentWithReason:(id *)arg1;	// IMP=0x0000000000222c1d
@property(readonly, nonatomic) _Bool containsLiveStream;
- (_Bool)canJumpToItem:(id)arg1 reason:(id *)arg2;	// IMP=0x0000000000222c0d
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (void)didFinishLoadingRequestForController:(id)arg1;	// IMP=0x0000000000222be6
- (void)willBeginLoadingRequestForController:(id)arg1;	// IMP=0x0000000000222bd4
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;	// IMP=0x0000000000222a4e
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;	// IMP=0x0000000000222984
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000222885
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000002226a2
- (id)firstModelPlayEvent;	// IMP=0x00000000002225ce
- (id)uniqueIdentifier;	// IMP=0x00000000002225b1
- (id)updatedPlaybackContext;	// IMP=0x000000000022259c
- (id)supplementalPlaybackContextWithReason:(long long)arg1;	// IMP=0x0000000000221f71
- (long long)supplementalPlaybackContextBehavior;	// IMP=0x0000000000221f3c
- (id)playbackInfoForItem:(id)arg1;	// IMP=0x0000000000221946
- (void)applyVolumeNormalizationForItem:(id)arg1;	// IMP=0x000000000022171c
- (void)dealloc;	// IMP=0x000000000022169f
- (id)init;	// IMP=0x0000000000221565

// Remaining properties
@property(readonly, nonatomic) _Bool containsRadioContent;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

