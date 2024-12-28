//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVTStickerShaderModifierProperty : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    id _value;	// 24 = 0x18
    id _originalValue;	// 32 = 0x20
    id _effectiveValue;	// 40 = 0x28
}

+ (id)shaderModifierPropertyFromDictionary:(id)arg1 assetsPath:(id)arg2;	// IMP=0x00600000000723db
+ (id)shaderModifierPropertyCache;	// IMP=0x0060000000072386
- (void).cxx_destruct;	// IMP=0x00000000000728a5
@property(readonly, nonatomic) id effectiveValue; // @synthesize effectiveValue=_effectiveValue;
@property(retain, nonatomic) id originalValue; // @synthesize originalValue=_originalValue;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionaryWithTargetPath:(id)arg1;	// IMP=0x00000000000727c9
- (id)initWithName:(id)arg1 type:(id)arg2 value:(id)arg3 originalValue:(id)arg4;	// IMP=0x0000000000072634

@end
