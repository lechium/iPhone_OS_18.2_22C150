//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKHome, NSArray, NSData, NSDictionary, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface MKFCKHAPAccessory
{
}

+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00800000009c5b90
+ (id)fetchRequest;	// IMP=0x0080000000fae05c
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000009c63a8
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000009c5c0c
- (id)fetchLocalModelWithContext:(id)arg1;	// IMP=0x00000000009c5bce

// Remaining properties
@property(retain, nonatomic) MKFCKHome *activeNetworkRouterInHome; // @dynamic activeNetworkRouterInHome;
@property(nonatomic) _Bool airPlayEnabled; // @dynamic airPlayEnabled;
@property(nonatomic) _Bool announceEnabled; // @dynamic announceEnabled;
@property(copy, nonatomic) NSNumber *cameraAccessModeAtHome; // @dynamic cameraAccessModeAtHome;
@property(copy, nonatomic) NSNumber *cameraAccessModeNotAtHome; // @dynamic cameraAccessModeNotAtHome;
@property(retain, nonatomic) NSSet *cameraActivityZones; // @dynamic cameraActivityZones;
@property(nonatomic) _Bool cameraActivityZonesIncludedForSignificantEventDetection; // @dynamic cameraActivityZonesIncludedForSignificantEventDetection;
@property(nonatomic) long long cameraRecordingEventTriggers; // @dynamic cameraRecordingEventTriggers;
@property(copy, nonatomic) NSNumber *category; // @dynamic category;
@property(copy, nonatomic) NSNumber *certificationStatus; // @dynamic certificationStatus;
@property(nonatomic) _Bool doorbellChimeEnabled; // @dynamic doorbellChimeEnabled;
@property(nonatomic) _Bool hasDismissedHomePodHasNonMemberMediaAccountWarning; // @dynamic hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property(nonatomic) _Bool hasOnboardedForNaturalLighting; // @dynamic hasOnboardedForNaturalLighting;
@property(retain, nonatomic) NSArray *initialServiceTypes; // @dynamic initialServiceTypes;
@property(nonatomic) _Bool interactionHoldDurationEnabled; // @dynamic interactionHoldDurationEnabled;
@property(nonatomic) long long interactionHoldDurationSeconds; // @dynamic interactionHoldDurationSeconds;
@property(nonatomic) _Bool interactionIgnoreRepeatEnabled; // @dynamic interactionIgnoreRepeatEnabled;
@property(nonatomic) long long interactionIgnoreRepeatSeconds; // @dynamic interactionIgnoreRepeatSeconds;
@property(nonatomic) _Bool interactionTouchAccommodationsEnabled; // @dynamic interactionTouchAccommodationsEnabled;
@property(nonatomic) _Bool lightWhenUsingSiriEnabled; // @dynamic lightWhenUsingSiriEnabled;
@property(retain, nonatomic) NSData *matCredRGSI; // @dynamic matCredRGSI;
@property(copy, nonatomic) NSString *matterExtendedMACAddress; // @dynamic matterExtendedMACAddress;
@property(nonatomic) long long matterNodeID; // @dynamic matterNodeID;
@property(nonatomic) long long matterProductID; // @dynamic matterProductID;
@property(nonatomic) long long matterVendorID; // @dynamic matterVendorID;
@property(nonatomic) long long matterWEDSupport; // @dynamic matterWEDSupport;
@property(nonatomic) long long needsOnboarding; // @dynamic needsOnboarding;
@property(retain, nonatomic) NSData *preexistingMatCredGRK; // @dynamic preexistingMatCredGRK;
@property(retain, nonatomic) NSData *preexistingMatCredRGI; // @dynamic preexistingMatCredRGI;
@property(retain, nonatomic) NSData *preexistingMatCredRPK; // @dynamic preexistingMatCredRPK;
@property(retain, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(retain, nonatomic) NSDictionary *serviceApplicationData; // @dynamic serviceApplicationData;
@property(retain, nonatomic) NSDictionary *serviceAssociatedServiceTypes; // @dynamic serviceAssociatedServiceTypes;
@property(retain, nonatomic) NSDictionary *serviceConfiguredNames; // @dynamic serviceConfiguredNames;
@property(retain, nonatomic) NSDictionary *serviceProperties; // @dynamic serviceProperties;
@property(nonatomic) _Bool shareSiriAnalytics; // @dynamic shareSiriAnalytics;
@property(nonatomic) _Bool shareSpeakerAnalytics; // @dynamic shareSpeakerAnalytics;
@property(nonatomic) _Bool siriEnabled; // @dynamic siriEnabled;
@property(nonatomic) _Bool siriEndpointEnabled; // @dynamic siriEndpointEnabled;
@property(copy, nonatomic) NSString *siriLanguageCode; // @dynamic siriLanguageCode;
@property(copy, nonatomic) NSString *siriLanguageVoiceCode; // @dynamic siriLanguageVoiceCode;
@property(copy, nonatomic) NSString *siriLanguageVoiceGenderCode; // @dynamic siriLanguageVoiceGenderCode;
@property(copy, nonatomic) NSString *siriLanguageVoiceName; // @dynamic siriLanguageVoiceName;
@property(nonatomic) _Bool soundAlertEnabled; // @dynamic soundAlertEnabled;
@property(copy, nonatomic) NSNumber *supportedLinkLayerTypes; // @dynamic supportedLinkLayerTypes;
@property(nonatomic) _Bool supportsNativeMatter; // @dynamic supportsNativeMatter;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(nonatomic) long long visionDoubleTapSettingsTimeoutInterval; // @dynamic visionDoubleTapSettingsTimeoutInterval;
@property(nonatomic) long long visionSpeakingRate; // @dynamic visionSpeakingRate;
@property(nonatomic) _Bool visionVoiceOverAudioDuckingEnabled; // @dynamic visionVoiceOverAudioDuckingEnabled;
@property(nonatomic) _Bool visionVoiceOverEnabled; // @dynamic visionVoiceOverEnabled;

@end
