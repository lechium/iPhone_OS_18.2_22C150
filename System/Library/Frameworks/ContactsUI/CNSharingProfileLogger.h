//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNSharingProfileLogger : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
}

+ (id)log;	// IMP=0x006000000030a753
- (void).cxx_destruct;	// IMP=0x000000000030a743
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)logSettingsReturningEmptyImage;	// IMP=0x000000000030a6d9
- (void)logSettingsReturningEmptyImageForNoChange;	// IMP=0x000000000030a692
- (void)logSettingsReturningDefaultMonogram;	// IMP=0x000000000030a64b
- (void)logSettingsReturningSharingResultWithDescription:(id)arg1;	// IMP=0x000000000030a5bd
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1;	// IMP=0x000000000030a52f
- (void)logSettingsSuccessSavingContact;	// IMP=0x000000000030a4e8
- (void)logSettingsErrorSettingMeContactWithDescription:(id)arg1;	// IMP=0x000000000030a452
- (void)logSettingsSettingMeContact;	// IMP=0x000000000030a40b
- (void)logSettingsErrorSavingContactWithDescription:(id)arg1;	// IMP=0x000000000030a375
- (void)logSettingsSavingContact:(id)arg1;	// IMP=0x000000000030a2e7
- (void)logOnboardingReturningNonAnimojiItem;	// IMP=0x000000000030a298
- (void)logOnboardingReturningEmptyImage;	// IMP=0x000000000030a249
- (void)logOnboardingReturningDefaultMonogram;	// IMP=0x000000000030a202
- (void)logOnboardingReturningSharingResultWithDescription:(id)arg1;	// IMP=0x000000000030a174
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1;	// IMP=0x000000000030a0de
- (void)logOnboardingSuccessSavingContact;	// IMP=0x000000000030a097
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1;	// IMP=0x000000000030a001
- (void)logOnboardingSettingMeContact;	// IMP=0x0000000000309fba
- (void)logOnboardingErrorSavingContactWithDescription:(id)arg1;	// IMP=0x0000000000309f24
- (void)logOnboardingUpdatingContactWithIdentifier:(id)arg1;	// IMP=0x0000000000309e96
- (void)logOnboardingAddingContact;	// IMP=0x0000000000309e4f
- (void)logOnboardingSavingContact:(id)arg1;	// IMP=0x0000000000309dc1
- (void)logOnboardingErrorSavingMeCardPosterToRecentsWithDescription:(id)arg1;	// IMP=0x0000000000309d33
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1;	// IMP=0x0000000000309ca5
- (void)logOnboardingSuccessSavingMeCardPosterToRecents;	// IMP=0x0000000000309c5e
- (void)logOnboardingSuccessSavingMeCardImageToRecents;	// IMP=0x0000000000309c17
- (void)logOnboardingSavingMeCardPosterToRecentsForIdentifier:(id)arg1;	// IMP=0x0000000000309b89
- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1;	// IMP=0x0000000000309afb
- (id)init;	// IMP=0x0000000000309a91

@end

