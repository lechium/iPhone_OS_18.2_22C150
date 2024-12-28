//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIContentRating, VUIExtrasInfo, VUIMediaEntity, VUIVideosPlayable;
@protocol TVPMediaItem, VUIControllerPresenter;

__attribute__((visibility("hidden")))
@interface VUIPreflightManager : NSObject
{
    _Bool _contentAllowsCellularDownload;	// 8 = 0x8
    _Bool _isSubscriptionPurchaseWithoutPlayback;	// 9 = 0x9
    VUIVideosPlayable *_videosPlayable;	// 16 = 0x10
    NSObject<TVPMediaItem> *_mediaItem;	// 24 = 0x18
    VUIMediaEntity *_mediaEntity;	// 32 = 0x20
    VUIExtrasInfo *_extrasInfo;	// 40 = 0x28
    VUIContentRating *_contentRating;	// 48 = 0x30
    unsigned long long _restrictionsCheckType;	// 56 = 0x38
    NSObject<VUIControllerPresenter> *_presentingController;	// 64 = 0x40
    CDUnknownBlockType _savedRestrictionsCompletion;	// 72 = 0x48
    long long _restrictionsState;	// 80 = 0x50
    id _restrictionsValidationToken;	// 88 = 0x58
}

+ (id)defaultPreflightManager;	// IMP=0x00600000001b0023
- (void).cxx_destruct;	// IMP=0x00000000001b37c6
@property(retain, nonatomic) id restrictionsValidationToken; // @synthesize restrictionsValidationToken=_restrictionsValidationToken;
@property(nonatomic) long long restrictionsState; // @synthesize restrictionsState=_restrictionsState;
@property(copy, nonatomic) CDUnknownBlockType savedRestrictionsCompletion; // @synthesize savedRestrictionsCompletion=_savedRestrictionsCompletion;
@property(nonatomic) _Bool isSubscriptionPurchaseWithoutPlayback; // @synthesize isSubscriptionPurchaseWithoutPlayback=_isSubscriptionPurchaseWithoutPlayback;
@property(retain, nonatomic) NSObject<VUIControllerPresenter> *presentingController; // @synthesize presentingController=_presentingController;
@property(nonatomic) unsigned long long restrictionsCheckType; // @synthesize restrictionsCheckType=_restrictionsCheckType;
@property(nonatomic) _Bool contentAllowsCellularDownload; // @synthesize contentAllowsCellularDownload=_contentAllowsCellularDownload;
@property(retain, nonatomic) VUIContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(retain, nonatomic) VUIExtrasInfo *extrasInfo; // @synthesize extrasInfo=_extrasInfo;
@property(retain, nonatomic) VUIMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property(retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) VUIVideosPlayable *videosPlayable; // @synthesize videosPlayable=_videosPlayable;
- (void)_promptForHighQualityDownloadsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b36be
- (void)_preflightDownloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b27e7
- (void)_showAgeConfirmationWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b24a2
- (_Bool)_shouldShowAgeConfirmationAlert;	// IMP=0x00000000001b23b5
- (void)_setLastAgeConfirmationPrompted:(id)arg1;	// IMP=0x00000000001b2341
- (id)_lastAgeConfirmationPrompted;	// IMP=0x00000000001b22e3
- (void)_setLastConfirmedAge:(long long)arg1;	// IMP=0x00000000001b2289
- (long long)_lastConfirmedAge;	// IMP=0x00000000001b2237
- (void)_performAgeGateVerificationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b1f4a
- (long long)_requiredAgeForPlayback;	// IMP=0x00000000001b1e38
- (_Bool)_isAllowedToPlayOrPurchase;	// IMP=0x00000000001b1c3b
- (void)_showRestrictionsAlertForRatingDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b179f
- (void)_performRestrictionsCheckWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b1652
- (id)_ratingValue;	// IMP=0x00000000001b13d4
- (_Bool)_isSportingEvent;	// IMP=0x00000000001b127c
- (_Bool)_isTrailer;	// IMP=0x00000000001b1144
- (id)_ratingDomain;	// IMP=0x00000000001b0e6a
- (void)_logRatingsInfo:(id)arg1 maxAllowedRank:(id)arg2 ratingValue:(id)arg3;	// IMP=0x00000000001b0b99
- (void)_preflightWithOptions:(long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b042c
- (void)preflightWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b026f
- (id)init;	// IMP=0x00000000001b0078

@end
