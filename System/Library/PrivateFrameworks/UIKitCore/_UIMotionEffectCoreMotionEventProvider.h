//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMMotionManager, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectCoreMotionEventProvider
{
    CMMotionManager *_motionManager;	// 8 = 0x8
    NSOperationQueue *_motionEventQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011c794e
- (double)slowUpdateIntervalForLogs;	// IMP=0x00000000011c7917
- (double)fastUpdateIntervalForLogs;	// IMP=0x00000000011c78fc
- (_Bool)shouldLogEvents;	// IMP=0x00000000011c78f4
- (id)currentEvent;	// IMP=0x00000000011c7808
- (void)stopGeneratingEvents;	// IMP=0x00000000011c7802
- (void)startGeneratingEvents;	// IMP=0x00000000011c77fc
- (void)setSlowUpdatesEnabled:(_Bool)arg1;	// IMP=0x00000000011c77f6
- (void)dealloc;	// IMP=0x00000000011c7793
- (id)init;	// IMP=0x00000000011c75b4

@end
