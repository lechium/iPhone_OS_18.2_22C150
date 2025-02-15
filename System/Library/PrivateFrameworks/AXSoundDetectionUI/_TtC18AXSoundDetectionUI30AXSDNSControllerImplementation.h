//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXSDDetectorManager, MISSING_TYPE, NSSet;

@interface _TtC18AXSoundDetectionUI30AXSDNSControllerImplementation
{
    MISSING_TYPE *detectorManager;	// 24 = 0x18
    MISSING_TYPE *detectorQueueManager;	// 32 = 0x20
    MISSING_TYPE *recordingManager;	// 40 = 0x28
    MISSING_TYPE *recentDetections;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003f7d0
- (void)stopListening;	// IMP=0x000000000003f720
- (void)startListening;	// IMP=0x000000000003f2f0
- (void)removeAllListenTypes;	// IMP=0x000000000003ef70
- (void)removeWithListenType:(id)arg1;	// IMP=0x000000000003eb50
- (void)addWithListenType:(id)arg1;	// IMP=0x000000000003e840
- (id)init;	// IMP=0x000000000003e760
@property(nonatomic, readonly) _Bool isListening;
@property(nonatomic, readonly) NSSet *currentDetectionTypes;
@property(nonatomic, retain) AXSDDetectorManager *detectorManager; // @synthesize detectorManager;
- (id)pipeInFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040120
- (id)pipeInFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003fc90
- (void)listenEngineFinishedAudioFile:(id)arg1;	// IMP=0x0000000000042240
- (void)listenEngineReceivedAudioFile:(id)arg1;	// IMP=0x0000000000041740
- (void)listenEngineDidStartWithInputFormat:(id)arg1;	// IMP=0x0000000000040bc0
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2 isFile:(_Bool)arg3;	// IMP=0x00000000000405e0
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;	// IMP=0x0000000000040520
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;	// IMP=0x0000000000042710
- (void)receivedCompletion:(id)arg1;	// IMP=0x00000000000426b0
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;	// IMP=0x0000000000042630
- (void)assetsReadyAndDetectorsAdded;	// IMP=0x00000000000442c0

@end

