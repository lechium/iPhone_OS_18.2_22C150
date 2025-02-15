//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVMediaSelection, AVPlayerConnection, AVPlayerItem, AVPlayerItemIntegratedTimeline, AVPlayerItemInterstitialEventCollector, AVPlayerPlaybackCoordinator, AVVideoComposition, AVWeakReference, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString, NSURL;
@protocol AVLoggingIdentifier, AVPlayerItemDelegate, NSObject><NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemInternal : NSObject
{
    NSURL *URL;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 16 = 0x10
    AVWeakReference *weakReference;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *figConfigurationQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *figPlaybackItemAccessorQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *figPlaybackItemSetterQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *seekQueue;	// 56 = 0x38
    struct OpaqueFigSimpleMutex *seekIDMutex;	// 64 = 0x40
    struct OpaqueVTPixelBufferAttributesMediator *pixelBufferAttributeMediator;	// 72 = 0x48
    struct OpaqueCMTimebase *proxyUnfoldedTimebase;	// 80 = 0x50
    struct OpaqueCMTimebase *proxyFoldedTimebase;	// 88 = 0x58
    NSArray *automaticallyLoadedAssetKeys;	// 96 = 0x60
    _Bool wasInitializedWithURL;	// 104 = 0x68
    AVAsset *asset;	// 112 = 0x70
    struct OpaqueFigPlaybackItem *figPlaybackItem;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *stateDispatchQueue;	// 128 = 0x80
    NSArray *cachedTracks;	// 136 = 0x88
    NSArray *tracks;	// 144 = 0x90
    NSPointerArray *weakSyncLayers;	// 152 = 0x98
    NSArray *itemOutputs;	// 160 = 0xa0
    NSMutableArray *itemVideoOutputs;	// 168 = 0xa8
    NSMutableDictionary *itemLegibleOutputsForKeys;	// 176 = 0xb0
    NSMutableDictionary *itemMetadataOutputsForKeys;	// 184 = 0xb8
    NSMutableDictionary *itemRenderedLegibleOutputsForKeys;	// 192 = 0xc0
    _Bool suppressesVideoLayers;	// 200 = 0xc8
    struct OpaqueCMTimebase *foldedTimebase;	// 208 = 0xd0
    struct OpaqueCMTimebase *unfoldedFigTimebase;	// 216 = 0xd8
    _Bool didBecomeReadyForInspectionOfTracks;	// 224 = 0xe0
    _Bool didBecomeReadyForInspectionOfPresentationSize;	// 225 = 0xe1
    _Bool didBecomeReadyForInspectionOfDuration;	// 226 = 0xe2
    _Bool figAssetDidBecomeReadyForInspectionOfMediaSelectionOptions;	// 227 = 0xe3
    _Bool didBecomeReadyForInspectionOfRecommendedTimeOffsetFromLive;	// 228 = 0xe4
    AVAsset *assetWithFigPlaybackItem;	// 232 = 0xe8
    NSArray *trackIDsForAssetWithFigPlaybackItem;	// 240 = 0xf0
    _Bool needTimedMetadataNotification;	// 248 = 0xf8
    _Bool didBecomeReadyForBasicInspection;	// 249 = 0xf9
    id <AVPlayerItemDelegate> delegate;	// 256 = 0x100
    AVAudioMix *audioMix;	// 264 = 0x108
    long long status;	// 272 = 0x110
    NSError *error;	// 280 = 0x118
    CDStruct_1b6d18a9 forwardPlaybackEndTime;	// 288 = 0x120
    CDStruct_1b6d18a9 reversePlaybackEndTime;	// 312 = 0x138
    CDStruct_1b6d18a9 timeToPauseBuffering;	// 336 = 0x150
    CDStruct_1b6d18a9 timeToPausePlayback;	// 360 = 0x168
    CDStruct_1b6d18a9 advanceTimeForOverlappedPlayback;	// 384 = 0x180
    _Bool advanceTimeForOverlappedPlaybackWasSet;	// 408 = 0x198
    CDStruct_1b6d18a9 overlappedPlaybackEndTime;	// 412 = 0x19c
    _Bool overlappedPlaybackEndTimeWasSet;	// 436 = 0x1b4
    _Bool snapTimeToPausePlayback;	// 437 = 0x1b5
    _Bool preservesTimeOffsetFromLive;	// 438 = 0x1b6
    CDStruct_1b6d18a9 configuredTimeOffsetFromLive;	// 440 = 0x1b8
    CDStruct_1b6d18a9 recommendedTimeOffsetFromLive;	// 464 = 0x1d0
    CDStruct_1b6d18a9 duration;	// 488 = 0x1e8
    _Bool seekingWaitsForVideoCompositionRendering;	// 512 = 0x200
    NSArray *textStyleRules;	// 520 = 0x208
    NSArray *textHighlightArray;	// 528 = 0x210
    struct __CFString *initialFigTimePitchAlgorithm;	// 536 = 0x218
    _Bool canUseNetworkResourcesForLiveStreamingWhilePaused;	// 544 = 0x220
    CDStruct_1b6d18a9 maximumForwardBufferDuration;	// 548 = 0x224
    CDStruct_1b6d18a9 maximumTrailingBufferDuration;	// 572 = 0x23c
    double preferredPeakBitRate;	// 600 = 0x258
    double preferredPeakBitRateForExpensiveNetworks;	// 608 = 0x260
    int startsOnFirstEligibleVariant;	// 616 = 0x268
    NSArray *itemCollectors;	// 624 = 0x270
    NSMutableArray *itemMetadataCollectors;	// 632 = 0x278
    AVPlayerItemInterstitialEventCollector *interstitialEventCollector;	// 640 = 0x280
    unsigned int RTCReportingFlags;	// 648 = 0x288
    NSString *reportingCategory;	// 656 = 0x290
    NSMutableDictionary *reportingValues;	// 664 = 0x298
    NSDictionary *gaplessInfo;	// 672 = 0x2a0
    float soundCheckVolumeNormalization;	// 680 = 0x2a8
    float volumeAdjustment;	// 684 = 0x2ac
    NSDictionary *loudnessInfo;	// 688 = 0x2b0
    struct opaqueMTAudioProcessingTap *audioProcessingTap;	// 696 = 0x2b8
    _Bool adjustTargetLevelWasSet;	// 704 = 0x2c0
    float adjustTargetLevel;	// 708 = 0x2c4
    _Bool adjustCompressionProfileWasSet;	// 712 = 0x2c8
    unsigned int adjustCompressionProfile;	// 716 = 0x2cc
    unsigned long long restrictions;	// 720 = 0x2d0
    _Bool initialLimitReadAhead;	// 728 = 0x2d8
    NSString *mediaKind;	// 736 = 0x2e0
    _Bool reversesMoreVideoFramesInMemory;	// 744 = 0x2e8
    _Bool reversesMoreVideoFramesInMemoryWasSet;	// 745 = 0x2e9
    _Bool aggressivelyCachesVideoFrames;	// 746 = 0x2ea
    _Bool aggressivelyCachesVideoFramesWasSet;	// 747 = 0x2eb
    _Bool decodesAllFramesDuringOrdinaryPlayback;	// 748 = 0x2ec
    _Bool decodesAllFramesDuringOrdinaryPlaybackWasSet;	// 749 = 0x2ed
    _Bool initialContinuesPlayingDuringPrerollForSeek;	// 750 = 0x2ee
    _Bool initialContinuesPlayingDuringPrerollForRateChange;	// 751 = 0x2ef
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;	// 752 = 0x2f0
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEdits;	// 753 = 0x2f1
    CDStruct_1b6d18a9 minimumIntervalForIFrameOnlyPlayback;	// 756 = 0x2f4
    _Bool minimumIntervalForIFrameOnlyPlaybackWasSet;	// 780 = 0x30c
    float speedThresholdForIFrameOnlyPlayback;	// 784 = 0x310
    _Bool speedThresholdForIFrameOnlyPlaybackWasSet;	// 788 = 0x314
    _Bool refreshesClosedCaptionsImmediatelyAfterSeeking;	// 789 = 0x315
    NSDate *initialDate;	// 792 = 0x318
    NSDate *initialEstimatedDate;	// 800 = 0x320
    _Bool requiresAccessLog;	// 808 = 0x328
    _Bool suppressesAudioOnlyVariants;	// 809 = 0x329
    _Bool prefersOfflinePlayableVariants;	// 810 = 0x32a
    _Bool autoSwitchAtmosStreamVariants;	// 811 = 0x32b
    unsigned long long variantPreferences;	// 816 = 0x330
    double preferredMaximumAudioSampleRate;	// 824 = 0x338
    NSArray *imageQueueInterpolationCurve;	// 832 = 0x340
    _Bool imageQueueInterpolationCurveWasSet;	// 840 = 0x348
    _Bool blendsVideoFrames;	// 841 = 0x349
    _Bool blendsVideoFramesWasSet;	// 842 = 0x34a
    _Bool appliesPerFrameHDRDisplayMetadata;	// 843 = 0x34b
    _Bool appliesPerFrameHDRDisplayMetadataWasSet;	// 844 = 0x34c
    NSString *videoApertureMode;	// 848 = 0x350
    _Bool usesMinimalLatencyForVideoCompositionRendering;	// 856 = 0x358
    _Bool initialAlwaysMonitorsPlayability;	// 857 = 0x359
    long long initialPlaybackLikelyToKeepUpTrigger;	// 864 = 0x360
    _Bool savesDownloadedDataToDiskWhenDone;	// 872 = 0x368
    _Bool savesDownloadedDataToDiskWhenDoneWasSet;	// 873 = 0x369
    _Bool allowProgressiveSwitchUp;	// 874 = 0x36a
    _Bool allowProgressiveStartup;	// 875 = 0x36b
    _Bool allowProgressiveResume;	// 876 = 0x36c
    _Bool isFigItemConfigured;	// 877 = 0x36d
    struct CGSize IFramePrefetchTargetDimensions;	// 880 = 0x370
    id <NSObject><NSCopying> AVKitData;	// 896 = 0x380
    struct CGSize preferredMaximumResolution;	// 904 = 0x388
    struct CGSize preferredMaximumResolutionForExpensiveNetworks;	// 920 = 0x398
    struct CGSize preferredMinimumResolution;	// 936 = 0x3a8
    _Bool canPlayFastForward;	// 952 = 0x3b8
    _Bool canPlayFastReverse;	// 953 = 0x3b9
    _Bool canPlayReverse;	// 954 = 0x3ba
    _Bool canPlaySlowReverse;	// 955 = 0x3bb
    _Bool canPlaySlowForward;	// 956 = 0x3bc
    _Bool canStepForward;	// 957 = 0x3bd
    _Bool canStepBackward;	// 958 = 0x3be
    struct CGSize presentationSize;	// 960 = 0x3c0
    _Bool playbackBufferEmpty;	// 976 = 0x3d0
    _Bool playbackBufferFull;	// 977 = 0x3d1
    _Bool playbackLikelyToKeepUp;	// 978 = 0x3d2
    _Bool restrictsAutomaticMediaSelectionToAvailableOfflineOptions;	// 979 = 0x3d3
    _Bool nonForcedSubtitlesEnabled;	// 980 = 0x3d4
    _Bool hasEnabledVideo;	// 981 = 0x3d5
    _Bool hasVideo;	// 982 = 0x3d6
    _Bool hasEnabledAudio;	// 983 = 0x3d7
    _Bool hasEnqueuedVideoFrame;	// 984 = 0x3d8
    _Bool externalProtectionRequested;	// 985 = 0x3d9
    _Bool automaticallyHandlesInterstitialEvents;	// 986 = 0x3da
    AVPlayerItemIntegratedTimeline *integratedTimeline;	// 992 = 0x3e0
    NSArray *seekableTimeRanges;	// 1000 = 0x3e8
    double seekableTimeRangesLastModifiedTime;	// 1008 = 0x3f0
    NSArray *loadedTimeRanges;	// 1016 = 0x3f8
    CDStruct_e83c9415 loopTimeRange;	// 1024 = 0x400
    id <AVLoggingIdentifier> loggingIdentifier;	// 1072 = 0x430
    NSString *uniqueInstanceIdentifier;	// 1080 = 0x438
    AVMediaSelection *currentMediaSelection;	// 1088 = 0x440
    NSString *videoEnhancementMode;	// 1096 = 0x448
    _Bool isRenderingSpatialAudio;	// 1104 = 0x450
    AVPlayerPlaybackCoordinator *playerPlaybackCoordinator;	// 1112 = 0x458
    id coordinatedPlaybackIdentifierChangeNotificationToken;	// 1120 = 0x460
    _Bool timeJumpedNotificationIncludesExtendedDiagnosticPayload;	// 1128 = 0x468
    NSString *serviceIdentifier;	// 1136 = 0x470
    _Bool needToSeekAfterCreatingFigPlaybackItem;	// 1144 = 0x478
    CDStruct_1b6d18a9 initialTime;	// 1148 = 0x47c
    _Bool isInitialTimeDefault;	// 1172 = 0x494
    unsigned int initialSetTimeFlags;	// 1176 = 0x498
    CDStruct_1b6d18a9 initialMinSnapTime;	// 1180 = 0x49c
    CDStruct_1b6d18a9 initialMaxSnapTime;	// 1204 = 0x4b4
    unsigned int nextSeekIDToGenerate;	// 1228 = 0x4cc
    int pendingSeekID;	// 1232 = 0x4d0
    CDUnknownBlockType seekCompletionHandler;	// 1240 = 0x4d8
    AVPlayerItem *previousItem;	// 1248 = 0x4e0
    AVPlayerItem *nextItem;	// 1256 = 0x4e8
    AVPlayerConnection *playerConnection;	// 1264 = 0x4f0
    _Bool initialWillNeverSeekBackwardsHint;	// 1272 = 0x4f8
    AVVideoComposition *videoComposition;	// 1280 = 0x500
    AVWeakReference *clientsOriginalVideoComposition;	// 1288 = 0x508
    AVCustomVideoCompositorSession *customVideoCompositorSession;	// 1296 = 0x510
    void *figVideoCompositor;	// 1304 = 0x518
    AVPlayerItem *interstitialTemplate;	// 1312 = 0x520
    NSString *interstitialEventID;	// 1320 = 0x528
    NSString *coordinationIdentifier;	// 1328 = 0x530
    _Bool participatesInCoordinatedPlayback;	// 1336 = 0x538
    int eqPreset;	// 1340 = 0x53c
    NSDictionary *rampInOutInfo;	// 1344 = 0x540
    NSDictionary *audibleDRMInfo;	// 1352 = 0x548
    long long initialVariantIndex;	// 1360 = 0x550
    NSString *currentStableVariantID;	// 1368 = 0x558
    NSMutableDictionary *mediaOptionsSelectedByClient;	// 1376 = 0x560
    NSArray *timedMetadata;	// 1384 = 0x568
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;	// 1392 = 0x570
    _Bool haveInitialSamples;	// 1400 = 0x578
    _Bool haveCPEProtector;	// 1401 = 0x579
    _Bool didInformObserversAboutAvailabilityOfTracks;	// 1402 = 0x57a
    _Bool didFireKVOForAssetForNonStreamingItem;	// 1403 = 0x57b
    AVAudioMix *mostRecentlyAppliedAudioMix;	// 1408 = 0x580
    _Bool audioSpatializationAllowed;	// 1416 = 0x588
    _Bool audioSpatializationAllowedWasSet;	// 1417 = 0x589
    unsigned long long allowedAudioSpatializationFormats;	// 1424 = 0x590
    _Bool allowedAudioSpatializationFormatsWasSet;	// 1432 = 0x598
    AVWeakReference *playerReference;	// 1440 = 0x5a0
    _Bool didSetAssetToAssetWithFigPlaybackItem;	// 1448 = 0x5a8
    struct OpaqueFigCPEProtector *figCPEProtector;	// 1456 = 0x5b0
    double delayPreparingItemDuration;	// 1464 = 0x5b8
    NSMutableArray *waitingMetricEventTimelineCompletionHandlers;	// 1472 = 0x5c0
    struct OpaqueFigMetricEventTimeline *eventTimeline;	// 1480 = 0x5c8
    struct {
        NSData *data;
        unsigned long long count;
        _Bool wasSet;
    } speedRamp;	// 1488 = 0x5d0
}

@end

