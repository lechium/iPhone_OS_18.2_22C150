//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSelectedConfiguration, HMDCameraRecordingSupportedAudioConfiguration, HMDCameraRecordingSupportedVideoConfiguration, HMDCharacteristic, HMDHAPAccessory, HMDService, NSArray, NSDictionary, NSMutableArray, NSNotificationCenter, NSObject, NSString;
@protocol HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSettingsControl : HMFObject
{
    _Bool _canUseCachedCharacteristicValues;	// 8 = 0x8
    id <HMDCameraRecordingSettingsControlDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDService *_recordingService;	// 32 = 0x20
    HMDHAPAccessory *_accessory;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
    NSString *_clientIdentifier;	// 56 = 0x38
    NSMutableArray *_pendingConfigureCompletionHandlers;	// 64 = 0x40
    HMDCameraRecordingGeneralConfiguration *_supportedRecordingConfiguration;	// 72 = 0x48
    HMDCameraRecordingSupportedVideoConfiguration *_supportedVideoConfiguration;	// 80 = 0x50
    HMDCameraRecordingSupportedAudioConfiguration *_supportedAudioConfiguration;	// 88 = 0x58
    HMDCameraRecordingSelectedConfiguration *_currentSelectedConfiguration;	// 96 = 0x60
    NSDictionary *_recordingConfigurationOverrides;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x001000000084a52b
+ (id)audioCodecForCodecConfiguration:(id)arg1;	// IMP=0x001000000084a48c
+ (id)audioBitRateForCodecConfiguration:(id)arg1;	// IMP=0x001000000084a30a
+ (_Bool)isSupportedAudioCodec:(id)arg1;	// IMP=0x001000000084a2ed
+ (id)videoCodecForCodecConfiguration:(id)arg1;	// IMP=0x001000000084a252
+ (id)h264ProfileForCodecConfiguration:(id)arg1;	// IMP=0x001000000084a0cb
+ (_Bool)isSupportedH264Profile:(id)arg1;	// IMP=0x001000000084a0ae
+ (_Bool)isSupportedVideoCodec:(id)arg1;	// IMP=0x001000000084a092
+ (id)audioConfigurationsByPreferenceOrder;	// IMP=0x001000000084a02f
- (void).cxx_destruct;	// IMP=0x00000000008488c9
@property(retain) NSDictionary *recordingConfigurationOverrides; // @synthesize recordingConfigurationOverrides=_recordingConfigurationOverrides;
@property(retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration; // @synthesize currentSelectedConfiguration=_currentSelectedConfiguration;
@property(retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration; // @synthesize supportedAudioConfiguration=_supportedAudioConfiguration;
@property(retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration; // @synthesize supportedVideoConfiguration=_supportedVideoConfiguration;
@property(retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration; // @synthesize supportedRecordingConfiguration=_supportedRecordingConfiguration;
@property _Bool canUseCachedCharacteristicValues; // @synthesize canUseCachedCharacteristicValues=_canUseCachedCharacteristicValues;
@property(readonly) NSMutableArray *pendingConfigureCompletionHandlers; // @synthesize pendingConfigureCompletionHandlers=_pendingConfigureCompletionHandlers;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) HMDService *recordingService; // @synthesize recordingService=_recordingService;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraRecordingSettingsControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000084865a
@property(readonly, getter=isCameraConfiguredForRecording) _Bool cameraConfiguredForRecording;
- (void)_setSelectedRecordingConfiguration:(id)arg1;	// IMP=0x00000000008483e5
- (void)_invokePendingConfigureCompletionHandlersWithSelectedConfiguration:(id)arg1 error:(id)arg2;	// IMP=0x00000000008481d6
- (void)_invokePendingConfigureCompletionHandlersWithError:(id)arg1;	// IMP=0x0000000000848158
- (void)_invokePendingConfigureCompletionHandlersWithSelectedConfiguration:(id)arg1;	// IMP=0x00000000008480da
- (id)_numberValueForCharacteristicOfType:(id)arg1 inResponses:(id)arg2;	// IMP=0x0000000000847e12
- (id)_dataValueForCharacteristicOfType:(id)arg1 inResponses:(id)arg2;	// IMP=0x0000000000847b4a
- (id)_supportedVideoConfigurationInResponses:(id)arg1;	// IMP=0x0000000000847945
- (id)_supportedAudioConfigurationInResponses:(id)arg1;	// IMP=0x0000000000847740
- (id)_generalRecordingConfigurationInResponses:(id)arg1;	// IMP=0x000000000084753b
- (id)_selectedRecordingConfigurationInResponses:(id)arg1;	// IMP=0x0000000000847336
- (id)_isRecordingActiveValueInResponses:(id)arg1;	// IMP=0x00000000008471c1
- (void)_handleSupportedConfigurationCharacteristicsReadResponses:(id)arg1;	// IMP=0x0000000000846975
- (void)_readSupportedCameraRecordingConfiguration;	// IMP=0x00000000008466fa
- (void)_handleCurrentIsRecordingActive:(id)arg1 selectedConfiguration:(id)arg2;	// IMP=0x0000000000845ef4
- (void)_readCameraRecordingSettings;	// IMP=0x0000000000845983
- (void)_updateSelectedRecordingConfiguration:(id)arg1;	// IMP=0x0000000000845806
- (void)_writeCameraRecordingSettings;	// IMP=0x0000000000845672
- (_Bool)_shouldReconfigureForChangedCharacteristic:(id)arg1;	// IMP=0x00000000008455aa
- (void)handleAccessoryIsNotConfiguredError;	// IMP=0x0000000000845550
- (void)reconfigureCameraRecordingSettingsWithReason:(id)arg1;	// IMP=0x00000000008453fe
- (void)configureCameraRecordingSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000084522b
- (void)configureCameraRecordingSettings;	// IMP=0x00000000008451d1
- (void)dealloc;	// IMP=0x000000000084504d
- (void)enableCharacteristicNotifications;	// IMP=0x0000000000844e7a
- (id)_recordingAudioConfiguration;	// IMP=0x00000000008443c9
@property(readonly) HMDCharacteristic *recordingSelectedConfigurationCharacteristic;
@property(readonly) HMDCharacteristic *recordingSupportedVideoConfigurationCharacteristic;
@property(readonly) HMDCharacteristic *recordingSupportedAudioConfigurationCharacteristic;
@property(readonly) HMDCharacteristic *recordingSupportedGeneralConfigurationCharacteristic;
@property(readonly) HMDCharacteristic *recordingActiveCharacteristic;
@property(readonly, getter=isPrimaryResident) _Bool primaryResident;
- (id)characteristicsToMonitor;	// IMP=0x00000000008440e2
- (id)_recordingVideoConfiguration;	// IMP=0x00000000008436a2
- (id)_preferredAudioConfigurationOverride;	// IMP=0x0000000000843337
- (id)_preferredVideoConfigurationOverride;	// IMP=0x0000000000842ab8
- (id)_recordingGeneralConfiguration;	// IMP=0x00000000008420dc
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x0000000000842024
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000841f6c
- (void)handleCharacteristicsUpdatedNotification:(id)arg1;	// IMP=0x0000000000841eb4
- (void)handleAccessoryConnectedNotification:(id)arg1;	// IMP=0x0000000000841dfc
- (void)handleAccessoryDisconnectedNotification:(id)arg1;	// IMP=0x0000000000841d44
- (void)start;	// IMP=0x0000000000841840
@property(readonly, copy) NSArray *videoConfigurationsByPreferenceOrder;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3 notificationCenter:(id)arg4;	// IMP=0x0000000000840e49
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3;	// IMP=0x0000000000840d99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

