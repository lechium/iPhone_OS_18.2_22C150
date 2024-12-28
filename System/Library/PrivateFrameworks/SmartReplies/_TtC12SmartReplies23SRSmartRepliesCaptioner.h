//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC12SmartReplies23SRSmartRepliesCaptioner : NSObject
{
    MISSING_TYPE *preferredLanguageCode;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_captionPhraseArbiter;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_shortcodeResolutionManager;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_predictionExemptTermsDetector;	// 56 = 0x38
}

+ (_Bool)looksLikePhoneShortCodeWithHandle:(id)arg1;	// IMP=0x006000000002359d
- (void).cxx_destruct;	// IMP=0x00000000000285dc
- (id)init;	// IMP=0x000000000002859b
- (void)captionsWithContactDetail:(id)arg1 associatedText:(id)arg2 onComplete:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024d80
- (id)normalizedShortCodeMessageTextWithContactDetail:(id)arg1 originalMessageText:(id)arg2;	// IMP=0x0000000000023dd7
- (void)captionsWithImage:(struct CGImage *)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023512
- (void)captionsWithImageURLs:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000000218b2
- (void)captionsWithImageURL:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000000213d8
- (void)unifiedImageCaptionFor:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x00000000000200cd
- (void)captionsWithText:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f6f2
- (void)captionsWithText:(id)arg1 preferBusinessTopics:(_Bool)arg2 onComplete:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f3bf
- (void)summaryCaptionsFor:(id)arg1 withTopicsOnly:(_Bool)arg2 onComplete:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f077
- (void)summaryCaptionsFor:(id)arg1 withTopicsOnly:(_Bool)arg2 preferBusinessTopics:(_Bool)arg3 onComplete:(CDUnknownBlockType)arg4;	// IMP=0x000000000001ef8e
- (void)captionsWithLinkMetadata:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c97c
- (void)friendlyCaptionFor:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c894
@property(nonatomic, copy) NSString *preferredLanguageCode;

@end
