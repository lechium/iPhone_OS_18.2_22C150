//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class GEORPThirdPartyPhotoSharingPreference, NSString;

@interface UGCThirdPartyPhotoSharingSplashViewController : UIViewController
{
    GEORPThirdPartyPhotoSharingPreference *_thirdPartyPhotoSharingPreference;	// 8 = 0x8
}

+ (void)checkShouldPresentPhotoSharingSplash:(CDUnknownBlockType)arg1;	// IMP=0x0020000000e7350f
- (void).cxx_destruct;	// IMP=0x0020000000e74003
@property(retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *thirdPartyPhotoSharingPreference; // @synthesize thirdPartyPhotoSharingPreference=_thirdPartyPhotoSharingPreference;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x0010000000e73fd6
- (void)_setThirdPartyPhotoShareEnabled:(_Bool)arg1;	// IMP=0x0010000000e73c3e
- (void)_noThanksPressed;	// IMP=0x0010000000e73c2a
- (void)_sharePressed;	// IMP=0x0010000000e73c13
- (id)_obViewController;	// IMP=0x0010000000e73910
- (void)viewDidLoad;	// IMP=0x0010000000e7372e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

