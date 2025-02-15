//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ANAnnouncement;

@protocol ANAnalyticsAssistantProtocol
- (long long)bucketFromReceiveTime:(double)arg1;
- (long long)bucketFromDuration:(double)arg1;
- (long long)bucketFromSize:(long long)arg1;
- (long long)boundGroupCount:(long long)arg1;
- (struct ANAnalyticsAssistantSenderData)senderDataForAnnouncement:(ANAnnouncement *)arg1;
- (struct ANAnalyticsAssistantAudioData)audioDataForAnnouncement:(ANAnnouncement *)arg1;
@end

