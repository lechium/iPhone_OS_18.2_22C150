//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIRenditionKey, CUIThemeRendition, NSString;

@interface CUINamedLookup : NSObject
{
    NSString *_name;	// 8 = 0x8
    CUIRenditionKey *_key;	// 16 = 0x10
    NSString *_signature;	// 24 = 0x18
    unsigned long long _storageRef;	// 32 = 0x20
    unsigned int _distilledInVersion;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 44 = 0x2c
    unsigned int _odContent:1;	// 48 = 0x30
}

@property(nonatomic) unsigned long long storageRef; // @synthesize storageRef=_storageRef;
@property(copy, nonatomic) CUIRenditionKey *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long appearanceIdentifier;
@property(readonly, nonatomic) NSString *appearance;
@property(readonly, nonatomic) long long localization;
@property(readonly, nonatomic) long long layoutDirection;
@property(readonly, nonatomic) long long displayGamut;
@property(readonly, nonatomic) long long graphicsClass;
@property(readonly, nonatomic) long long memoryClass;
@property(readonly, nonatomic) long long sizeClassVertical;
@property(readonly, nonatomic) long long sizeClassHorizontal;
@property(readonly, nonatomic) unsigned long long subtype;
@property(readonly, nonatomic) long long idiom;
@property(readonly, nonatomic) unsigned int _distilledInVersion;
- (_Bool)isTintable;	// IMP=0x000000000006d8e1
- (void)setRepresentsOnDemandContent:(_Bool)arg1;	// IMP=0x000000000006d8d1
@property(readonly, nonatomic) _Bool representsOnDemandContent;
@property(readonly, nonatomic) CUIRenditionKey *renditionKey;
@property(readonly, nonatomic) NSString *renditionName;
@property(readonly, nonatomic) CUIThemeRendition *_rendition;
@property(readonly, nonatomic) NSString *keySignature;
- (id)_renditionForSpecificKey:(id)arg1;	// IMP=0x000000000006d822
- (void)dealloc;	// IMP=0x000000000006d7d1
- (unsigned long long)hash;	// IMP=0x000000000006d7a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d74a
@property(readonly, nonatomic) _Bool _cacheRenditionProperties;
- (void)unlock;	// IMP=0x000000000006d6dd
- (void)lock;	// IMP=0x000000000006d6cf
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;	// IMP=0x000000000006d5fd

@end

