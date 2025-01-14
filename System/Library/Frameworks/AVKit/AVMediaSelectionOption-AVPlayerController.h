//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class NSNumber, NSString;

@interface AVMediaSelectionOption (AVPlayerController)
+ (unsigned long long)avkit_subtitleAutomaticallyEnabledState;	// IMP=0x002000000004d79a
+ (id)avkit_recentLegibleLanguageCode;	// IMP=0x002000000004d743
+ (id)avkit_recentAudioLanguageCode;	// IMP=0x002000000004d6ec
+ (id)avkit_autoOption;	// IMP=0x0020000000189119
+ (id)avkit_offOption;	// IMP=0x00200000001890e9
@property(nonatomic, setter=avkit_setBestChoiceForRecentLanguage:) _Bool avkit_isBestChoiceForRecentLanguage;
@property(nonatomic, setter=avkit_setPreferredSortIndex:) long long avkit_preferredSortIndex;
- (long long)languageCompare:(id)arg1;	// IMP=0x001000000004d079
- (long long)audioLanguageCompare:(id)arg1;	// IMP=0x001000000004cf49
@property(readonly) NSString *avkit_recentLanguageCode;
- (_Bool)isOriginal;	// IMP=0x001000000004cee1
- (_Bool)isAudio;	// IMP=0x001000000004ce93
@property(readonly, getter=isAuxiliary) _Bool auxiliary;
@property(readonly, getter=isEasyReader) _Bool easyReader;
@property(readonly, getter=isCC) _Bool CC;
@property(readonly, getter=isSDH) _Bool SDH;
@property(readonly, getter=isMain) _Bool main;
@property(readonly, getter=isAC3Only) _Bool AC3Only;
@property(readonly) NSNumber *avkit_persistentIdentifier;
- (id)avkit_title;	// IMP=0x0010000000189009
@property(readonly, nonatomic) NSString *mediaRemoteIdentifier;
@property(readonly, nonatomic) NSString *shortLocalizedDisplayName;
@property(readonly, nonatomic) NSString *localizedDisplayName;
@property(readonly, nonatomic) NSString *avkit_displayName;
@end

