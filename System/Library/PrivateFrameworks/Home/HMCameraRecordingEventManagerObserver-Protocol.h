//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCameraRecordingEventManager, NSSet;

@protocol HMCameraRecordingEventManagerObserver
- (void)recordingEventManager:(HMCameraRecordingEventManager *)arg1 didRemoveRecordingEventsWithUUIDs:(NSSet *)arg2;
- (void)recordingEventManager:(HMCameraRecordingEventManager *)arg1 didUpdateRecordingEvents:(NSSet *)arg2;
@end
