//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact;
@protocol CNSharingProfileOnboardingAudienceController;

@protocol CNSharingProfileOnboardingAudienceControllerDelegate <NSObject>
- (void)audienceController:(id <CNSharingProfileOnboardingAudienceController>)arg1 didFinishWithContact:(CNContact *)arg2 sharingAudience:(unsigned long long)arg3;

@optional
- (void)audienceControllerDidTapSetupLater:(id <CNSharingProfileOnboardingAudienceController>)arg1;
@end

