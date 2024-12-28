//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (LTTranslationError)
+ (id)lt_unsupportedTargetLanguageError:(id)arg1;	// IMP=0x006000000000fb0c
+ (id)lt_unsupportedSourceLanguageError:(id)arg1;	// IMP=0x006000000000fa5e
+ (id)lt_unsupportedPairingErrorWithSource:(id)arg1 target:(id)arg2;	// IMP=0x006000000000f986
+ (id)lt_unsupportedLanguageError:(id)arg1;	// IMP=0x006000000000f881
+ (id)lt_translationTimeout;	// IMP=0x006000000000f7e1
+ (id)lt_speechLimitExceeded;	// IMP=0x006000000000f741
+ (id)lt_speechTranslationOngoing;	// IMP=0x006000000000f6a1
+ (id)lt_invalidRequestErrorWithDescription:(id)arg1;	// IMP=0x006000000000f684
+ (id)lt_offlineNotImplementedError;	// IMP=0x006000000000f5e4
+ (id)lt_onlineNotImplementedError;	// IMP=0x006000000000f544
+ (id)lt_errorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;	// IMP=0x006000000000f464
@end
