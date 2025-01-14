//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, PLProgressView;

__attribute__((visibility("hidden")))
@interface PUPhotoSharingManager : NSObject
{
    PLProgressView *_publishingProgressView;	// 8 = 0x8
    NSTimer *_publishingProgressTimer;	// 16 = 0x10
    NSMutableArray *_publishingAgents;	// 24 = 0x18
    long long _videoRemakingCount;	// 32 = 0x20
    long long _appSuspensionCount;	// 40 = 0x28
    long long _networkPromptCount;	// 48 = 0x30
    unsigned long long _backgroundTaskIdentifier;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00100000004d19f3
- (void).cxx_destruct;	// IMP=0x00000000004d191c
- (void)publishingAgentCancelButtonClicked:(id)arg1;	// IMP=0x00000000004d180f
- (void)publishingAgentDoneButtonClicked:(id)arg1;	// IMP=0x00000000004d1809
- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;	// IMP=0x00000000004d16e8
- (void)publishingAgentDidBeginPublishing:(id)arg1;	// IMP=0x00000000004d1590
- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;	// IMP=0x00000000004d144f
- (void)publishingAgentDidStartRemaking:(id)arg1;	// IMP=0x00000000004d133b
- (void)publishingAgentWillBeDisplayed:(id)arg1;	// IMP=0x00000000004d1329
- (void)_removePublishingAgent:(id)arg1;	// IMP=0x00000000004d11d7
- (void)_addPublishingAgentIfNeeded:(id)arg1;	// IMP=0x00000000004d115d
- (void)_cleanUpPublishingProgressView;	// IMP=0x00000000004d1102
- (void)_updatePublishingProgressView:(id)arg1;	// IMP=0x00000000004d109e
- (void)_schedulePublishingProgressViewUpdate;	// IMP=0x00000000004d0fff
- (id)_currentPublishingAgent;	// IMP=0x00000000004d0fe9
- (void)_setDelaysAppSuspend:(_Bool)arg1;	// IMP=0x00000000004d0f65
- (void)_setNetworkPromptShowing:(_Bool)arg1;	// IMP=0x00000000004d0f48
- (void)_setFlag:(_Bool)arg1 forReferenceCounter:(long long *)arg2 performIfChanged:(CDUnknownBlockType)arg3;	// IMP=0x00000000004d0edb
- (_Bool)prepareForDismissingForced:(_Bool)arg1;	// IMP=0x00000000004d0d1b
- (void)cancelPublishing;	// IMP=0x00000000004d0b11
@property(readonly, nonatomic) PLProgressView *publishingProgressView;
@property(nonatomic, getter=isRemaking) _Bool remaking;
- (void)dealloc;	// IMP=0x00000000004d0980

@end

