//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADTextListStyle : NSObject
{
    NSMutableArray *mParagraphProperties;	// 8 = 0x8
    NSString *mLanguage;	// 16 = 0x10
}

+ (id)defaultObject;	// IMP=0x0060000000329a6b
- (void).cxx_destruct;	// IMP=0x0000000000329d13
@property(retain, nonatomic) NSString *language; // @synthesize language=mLanguage;
- (id)description;	// IMP=0x0000000000329cba
- (void)enumerateParagraphPropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000329ca4
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000002f9cf
- (void)overrideWithTextStyle:(id)arg1;	// IMP=0x0000000000038be2
- (void)flatten;	// IMP=0x0000000000329c29
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;	// IMP=0x0000000000329ace
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000002e446
- (void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2;	// IMP=0x0000000000329ab8
- (id)propertiesForListLevel:(unsigned long long)arg1;	// IMP=0x0000000000018802
- (id)defaultProperties;	// IMP=0x000000000002e5a1
- (id)initWithDefaults;	// IMP=0x000000000000a5e1
- (id)init;	// IMP=0x000000000001e1e0

@end

