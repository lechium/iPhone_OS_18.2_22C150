//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APInstallAttribution, MISSING_TYPE, NSArray, NSDate, NSDictionary, NSError, NSString, NSURL, NSUUID;
@protocol APPCCarouselMetricsHelping><APPCJourneyMetricsHelping><APPCJourneyMetricsNotificationsHelping, APPCDiagnosticMetricsHelping, APPCMediaMetricsHelping, APPCMetricEventsTracking, APPCPromotableContentRepresentation, APPCPromotableContext;

@interface APPCPromotedContent : NSObject
{
    MISSING_TYPE *diagnosticMetricHelper;	// 8 = 0x8
    MISSING_TYPE *metricsHelper;	// 16 = 0x10
    MISSING_TYPE *identifier;	// 24 = 0x18
    MISSING_TYPE *journeyIdentifier;	// 40 = 0x28
    MISSING_TYPE *context;	// 56 = 0x38
    MISSING_TYPE *metaData;	// 64 = 0x40
    MISSING_TYPE *disclosureURL;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *disclosureRendererPayload;	// 0 = 0x0
    MISSING_TYPE *minimumTimeBetweenPresentation;	// 858268 = 0xd189c
    MISSING_TYPE *brandName;	// 716 = 0x2cc
    MISSING_TYPE *campaignText;	// 858268 = 0xd189c
    MISSING_TYPE *representations;	// 0 = 0x0
    MISSING_TYPE *installAttribution;	// 0 = 0x0
    MISSING_TYPE *bestRepresentation;	// 0 = 0x0
    MISSING_TYPE *error;	// 1936678751 = 0x736f5f5f
    MISSING_TYPE *placeholder;	// 1852404340 = 0x6e697274
    MISSING_TYPE *expirationDate;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *serverUnfilledReason;	// 0 = 0x0
    MISSING_TYPE *mediaMetricHelper;	// 2238 = 0x8be
    MISSING_TYPE *attachedToView;	// 858992 = 0xd1b70
    MISSING_TYPE *vended;	// 0 = 0x0
    MISSING_TYPE *discarded;	// 2 = 0x2
    MISSING_TYPE *consumed;	// 0 = 0x0
    MISSING_TYPE *impressionThreshold;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *videoRequestStartDate;	// 1701866847 = 0x65706d5f
    MISSING_TYPE *discardedDueToPolicy;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *metricEventsTracking;	// 0 = 0x0
    MISSING_TYPE *isLocationAvailableForAd;	// 861232 = 0xd2430
    MISSING_TYPE *isPAAvailableForAd;	// 80 = 0x50
    MISSING_TYPE *receivedReferenceTime;	// 861232 = 0xd2430
    MISSING_TYPE *adServerEnvironments;	// 0 = 0x0
    MISSING_TYPE *diagnosticCode;	// 0 = 0x0
    MISSING_TYPE *unfilledReasonDelegate;	// 858992 = 0xd1b70
    MISSING_TYPE *promotedContentUsedRegisterID;	// 1869770847 = 0x6f72705f
    MISSING_TYPE *overriddenAdType;	// 0 = 0x0
    MISSING_TYPE *_contextIdentifier;	// 0 = 0x0
    MISSING_TYPE *discardReason;	// 0 = 0x0
    MISSING_TYPE *primitiveCreator;	// 0 = 0x0
    MISSING_TYPE *diagnosticPrimitiveCreator;	// 0 = 0x0
    MISSING_TYPE *placement;	// 0 = 0x0
    MISSING_TYPE *serverResponseReceivedTimestamp;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *onPromotedContentComplete;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x000000000008f3e0
- (id)init;	// IMP=0x0000000000093dc0
- (void)notifyListenersPCUsedWithPcID:(id)arg1;	// IMP=0x0000000000093860
- (void)registerPromotedContentUsedWithAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000093650
- (unsigned long long)retrieveNetworkType;	// IMP=0x0000000000093150
- (void)replaceMetricsHelperWithNewMetricsHelper:(id)arg1;	// IMP=0x0000000000092dc0
- (void)dealloc;	// IMP=0x000000000008f3c0
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) long long feedMetadataContentProviderID;
@property(nonatomic, readonly) NSDictionary *transparencyDetailsDictionary;
@property(nonatomic, readonly) _Bool available;
@property(nonatomic, readonly) NSUUID *contextIdentifier;
@property(nonatomic, readonly) long long adType;
@property(nonatomic, readonly) _Bool isMRAID;
@property(nonatomic, readonly) long long numOfArticlesSinceInterstitial;
@property(nonatomic, readonly) _Bool isOutstreamVideoAd;
@property(nonatomic, readonly) NSArray *adServerEnvironments;
@property(nonatomic, readonly) NSDate *receivedReferenceTime;
@property(nonatomic, readonly) _Bool isPAAvailableForAd; // @synthesize isPAAvailableForAd;
@property(nonatomic, readonly) _Bool isLocationAvailableForAd; // @synthesize isLocationAvailableForAd;
@property(nonatomic, retain) id <APPCMetricEventsTracking> metricEventsTracking; // @synthesize metricEventsTracking;
@property(nonatomic) _Bool discardedDueToPolicy; // @synthesize discardedDueToPolicy;
@property(nonatomic, copy) NSDate *videoRequestStartDate;
@property(nonatomic) double impressionThreshold; // @synthesize impressionThreshold;
@property(nonatomic) _Bool consumed; // @synthesize consumed;
@property(nonatomic) _Bool discarded; // @synthesize discarded;
@property(nonatomic) _Bool vended; // @synthesize vended;
@property(nonatomic) _Bool attachedToView; // @synthesize attachedToView;
@property(nonatomic, retain) id <APPCMediaMetricsHelping> mediaMetricHelper; // @synthesize mediaMetricHelper;
@property(nonatomic) long long serverUnfilledReason; // @synthesize serverUnfilledReason;
@property(nonatomic, copy) NSDate *expirationDate;
@property(nonatomic, readonly) _Bool placeholder; // @synthesize placeholder;
@property(nonatomic, retain) NSError *error; // @synthesize error;
@property(nonatomic, retain) id <APPCPromotableContentRepresentation> bestRepresentation; // @synthesize bestRepresentation;
@property(nonatomic, retain) APInstallAttribution *installAttribution; // @synthesize installAttribution;
@property(nonatomic, copy) NSArray *representations;
@property(nonatomic, copy) NSString *campaignText;
@property(nonatomic, copy) NSString *brandName;
@property(nonatomic) long long minimumTimeBetweenPresentation; // @synthesize minimumTimeBetweenPresentation;
@property(nonatomic, copy) NSString *disclosureRendererPayload;
@property(nonatomic, copy) NSURL *disclosureURL;
@property(nonatomic, copy) NSDictionary *metaData;
@property(nonatomic) __weak id <APPCPromotableContext> context; // @synthesize context;
@property(nonatomic, copy) NSString *journeyIdentifier;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, retain) id <APPCCarouselMetricsHelping><APPCJourneyMetricsHelping><APPCJourneyMetricsNotificationsHelping> metricsHelper; // @synthesize metricsHelper;
@property(nonatomic, readonly) id <APPCDiagnosticMetricsHelping> diagnosticMetricHelper; // @synthesize diagnosticMetricHelper;

@end

