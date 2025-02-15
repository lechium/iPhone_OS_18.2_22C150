//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCameraClipEncryptionManager, NSDate;

__attribute__((visibility("hidden")))
@interface HMDCameraClipCreateClipOperation
{
    double _targetFragmentDuration;	// 8 = 0x8
    NSDate *_clipStartDate;	// 16 = 0x10
    long long _quality;	// 24 = 0x18
    HMCameraClipEncryptionManager *_encryptionManager;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0060000000974c7c
+ (unsigned long long)cameraClipOperationType;	// IMP=0x0060000000974c71
- (void).cxx_destruct;	// IMP=0x0000000000974c40
@property(readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) long long quality; // @synthesize quality=_quality;
@property(readonly, copy) NSDate *clipStartDate; // @synthesize clipStartDate=_clipStartDate;
@property(readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
- (id)attributeDescriptions;	// IMP=0x00000000009749fa
- (id)modelsToAdd;	// IMP=0x00000000009745e8
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(id)arg4 quality:(long long)arg5 encryptionManager:(id)arg6 dataSource:(id)arg7;	// IMP=0x0000000000974451
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(id)arg4 quality:(long long)arg5 encryptionManager:(id)arg6;	// IMP=0x0000000000974377

@end

