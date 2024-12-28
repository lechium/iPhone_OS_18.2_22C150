//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString;
@protocol ASCOffer;

__attribute__((visibility("hidden")))
@interface ASCOfferAlertOffer : NSObject
{
    _Bool _isCancelable;	// 8 = 0x8
    _Bool _shouldCheckForAvailableDiskSpace;	// 9 = 0x9
    _Bool _shouldIncludeActiveAccountInFooterMessage;	// 10 = 0xa
    _Bool _shouldPromptForConfirmation;	// 11 = 0xb
    ASCAdamID *_id;	// 16 = 0x10
    NSDictionary *_titles;	// 24 = 0x18
    NSDictionary *_subtitles;	// 32 = 0x20
    long long _flags;	// 40 = 0x28
    NSNumber *_ageRating;	// 48 = 0x30
    NSArray *_metrics;	// 56 = 0x38
    NSString *_alertTitle;	// 64 = 0x40
    NSString *_alertMessage;	// 72 = 0x48
    NSString *_alertFooterMessage;	// 80 = 0x50
    NSNumber *_checkRestrictionsForContentRating;	// 88 = 0x58
    NSString *_remoteControllerRequirement;	// 96 = 0x60
    id <ASCOffer> _completionOffer;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000543f3
- (void).cxx_destruct;	// IMP=0x0000000000055d38
@property(readonly, copy, nonatomic) id <ASCOffer> completionOffer; // @synthesize completionOffer=_completionOffer;
@property(readonly, nonatomic) _Bool shouldPromptForConfirmation; // @synthesize shouldPromptForConfirmation=_shouldPromptForConfirmation;
@property(readonly, nonatomic) _Bool shouldIncludeActiveAccountInFooterMessage; // @synthesize shouldIncludeActiveAccountInFooterMessage=_shouldIncludeActiveAccountInFooterMessage;
@property(readonly, copy, nonatomic) NSString *remoteControllerRequirement; // @synthesize remoteControllerRequirement=_remoteControllerRequirement;
@property(readonly, nonatomic) _Bool shouldCheckForAvailableDiskSpace; // @synthesize shouldCheckForAvailableDiskSpace=_shouldCheckForAvailableDiskSpace;
@property(readonly, copy, nonatomic) NSNumber *checkRestrictionsForContentRating; // @synthesize checkRestrictionsForContentRating=_checkRestrictionsForContentRating;
@property(readonly, nonatomic) _Bool isCancelable; // @synthesize isCancelable=_isCancelable;
@property(readonly, copy, nonatomic) NSString *alertFooterMessage; // @synthesize alertFooterMessage=_alertFooterMessage;
@property(readonly, copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(readonly, copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000550d3
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x0000000000054b91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054b86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054844
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000543fb
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 alertTitle:(id)arg7 alertMessage:(id)arg8 alertFooterMessage:(id)arg9 isCancelable:(_Bool)arg10 checkRestrictionsForContentRating:(id)arg11 shouldCheckForAvailableDiskSpace:(_Bool)arg12 remoteControllerRequirement:(id)arg13 shouldIncludeActiveAccountInFooterMessage:(_Bool)arg14 shouldPromptForConfirmation:(_Bool)arg15 completionOffer:(id)arg16;	// IMP=0x0000000000054195

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
