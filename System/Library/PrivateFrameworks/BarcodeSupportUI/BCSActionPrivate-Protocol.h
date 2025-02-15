//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BarcodeSupportUI/BCSAction-Protocol.h>

@class CPSClipMetadataRequest, NSArray, NSDictionary, NSString;

@protocol BCSActionPrivate <BCSAction>
@property(readonly, nonatomic) _Bool isContinuityCameraAction;
@property(readonly, nonatomic) _Bool isAirplayPairingAction;
@property(readonly, nonatomic) _Bool isLiveCameraOnlyAction;
@property(readonly, nonatomic) _Bool isPasskeyRegistrationAction;
@property(readonly, nonatomic) _Bool isPasskeyAssertionAction;
@property(readonly, nonatomic) _Bool isPasskeyAction;
@property(readonly, nonatomic) _Bool isAMSAction;
@property(retain, nonatomic) CPSClipMetadataRequest *clipMetadataRequest;
@property(readonly, nonatomic) _Bool hasSensitiveURL;
@property(readonly, nonatomic) _Bool shouldRequireUserToPickTargetApp;
@property(readonly, nonatomic) long long codeType;
@property(readonly, nonatomic) _Bool isWiFiAction;
@property(readonly, nonatomic) _Bool isInvalidDataAction;
@property(readonly, copy, nonatomic) NSArray *appLinks;
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@end

