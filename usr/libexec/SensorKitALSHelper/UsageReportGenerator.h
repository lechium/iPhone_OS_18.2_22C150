//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMBookmarkNode, BMStoreEvent, MISSING_TYPE, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, RDLaunchEvents, SRCHClient, SRDeviceUsageDefaults, SRSensorWriter;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface UsageReportGenerator : NSObject
{
    RDLaunchEvents *_launchEvents;	// 8 = 0x8
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 16 = 0x10
    NSString *_chVersion;	// 24 = 0x18
    NSMutableSet *_eventsPendingCategories;	// 32 = 0x20
    NSMutableSet *_eventsPendingSupplementalCategories;	// 40 = 0x28
    SRSensorWriter *_messagesUsageReportWriter;	// 48 = 0x30
    SRSensorWriter *_phoneUsageReportWriter;	// 56 = 0x38
    NSMutableDictionary *_messagesUsageReports;	// 64 = 0x40
    NSMutableDictionary *_phoneUsageReports;	// 72 = 0x48
    NSMutableDictionary *_appUsesByBundleId;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSMutableDictionary *_deviceUsageReports;	// 96 = 0x60
    SRSensorWriter *_deviceUsageReportWriter;	// 104 = 0x68
    NSMutableDictionary *_notificationBundleIdsByNotificationId;	// 112 = 0x70
    SRCHClient *_chClient;	// 120 = 0x78
    NSMutableSet *_pendingNotificationEvents;	// 128 = 0x80
    NSMutableArray *_pendingAppInFocusEventSessions;	// 136 = 0x88
    NSMutableArray *_pendingAppWebUsageEventSessions;	// 144 = 0x90
    NSMutableArray *_inProgressEvents;	// 152 = 0x98
    NSMutableSet *_appsBundleIDsToFetchCategories;	// 160 = 0xa0
    NSMutableSet *_appsBundleIDsToFetchSupplementalCategories;	// 168 = 0xa8
    NSMutableSet *_notificationsBundleIDs;	// 176 = 0xb0
    MISSING_TYPE *_webDomains;	// 184 = 0xb8
    NSMutableArray *_textInputSessions;	// 192 = 0xc0
    NSMutableDictionary *_categoriesForBundleIDs;	// 200 = 0xc8
    NSMutableDictionary *_categoriesForWebDomains;	// 208 = 0xd0
    NSMutableDictionary *_supplementalCategories;	// 216 = 0xd8
    NSMutableArray *_devicePoweredOffIntervals;	// 224 = 0xe0
    BMStoreEvent *_lastMotionActivityEvent;	// 232 = 0xe8
    BMStoreEvent *_lastActivityLevelEvent;	// 240 = 0xf0
    SRDeviceUsageDefaults *_defaults;	// 248 = 0xf8
}

+ (void)initialize;	// IMP=0x0020000000013726
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x001000000001c070
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x001000000001be91
- (void)launchEventRunActivity:(id)arg1;	// IMP=0x001000000001b360
- (void)addAppUsage:(id)arg1 forBundleId:(id)arg2;	// IMP=0x001000000001aa1a
- (double)relativeAppStartTimeForReport:(id)arg1 eventStartTime:(double)arg2;	// IMP=0x001000000001a6a5
- (void)addTextInputSessionForInterval:(id)arg1 event:(id)arg2 category:(id)arg3;	// IMP=0x0010000000019f6c
- (void)queryUsageDuringInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001724c
- (id)deviceUsageReportForDate:(id)arg1;	// IMP=0x00100000000142a7
- (void)dealloc;	// IMP=0x0010000000013cc0
- (id)initWithLaunchEvents:(id)arg1 knowledgeStore:(id)arg2 usageReportWriter:(id)arg3 messagesUsageReportWriter:(id)arg4 phoneUsageReportWriter:(id)arg5 chClient:(id)arg6 queue:(id)arg7 defaults:(id)arg8;	// IMP=0x0010000000013a22
- (id)initWithLaunchEvents:(id)arg1 knowledgeStore:(id)arg2 usageReportWriter:(id)arg3 messagesUsageReportWriter:(id)arg4 phoneUsageReportWriter:(id)arg5 chClient:(id)arg6 queue:(id)arg7;	// IMP=0x00100000000139a1
- (void)processInProgressEventsForInterval:(id)arg1;	// IMP=0x001000000001245e
- (void)extractInProgressEventsFromSessionBookmark:(id)arg1;	// IMP=0x001000000001203c
- (void)processPendingEventsForInterval:(id)arg1;	// IMP=0x0010000000011882
- (void)fetchCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010a26
- (void)recordDeviceScreenIsLockedEventsFor:(id)arg1 eventEndDate:(id)arg2 within:(id)arg3;	// IMP=0x001000000001062f
- (void)recordDevicePluggedInEventsFor:(id)arg1 eventEndDate:(id)arg2 within:(id)arg3;	// IMP=0x0010000000010298
- (void)recordDeviceBacklightEventsFor:(id)arg1 eventEndDate:(id)arg2 within:(id)arg3;	// IMP=0x001000000000fea1
- (void)recordAppWebUsageEventsFor:(id)arg1 eventEndDate:(id)arg2 within:(id)arg3;	// IMP=0x001000000000f8e7
- (void)recordAppUsageEventsFor:(id)arg1 eventEndDate:(id)arg2 within:(id)arg3;	// IMP=0x001000000000eedc
- (void)recordActivityLevelEventsFor:(id)arg1 within:(id)arg2;	// IMP=0x001000000000e93a
- (void)recordMotionActivityEventsFor:(id)arg1 within:(id)arg2;	// IMP=0x001000000000e4dc
- (void)recordNotificationEventsFor:(id)arg1 within:(id)arg2;	// IMP=0x001000000000e283
- (void)queryPairedEventsForInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d649
- (void)querySingleEventStreamsForInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000cdbb
- (void)queryStreamDataForInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c5cc
- (void)queryServiceDataForInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bbf9
- (id)aggregatedSessionPublisherWithInterval:(id)arg1;	// IMP=0x001000000000b683
- (id)aggregatedPublisherWithInterval:(id)arg1;	// IMP=0x001000000000b478
- (void)runDeviceUsageCollectionActivity:(id)arg1;	// IMP=0x001000000000ab19
- (void)cleanUp;	// IMP=0x001000000000a987
- (id)getTextInputSessionsForBundleID:(id)arg1 interval:(id)arg2;	// IMP=0x001000000000a592
- (id)bundleIdFromNotificationUsageEvent:(id)arg1;	// IMP=0x001000000000a514
@property(retain, nonatomic) BMBookmarkNode *serviceDataSessionPublisherBookmark;
@property(retain, nonatomic) BMBookmarkNode *sessionPublisherBookmark;
- (MISSING_TYPE *)currentDeviceUsageQueryDate;	// IMP=0x001000000000a41d
@property(retain) NSDate *lastDeviceUsageQueryDate;
- (id)getPoweredOffIntervalForEventStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000000a14e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
